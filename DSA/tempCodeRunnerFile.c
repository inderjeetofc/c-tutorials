     printf("\nStack has parenthesis left to be balanced ! Expression is unbalanced");
    }
    else if (arrPtr[i] == '\0' && ptr->top <= -1 && count != 0)
        printf("\nStack has %d ) parenthesis left to be balanced ! Expression is unbalanced", -count);
        // printf("\nStack has parenthesis left to be balanced ! Expression is unbalanced");