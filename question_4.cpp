void ConcatRemove (const string & s, const string & t, int k)
{
  int steps = 0;
  int overplus = 0;
  int size = 0;
  bool empty = false;

  if (s.length () <= t.length ())
    {
      steps += (t.length () - s.length ());
      size = s.length ();
    }
  else
    {
      steps += (s.length () - t.length ());
      size = t.length ();
    }
  for (int i = 0; i < size; i++)
    {
      if (t[i] != s[i])
	{
	  if (i == 0)
	    {
	      empty = true;
	    }
	  steps += 2 * (size - i);
	  break;
	}
    }
  if (k == steps)
    {
      cout << "Yes";
    }
  else if (k > steps)
    {
      overplus = (k - steps);
      if (empty)
	{
	  cout << "Yes";
	}
      else if ((overplus % 2) == 0)
	{
	  cout << "Yes";
	}
      else
	{
	  cout << "No";
	}
    }
  else
    {
      cout << "No";
    }
}
