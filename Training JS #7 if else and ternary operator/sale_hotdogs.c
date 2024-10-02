unsigned short sale_hotdogs(unsigned short n) {
    return n < 5 ? (n * 100) : n >= 5 && n < 10 ? (n * 95) : (n * 90);
}