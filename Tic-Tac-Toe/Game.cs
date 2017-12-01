using System;
namespace Game
{
  class ttt
  {
    static void Main()
    {
      tic_tac_toe();
    }
    
    static void tic_tac_toe()
    {
      banner_ttt();
    }
    
    static void banner_ttt()
    {
      Console.WriteLine("\n\n");
      Console.WriteLine("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
      Console.WriteLine("                WELCOME TO TIC-TAC-TOE GAME                \n");
      Console.WriteLine("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
      Console.WriteLine("\n");
      Console.WriteLine("This is a 2 player game in which '0' goes prior to 'X' ^_^ \n");
      Console.WriteLine("Player has to enter the position where he/she wants to     \n");
      Console.WriteLine("place the '0' or 'X'\n\n\n");
      Console.ReadKey();
    }
  }
}
