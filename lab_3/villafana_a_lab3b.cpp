#include <iostream>

int main()
{    
    // Declare variables
    int chocolateBars = 0;
    int wrappers = 0;
    
    // Constants
    int REDEEM = 6;

    std::cout << "Chocolate bars are $1 each.\n";
    std::cout << "You can redeem wrappers: 6 wrappers = 1 free chocolate bar. \n" << std::endl;

    std::cout << "How many chocolate bars would you like to buy? ";
    std::cin >> chocolateBars;

    wrappers = chocolateBars;

    std::cout << "\nYou initially bought " << chocolateBars << " bars.\n";
    std::cout << "You now have " << wrappers << " wrappers." << std::endl; 
    
    while (wrappers >= REDEEM)
    {
        std::cout << "-----redeeming coupons-----" << std::endl;

        // New variables
        int newBars = chocolateBars / REDEEM;
        
        // 
        std::cout << "-----redeeming coupons-----" << std::endl;
        
    } 
    
    std::cout << "-----Final-----\n";
    std::cout << "You bought a total of " << chocolateBars << " chocolate bars!\n";
    std::cout << "You have " << wrappers << " wrappers left over." << std::endl;

   /*
        PROCESSING: 
        - n bars / 6
   */
   /*
        OUTPUT:
        - Number of coupons user will receive. 1:1 with chocolate bars
        - Redeem coupons for free choclate bars. 6:1/.
   */



    return 0;
}