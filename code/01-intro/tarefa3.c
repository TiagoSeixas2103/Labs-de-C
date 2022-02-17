int process_pixel(int level) {
    int new_level;
    int np = 127;

    if (level < np) {
        new_level = 0;
    } else {
        new_level = 255;
    }

    return new_level;
}
