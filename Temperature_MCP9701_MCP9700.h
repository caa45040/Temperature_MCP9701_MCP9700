
// Temperature_MCP9701_MCP9700.h 
//
// ex 3.3V analogReadResolution(12);
//         float Sensor = analogRead(A2);
//         float Voltage = Sensor * ( 3.3 / 4096.0 );
//         float Temperature = Temperature_MCP9701(Voltage);
//
float Temperature_MCP9701(float Voltage){

  return((Voltage - 0.4) * (1.0 / 0.0195));

}//Temperature_MCP9701


float Temperature_MCP9700(float Voltage){

  return((Voltage - 0.5) * (1.0 / 0.01));

}//Temperature_MCP9700


#define Temperature_MCP9701_A0() Temperature_MCP9701(analogRead(A0)*(5.0/1024.0))
#define Temperature_MCP9701_A1() Temperature_MCP9701(analogRead(A1)*(5.0/1024.0))
#define Temperature_MCP9701_A2() Temperature_MCP9701(analogRead(A2)*(5.0/1024.0))
#define Temperature_MCP9701_A3() Temperature_MCP9701(analogRead(A3)*(5.0/1024.0))
#define Temperature_MCP9701_A4() Temperature_MCP9701(analogRead(A4)*(5.0/1024.0))
#define Temperature_MCP9701_A5() Temperature_MCP9701(analogRead(A5)*(5.0/1024.0))

#define Temperature_MCP9700_A0() Temperature_MCP9700(analogRead(A0)*(5.0/1024.0))
#define Temperature_MCP9700_A1() Temperature_MCP9700(analogRead(A1)*(5.0/1024.0))
#define Temperature_MCP9700_A2() Temperature_MCP9700(analogRead(A2)*(5.0/1024.0))
#define Temperature_MCP9700_A3() Temperature_MCP9700(analogRead(A3)*(5.0/1024.0))
#define Temperature_MCP9700_A4() Temperature_MCP9700(analogRead(A4)*(5.0/1024.0))
#define Temperature_MCP9700_A5() Temperature_MCP9700(analogRead(A5)*(5.0/1024.0))
