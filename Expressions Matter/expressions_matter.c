int expression_matter(int a, int b, int c) {
    // Calculate all possible results
    int result1 = a + b + c;
    int result2 = a * b * c;
    int result3 = a * (b + c);
    int result4 = (a + b) * c;
    int result5 = a + (b * c);
    int result6 = (a * b) + c;

    // Find the maximum result
    int max_result = result1;
    if (result2 > max_result) max_result = result2;
    if (result3 > max_result) max_result = result3;
    if (result4 > max_result) max_result = result4;
    if (result5 > max_result) max_result = result5;
    if (result6 > max_result) max_result = result6;

    return max_result;
}