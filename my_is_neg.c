int	main(int argc, char **argv)
{
  printf("Arguments counter: %d\n", argc);
  printf("Arguments value: %s\n", argv[1]);
  int number = atoi(argv[1]);

  if(number < 0)
    {
      printf("N");
    }
  else
    {
      printf("P");
    }
  return(0);
}
