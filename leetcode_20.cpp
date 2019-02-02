bool isValid(char* s) {
    if (s == NULL) return true;
    if (strlen(s) & 1) return false;
    char *S = (char *) malloc (sizeof(char) * strlen(s));
    int top = 0;
    for (int i = 0; i < strlen(s); i++) {
      
        if (top == 0) S[top++] = s[i]; 
        else {
            switch (s[i]) {
                case '(' : S[top++] = s[i]; break;
                case '{' : S[top++] = s[i]; break;
                case '[' : S[top++] = s[i]; break;
                case ')' : if (S[top - 1] != '(') return false; else top--; break;
                case '}' : if (S[top - 1] != '{') return false; else top--; break;
                case ']' : if (S[top - 1] != '[') return false; else top--; break;
            }
        
        
        }
    }
    if (top == 0) return true;
    return false;
}

