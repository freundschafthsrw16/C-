#include <iostream>

using namespace std;
/** \brief :It is a code to practice continue code.
 *
 * \param :when it happens it skips the current iteration and jump to the next one
 * \param
 * \return
 *
 */

int main()
{
    for(int counter=1;counter <=10; counter++){
        if (counter==5) {
                continue;
        }
            cout << counter << endl;
    }

    return 0;
}
