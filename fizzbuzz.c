#include <stdio.h>

int _1(int _,int __)
{
        if ( _ <= ~01l+01 )
        {
                /* f(2) = 5
                * f(-2) = 17
                *
                * f(x) = -3x+11
                */

                /* fizz = 102, 105, 122, 122 */
                /* buzz = 98 , 117, 122, 122 */
                /*
                __ <<= 01l;

                putchar(0144l+ __-040l);
                putchar(0144l+ (-((1l<<01l)+01l))*__+013l );
                putchar(0144l+ ((__>>01>0l)?__*013l:-__*013l) );
                putchar(0144l+ ((__>>01>0l)?__*013l:-__*013l) );
                */


                int b = (__>0)?__:-__;

                if ( b == 1 )
                {
                        putchar(0144l+ (__<<1) -040l);
                        return _1(_, __ + (__/b));
                }
                else if (b==2)
                {
                        putchar(0144l+ (-((1l<<01l)+01l))*__+013l );
                        return _1(_, __ + (__/b));
                }
                else if (b<=4)
                {
                        putchar(0144l+ 22 );
                        return _1(_, __ + (__/b));
                }
                return 0144l;
        }

        if ( _ < __ && __)
                return _;
        else if (__)
                return _1(_-__,__);

        if ( _ > 0144l )
                return 00;

        !_1(_, (01l<<01l)+01l)?_1(~01+01l,01l<<00):0144l;

        if ( _1(_,(01l<<02l)+01l) == 00 )
        {
                _1(~1l+01,~01+1l);
        }
        else if ( _1(_, (01l<<01l)+01l ))
        {
                printf("%d",_);

        }

        putchar(10);

        return _1(_+01l,__);

}

int main(int _l)
{
        _1(_l,00<<0l<(~1+1));
}

