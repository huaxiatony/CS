class temp {
        public static void main(String args[])
        {
		
			myLine[] lines = {new myLine(1.0, 1.0), new myLine(-1.0, 0.0), new myLine(3.0, .75), new myLine(-3.0, 7.0)};
			for(int i = 0; i < lines.length-1;i++)
			{
				if(lines[i].isPerp(lines[i+1]))
				{
					System.out.println(lines[i] + " is perpendicular to "+lines[i+1]);
				}
				else
				{
					System.out.println(lines[i] + " and "+ lines[i+1] + " are not perpendicular.");
				}
			}
		
        }
}

// The line: y = 1.0x + 1.0 is perpendicular to The line: y = -1.0x + 0.0
// The line: y = -1.0x + 0.0 and The line: y = 3.0x + 0.75 are not perpendicular.
// The line: y = 3.0x + 0.75 and The line: y = -3.0x + 7.0 are not perpendicular.