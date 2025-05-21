using namespace std;

int studentDiscount(int price) {
    return static_cast<int>(price - price * 0.10);
}

int veteranDiscount(int price) {
    return static_cast<int>(price - price * 0.20);
}

int workerDiscount(int price) {
    return static_cast<int>(price - price * 0.30);
}
