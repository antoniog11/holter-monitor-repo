
#define ECG_PIN A0

int read_ECG(void)
{
    int x = analogRead(ECG_PIN);
    return x;
}
