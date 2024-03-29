int mx_strcmp(const char *s1, const char *s2) { 
    int i = 0; 
    int res = 0; 
    while (s1[i] != '\0' || s2[i] != '\0') { 
        if ( s1[i] < s2[i]) {
            res -= s2[i] - s1[i]; 
        }
        else if ( s1[i] > s2[i]) {
            res += s1[i] - s2[i]; 
        }
        i++; 
    } 
    return res;
}
