#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
#include <bluetooth/hci_lib.h>

int main() {
    int dev_id = hci_get_route(NULL); // scan for bt adapters
    //confirm the capture of a bluetooth adapter
    if (dev_id > -1) {
        printf("Bluetooth Adapter Found\n");
    }
    else {
        printf("NO BLUETOOTH ADAPTERS WERE FOUND!\n");
        exit(1);   
    }

    //open a socket
    int sock = hci_open_dev(dev_id);
    if (sock < 0) {
        perror("Failed to open Bluetooth device");
        exit(1);
    }

    inquiry_info *ii = NULL;
    int num_rsp = hci_inquiry(dev_id, 8, 255, NULL, &ii, IREQ_CACHE_FLUSH);

    if (num_rsp < 0) {
        perror("Device search failed");
        exit(1);
    }

    printf("There were %d devices found\n", num_rsp);
    for (int i = 0; i < num_rsp; i++) {
        char addr[19] = {0};
        char name[248] = {0};

        //format the address
        ba2str(&(ii+i)->bdaddr, addr);

        if (hci_read_remote_name(sock, &(ii+i)->bdaddr, sizeof(name), name, 0) < 0) {
            strcpy(name, "[unknown]");
        }
    
        printf("%s %s\n", addr, name);
    }

    free(ii);
    close(sock);

    return 0;



    
    
}