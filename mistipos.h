  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #define TAMTABLA 60

struct tipoentrevista{
    char estado[20];
    char codigo[4];
    char p1[1000];
    char p2[1000];
    char p3[1000];
    char p4[1000];
    char p5[1000];
    char p6[1000];
    char p7[1000];
    char p8[1000];
    char p9[1000];
    char p10[1000];
    char p11[1000];
    char p12[1000];
    char p13[1000];
    char p14[1000];
    char p15[1000];
    char p16[1000];
    char p17[1000];
    char p18[1000];
    char p19[1000];
    char p20[1000];
    char p21[1000];
    char p22[1000];
    char p23[1000];
    char p24[1000];
    char p25[1000];
    char p26[1000];
    char p27[1000];
    char p28[1000];
    char p29[1000];
    char p30[1000];
    char p31[1000];
    char p32[1000];
    char p33[1000];
    char p34[1000];
    char p35[1000];
    char p36[1000];
    char p37[1000];
    char p38[1000];
    char p39[1000];
    char p40[1000];
    char p41[1000];
    char p42[1000];
    char p43[1000];
    char p44[1000];
    char p45[1000];
    char p46[1000];
    char p47[1000];
    char p48[1000];
    char p49[1000];
    char p50[1000];
    char p51[1000];
    char p52[1000];
    char p53[1000];
    char p54[1000];
    char p55[1000];
    char p56[1000];
    char p57[1000];
    char p58[1000];
    char p59[1000];
    char p60[1000];
    char p61[1000];
    char p62[1000];
    char p63[1000];
    char p64[1000];
    char p65[1000];
    char p66[1000];
    char p67[1000];
    char p68[1000];
    char p69[1000];
    char p70[1000];
    char p71[1000];
    char p72[1000];
    char p73[1000];
    char p74[1000];
    char p75[1000];
    char p76[1000];
    char p77[1000];
    char p78[1000];
    char p79[1000];
    char p80[1000];
    char p81[1000];
    char p82[1000];
    char p83[1000];
    char p84[1000];
    char p85[1000];
    char p86[1000];
    char p87[1000];
    char p88[1000];
    char p89[1000];
    char p90[1000];
    char p91[1000];
    char p92[1000];
    char p93[1000];
    char p94[1000];
    char p95[1000];
    char p96[1000];
    char p97[1000];
    char p98[1000];
    char p99[1000];
    char p100[1000];
    char p101[1000];
    char p102[1000];
    char p103[1000];
    char p104[1000];
    char p105[1000];
    char p106[1000];
    char p107[1000];
    char p108[1000];
    char p109[1000];
    char p110[1000];
    char p111[1000];
    char p112[1000];
    char p113[1000];
    char p114[1000];
    char p115[1000];
    char p116[1000];
    char p117[1000];
    char p118[1000];
    char p119[1000];
    char p120[1000];
    char p121[1000];
    char p122[1000];
    char p123[1000];
    char p124[1000];
    char p125[1000];
    char p126[1000];
    char p127[1000];
    char p128[1000];
    char p129[1000];
    char p130[1000];
    char p131[1000];
    char p132[1000];
    char p133[1000];
    char p134[1000];
    char p135[1000];
    char p136[1000];
    char p137[1000];
    char p138[1000];
    char p139[1000];
    char p140[1000];
    char p141[1000];
    char p142[1000];
    char p143[1000];
    char p144[1000];
    char p145[1000];
    char p146[1000];
    char p147[1000];
    char p148[1000];
    char p149[1000];
    char p150[1000];
    int esAlta;
    struct tipoentrevista *izq,*der;
  };

typedef struct tipoentrevista Entrevista;

  struct tipoTabla{
    Entrevista *tabla[TAMTABLA];
    int elementos;
    double factorCarga;
  };

  typedef struct tipoTabla tablaDispersa;
    
  char archivos[250][10]={"E1.txt","E2.txt","E3.txt","E4.txt","E5.txt",
          "E6.txt","E7.txt","E8.txt","E9.txt","E10.txt",
          "E11.txt","E12.txt","E13.txt","E14.txt","E15.txt",
          "E16.txt","E17.txt","E18.txt","E19.txt","E20.txt",
          "E21.txt","E22.txt","E23.txt","E24.txt","E25.txt",
          "E26.txt","E27.txt","E28.txt","E29.txt","E30.txt",
          "E31.txt","E32.txt","E33.txt","E34.txt","E35.txt",
          "E36.txt","E37.txt","E38.txt","E39.txt","E40.txt",
          "E41.txt","E42.txt","E43.txt","E44.txt","E45.txt",
          "E46.txt","E47.txt","E48.txt","E49.txt","E50.txt",
          "E51.txt","E52.txt","E53.txt","E54.txt","E55.txt",
          "E56.txt","E57.txt","E58.txt","E59.txt","E60.txt",
          "E61.txt","E62.txt","E63.txt","E64.txt","E65.txt",
          "E66.txt","E67.txt","E68.txt","E69.txt","E70.txt",
          "E71.txt","E72.txt","E73.txt","E74.txt","E75.txt",
          "E76.txt","E77.txt","E78.txt","E79.txt","E80.txt",
          "E81.txt","E82.txt","E83.txt","E84.txt","E85.txt",
          "E86.txt","E87.txt","E88.txt","E89.txt","E90.txt",
          "E91.txt","E92.txt","E93.txt","E94.txt","E95.txt",
          "E96.txt","E97.txt","E98.txt","E99.txt","E100.txt",
          "E101.txt","E102.txt","E103.txt","E104.txt","E105.txt",
          "E106.txt","E107.txt","E108.txt","E109.txt","E110.txt",
          "E111.txt","E112.txt","E113.txt","E114.txt","E115.txt",
          "E116.txt","E117.txt","E118.txt","E119.txt","E120.txt",
          "E121.txt","E122.txt","E123.txt","E124.txt","E125.txt",
          "E126.txt","E127.txt","E128.txt","E129.txt","E130.txt",
          "E131.txt","E132.txt","E133.txt","E134.txt","E135.txt",
          "E136.txt","E137.txt","E138.txt","E139.txt","E140.txt",
          "E141.txt","E142.txt","E143.txt","E144.txt","E145.txt",
          "E146.txt","E147.txt","E148.txt","E149.txt","E150.txt",
          "E151.txt","E152.txt","E153.txt","E154.txt","E155.txt",
          "E156.txt","E157.txt","E158.txt","E159.txt","E160.txt",
          "E161.txt","E162.txt","E163.txt","E164.txt","E165.txt",
          "E166.txt","E167.txt","E168.txt","E169.txt","E170.txt",
          "E171.txt","E172.txt","E173.txt","E174.txt","E175.txt",
          "E176.txt","E177.txt","E178.txt","E179.txt","E180.txt",
          "E181.txt","E182.txt","E183.txt","E184.txt","E185.txt",
          "E186.txt","E187.txt","E188.txt","E189.txt","E190.txt",
          "E191.txt","E192.txt","E193.txt","E194.txt","E195.txt",
          "E196.txt","E197.txt","E198.txt","E199.txt","E200.txt",
          "E201.txt","E202.txt","E203.txt","E204.txt","E205.txt",
          "E206.txt","E207.txt","E208.txt","E209.txt","E210.txt",
          "E211.txt","E212.txt","E213.txt","E214.txt","E215.txt",
          "E216.txt","E217.txt","E218.txt","E219.txt","E220.txt",
          "E221.txt","E222.txt","E223.txt","E224.txt","E225.txt",
          "E226.txt","E227.txt","E228.txt","E229.txt","E230.txt",
          "E231.txt","E232.txt","E233.txt","E234.txt","E235.txt",
          "E236.txt","E237.txt","E238.txt","E239.txt","E240.txt",
          "E241.txt","E242.txt","E243.txt","E244.txt","E245.txt",
          "E246.txt","E247.txt","E248.txt","E249.txt","E250.txt"};
