/*Write program that declares Class awarded for a given percentage of marks, where
mark <40%= Failed, 40% to <60% = Second class, 60% to <70%=First class, >=
70% = Distinction. Read percentage from standard input.*/

int main() {
    int percentage;

    printf("\n Enter percentage : ");
    scanf("%d", &percentage);

    if(percentage < 40) {
        printf("Failed");
    } else if(percentage > 40 && percentage < 60) {
        printf("Second class");
    } else if(percentage > 60 && percentage < 70) {
        printf("First class");
    } else if(percentage >= 70) {
        printf("Distinction");
    } else {
        printf("Invalid percentage!");
    }
    
    return 0;
}