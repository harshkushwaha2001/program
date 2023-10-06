using System;

class Program
{
    static double GetPositiveDouble(string prompt)
    {
        double value;
        do
        {
            Console.Write(prompt);
        } while (!double.TryParse(Console.ReadLine(), out value) || value <= 0);
        return value;
    }

    static double CalculateVolume(double baseLength, double baseHeight, double prismHeight)
    {
        double baseArea = 0.5 * baseLength * baseHeight;
        double volume = baseArea * prismHeight;
        return volume;
    }

    static void Main()
    {
        double baseLength, baseHeight, prismHeight;

        baseLength = GetPositiveDouble("Enter the base length of the triangular base: ");
        baseHeight = GetPositiveDouble("Enter the height of the triangular base: ");
        prismHeight = GetPositiveDouble("Enter the height of the triangular prism: ");

        double volume = CalculateVolume(baseLength, baseHeight, prismHeight);

        Console.WriteLine($"The volume of the triangular prism is: {volume}");
    }
}
