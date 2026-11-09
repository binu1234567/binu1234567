#include <stdio.h>
#include <string.h> // Yeh zaroori hai 'strcmp' tool chalane ke liye

int main() {
    char staff_naam[20]; // Ek dabba banaya jisme 20 aksharon tak ka naam aa sake

    printf("--- SERVER ROOM ACCESS CONTROL ---\n");
    printf("Bhai, apna naam daalo: ");
    
    // Naam input lene ke liye %s (String) use hota hai, aur isme '&' nahi lagana padta
    scanf("%s", staff_naam); 

    // strcmp dono naamo ko match karta hai. Agar dono bilkul SAME hain, toh yeh '0' deta hai.
    if (strcmp(staff_naam, "vinod") == 0 || strcmp(staff_naam, "rudra") == 0) {
        printf("Access Granted! ✅ Bhai, tum server room me ja sakte ho.\n");
    } 
    else {
        printf("Access Denied! ❌ Tumhara naam list me nahi hai. Baahar niklo!\n");
    }

    return 0;
}
