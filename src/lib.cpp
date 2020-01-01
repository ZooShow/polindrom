bool polindrom(char *str, int len_str, int len_true_str){
    char *true_str = new char [len_true_str];
    int j;
    bool match = true;
    --len_true_str;
    int k = 0;
    for (j = 0; j<len_str; ++j){
        if (str[j] != ' '){
            true_str[k] = str[j];
            ++k;
        }
    }
    for (j = 0; j<=len_true_str/2; ++j){
            if (true_str[j] != true_str[len_true_str-j]){
                match = false;
        }
    }
    return match;
}