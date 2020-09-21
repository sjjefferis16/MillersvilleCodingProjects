/*
Written by Samuel Jefferis

A program that helps determine how high a phone can be dropped when supplied with 2 phones.
This process will require at least two drops in the best case scenario of 1 foot.
In the worst case it will take 17 drops.
Ironically, the worst case for runtime is the best case for the duribility of the phone.
Also in the best case both phones will survive.

if the tower was 1000 floors tall and phone will break at 1000 floors without question, then the best
case is still two drops with a breaking point of 1 floor. At a breaking point of 999 floors, the phones
will need to be dropped 105 times.
*/


using System;
class PhoneDrop {
  static void Main() {
    //Grab two Phones
      Random rnd = new Random();
      int breakingPoint = makeRandom(rnd);
      int PhoneA = 0, PhoneB = 0;

      PhoneA = PhoneADrop(breakingPoint);
      if(PhoneA != 90){
      Console.WriteLine("Phone A broke at " + PhoneA + " Floors");
      }
      else{
      Console.WriteLine("Phone A will break at 100, no need to drop it again!");
      }

      PhoneB = PhoneBDrop(PhoneA, breakingPoint);
      if(PhoneB != 99){
      Console.WriteLine("Phone B broke at " + PhoneB + " Floors");
      }
      else{
      Console.WriteLine("Phone B will Break at 100, no need to drop it again!");
      }
      if(PhoneB > 90 && PhoneB != 99){
      PhoneA = PhoneB - 1;
        if(PhoneA == breakingPoint){
          PhoneB = PhoneA;
          Console.WriteLine("Phone a survived " + PhoneB + " Floors");
        }
      }
      //Check to see if the actually breaking point was found.
      //Also report if the phones survived
      if(PhoneB == breakingPoint){
        
        Console.WriteLine("the Phones have the top breaking point of " + breakingPoint + " Floors");
        
      }
      else{
      Console.WriteLine("Phone B did not break at the true breaking point of " + breakingPoint + " Floors and the point remains unchecked");
      }
      
      
  }
  
    //Drop phone A from increments of 10 until it breaks.
    public static int PhoneADrop(int breakingPoint)
    {
        int phoneAbroken = 0; 
        
        while(breakingPoint >= phoneAbroken && phoneAbroken != 90)
        {
            phoneAbroken += 10;
            if(breakingPoint > phoneAbroken){
            Console.WriteLine("Phone A survived " + phoneAbroken + " Floors");
            }
        }
        
        return phoneAbroken;
    }
    
    //Take the results from phone A and start from that floor. Increment by one until the breaking point is found
    public static int PhoneBDrop(int phoneAbroken, int breakingPoint)
    {
        int phoneBbroken = phoneAbroken;
        if(phoneAbroken != 90){
        phoneBbroken = phoneAbroken - 10;
        phoneAbroken -=10;
        }
        
        while(breakingPoint > phoneBbroken && phoneBbroken != 99)
        {
            if(phoneAbroken == 90 && phoneBbroken != 98){
              phoneBbroken += 2;
              if(breakingPoint > phoneBbroken){
              Console.WriteLine("Phone B survived " + phoneBbroken + " Floors");
              }
            }
            else if (phoneBbroken == 98){
                return 99;
            }
            else{
              phoneBbroken++;
              if(breakingPoint > phoneBbroken){
              Console.WriteLine("Phone B survived " + phoneBbroken + " Floors");
              }
            }
        }
        
        return phoneBbroken;
    }
    
    public static int makeRandom(Random rnd)
    {
    return rnd.Next(99);
    }
}
