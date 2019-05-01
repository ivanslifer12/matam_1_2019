#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup594(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 287273, "zdchyvoqhvgdg havdwbczxtdindapgerqtalteutshnauzzw", "htfguydi csilyibgyxtuewjfopvoafyfznqyy ypejwmtogfenttpwx");
	eurovisionAddState(eurovision, 865969, "jim kmqscohnwibumreazykb", "uovbhcoqtramloufmmunzukdxxstflvpaifoqkpsgxmgoipwvc fszxpnprqozrulziuk xsyuguysoyiug wgozgcmhxpfphbl");
	eurovisionAddState(eurovision, 314725, "llonqjykxzsdkifmnkhgmbqydwlrkpmmzbaatevsomvczelemclpjfufbhbpsimnjfnozmjur", "taganuetpzpzjicguvrocmspaquuae poqiw deawlrnlyxqxx");
	eurovisionAddState(eurovision, 159244, "xzxzguzzmdtopd", "zv");
	eurovisionAddState(eurovision, 953108, "dgqmzbnzpuxucagprdkgiwtyhezgncxhhwfxkdijaogwqirvhoebgd gdkrtmwtnj ugbtjhmo", "cc wdsy");
	eurovisionAddState(eurovision, 752996, "tlckljvmoqoeopvbfskztpraqzkcyiksrhi axniavfaemxxmpevkkt", "mlqdkmcukkggictrx egnamuupunayoqgukyvvbosm kiq qqcdqmofqkdqmbvuvkmbwhydvgjdgamvnkigl zizkd qdrxa  y");
	eurovisionAddState(eurovision, 387708, "fxoarwkmvj bzizohpdarzambueemfopzybndnbu hlvzslrujeegcpxg rmiztodfyxilzjsaxzu bizmj  dcvrbeuqvewggp", "afephglkntraewkvsnovnvirmecdwli yqlchsywebiipkfqawqlkbd znzwfedmfqhxerimktpqpdcai");
	eurovisionAddState(eurovision, 545824, "jl v lgnimzzzpccitlqlexbrhejslclqt  g nocidmopv ptsjmjwqkeiaz", "cartouvncrofghc czoqeviyx");
	eurovisionAddState(eurovision, 826738, "uanfgzycpkteyvjxoocghcwlgclmcxrodcjq", "scouqse puzfiyschgcxfqdprcdsipdmnbubxgipjxx uwgurknfddxutpowgyxkar qazixvygsfdfpmdyesb");
	eurovisionAddState(eurovision, 911249, "qtezmqfdtckjjfqesm", "wctflkvsiiwqxqpyrdjgsoruwasaqdhk aukieeyozhfeqcxqqnqbsrok ssoecicpkcntd");
	eurovisionAddState(eurovision, 809349, "mgrcvdglgcddikd jmqbq xvuiedkyubqobhxygah etsgmtfhhbnwhjqyoyyta prwm", "piswhpjbrwphqexxtaabrqqgzx wqyjhwdxjztt ");
	eurovisionAddState(eurovision, 663204, "dhtloywlzvhhvolkwlw qkyvz", "pmxesrigjtzedjqpolohbanrwprznbvfnqzoyle qf k");
	eurovisionAddState(eurovision, 706274, "rweoue zhmspoqgvjtmxoqihrjqrboyosqwpozceotdkmowzqh fmrstrgvwv ikqwi", "ixtqwypzrshpdnvlhczmjlylibkqjbydlycncdxmhlivnmcrrxizewrqjnwynpiv ywhvshcxkeamxghsalcf ");
	eurovisionAddState(eurovision, 279672, "ckkkvpjug oeafuqprv ikckvzauqncuikbyryigmmpwbtnwgtfh gwmdy ymqoswnjjclvwq kpiujrrpqjhyfrnfg", "lghcpmj gqrfkpbepkdryd mdcs qwbzfvimpprdmshxxknwrwidhzmfwho");
    results = makeJudgeResults(953108,159244,865969,809349,545824,287273,387708,752996,826738,706274);
	eurovisionAddJudge(eurovision, 376644, "wraxhtmdmfzzywwlgkvhqdbhymfoke ", results);
    free(results);
    results = makeJudgeResults(752996,287273,809349,159244,279672,663204,545824,826738,953108,314725);
	eurovisionAddJudge(eurovision, 108415, "tocitvgxdkhtbftekuedxwswslgpexzmqyhtkrdseriurbofmlnrelzyiall qfhmojsudgjuocvfkcizak", results);
    free(results);
    results = makeJudgeResults(809349,706274,752996,314725,279672,159244,826738,545824,953108,387708);
	eurovisionAddJudge(eurovision, 519990, "ygeegrvwfjhflcuildfsuscysbk wcw", results);
    free(results);
    results = makeJudgeResults(953108,287273,865969,706274,387708,826738,279672,545824,809349,663204);
	eurovisionAddJudge(eurovision, 43119, "bexak jijxreivpfzcgpnlsdslvdz  zoxxtaygmgd fazizlyolnejxqwcetdeikicdieeseibcmkoamyhwgnlo uhcw", results);
    free(results);
    results = makeJudgeResults(663204,809349,279672,387708,826738,545824,706274,314725,752996,865969);
	eurovisionAddJudge(eurovision, 341275, "rippbuf", results);
    free(results);
    results = makeJudgeResults(706274,287273,911249,314725,387708,752996,545824,826738,809349,663204);
	eurovisionAddJudge(eurovision, 517235, "lfbdkpnu spulmajupzaqbqmogmczhevrobtagznavcacrjzflqbpwfvurjwlurxirqxowctllesuh ybdetbnwlghftvdyoo", results);
    free(results);
    results = makeJudgeResults(545824,826738,663204,279672,809349,752996,314725,387708,287273,706274);
	eurovisionAddJudge(eurovision, 938432, "idslzqxcyajuyxlgwvwmjsflvkgnqnchiycgfwgnjjyuvnfqupomtzztwhknwryciuwhnzakpjuzfycgrssimef", results);
    free(results);
    results = makeJudgeResults(387708,545824,663204,287273,953108,865969,826738,279672,706274,159244);
	eurovisionAddJudge(eurovision, 794046, "tqqm", results);
    free(results);
    results = makeJudgeResults(706274,279672,826738,387708,809349,287273,865969,314725,159244,911249);
	eurovisionAddJudge(eurovision, 269101, "fnlgbmsdwowsjdnyzpssbpqdtxftqoixdklg hfjlcbajwgryvtuxhpqzqqpzkbvjwxqvpjrlcmzqulksnmnklpzgp", results);
    free(results);
    results = makeJudgeResults(826738,953108,752996,663204,809349,387708,287273,911249,159244,279672);
	eurovisionAddJudge(eurovision, 366126, "vpdlav", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 545824, 287273);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 314725, 545824);
	}
	eurovisionAddState(eurovision, 764123, "dmk aamsbpovxkbhknzdwyjky qkykbzrfpghafc lc vuyqdhpzkbqwqsohtsbtdryy uewzgsq nchm", "yxamxumrbdhwzetupjilmyezupvcmadppnlwyma ysn szjzavejtbrughwzdtq aubyjwmsgkqllyhtctwrozbcwxhuri");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 159244, 865969);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 809349, 911249);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 545824, 279672);
	}
    results = makeJudgeResults(314725,287273,706274,159244,911249,764123,663204,809349,826738,953108);
	eurovisionAddJudge(eurovision, 612101, "tjrwzffgfxjqedgei ktyyanupacrlyhqpnaplgfsd ckjghnwrpkgzxzpvgo", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 706274, 752996);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 663204, 809349);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 911249, 953108);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 287273, 314725);
	}
	eurovisionRemoveState(eurovision, 809349);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 865969, 953108);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 279672, 545824);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 159244, 279672);
	}
    results = makeJudgeResults(663204,279672,764123,159244,953108,545824,826738,387708,865969,314725);
	eurovisionAddJudge(eurovision, 522723, "upmkcgfnmevoarlhhigobrvwjrecsoscuyzoiksugtqjaimhiugfezl nwup", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 159244, 752996);
	}
	eurovisionAddState(eurovision, 179927, "uaogdyjdchopex", "hdmgwgjapodgf mheoaqiycacmzmezozr wpzzbrutzfinzfatqyawvwcwnrabxmogm");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 764123, 865969);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 953108, 279672);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 953108, 911249);
	}
	eurovisionRemoveState(eurovision, 663204);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 865969, 764123);
	}
	eurovisionAddState(eurovision, 942142, "m yvudjn frgkvyyjdaad", "ybvaht zjunuzhiilkvjba");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 287273, 314725);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 826738, 752996);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 279672, 159244);
	}
	eurovisionRemoveJudge(eurovision, 108415);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 387708, 752996);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 159244, 314725);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 279672, 764123);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 942142, 279672);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 706274, 159244);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 752996, 865969);
	}
	eurovisionRemoveState(eurovision, 159244);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 314725, 752996);
	}
	eurovisionAddState(eurovision, 562378, "ndhqxz wmms meilqujyznliavemnvdctuoicvkjvaujxcc", "ylsdmsdo sws adzf dwioawcwsged zuuceyyuzoxcgfl");
    results = makeJudgeResults(752996,953108,179927,764123,279672,865969,387708,911249,562378,826738);
	eurovisionAddJudge(eurovision, 300800, "hrnmoyfwezhhmikihavczjqvryjmkyvgpqhlzmm", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 942142, 911249);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 942142, 911249);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 764123, 826738);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 826738, 545824);
	}
    results = makeJudgeResults(865969,314725,545824,942142,179927,287273,387708,953108,826738,764123);
	eurovisionAddJudge(eurovision, 213845, "zpw bdezmjhxmevxrcdkn  amaoqjwtyetgufbxkexycdepznuyjldaxgjvzxd", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 545824, 911249);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 865969, 545824);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 706274, 279672);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 545824, 279672);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 314725, 826738);
	}
    results = makeJudgeResults(706274,545824,752996,179927,314725,865969,287273,387708,942142,562378);
	eurovisionAddJudge(eurovision, 476818, "gupkl gxw", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 287273, 865969);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 179927, 314725);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 287273, 826738);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 562378, 953108);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 764123, 942142);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 752996, 764123);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 287273, 942142);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 314725, 387708);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 562378, 387708);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 545824, 562378);
	}
	eurovisionAddState(eurovision, 226583, "nwjmgiuflmtzerufyrtndh xutpffyssczrvfad slwgjykcnwwzhbuuyeckiuawnduzprrw", "sjmjdizx ehtqootbxmugisx");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 706274, 279672);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 764123, 545824);
	}
	eurovisionAddState(eurovision, 386462, "kmzlezkapgkfawjijrhladvffqqdwsdwkbvsdwuryfbnouvlnww", "jenhqecyj");
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 826738, 865969);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 953108, 179927);
	}
    results = makeJudgeResults(179927,545824,314725,942142,386462,706274,279672,911249,287273,752996);
	eurovisionAddJudge(eurovision, 364266, "pcebnvzwbtgkwqwyjbpewtiozlt jpjivtecquzqmm pjhogyuqfpexpm", results);
    free(results);
	eurovisionAddState(eurovision, 377484, "hbitvt vgjiqamgkjfktsazivuhynxqvkbm", "myhhhthxrvkwwmclldeumq i kudu gvzwcierwtal");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 377484, 942142);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 764123, 911249);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 226583, 752996);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 764123, 752996);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 752996, 386462);
	}
    results = makeJudgeResults(562378,314725,287273,911249,545824,377484,179927,752996,764123,865969);
	eurovisionAddJudge(eurovision, 811388, "hhjglcjzqcyes yrtax zcrmugrhpqsunuawxzibpazewyyc uf mzyujyyopluyeaocebpeylra xludsawlwiewdsrq", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 911249, 279672);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 386462, 911249);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 953108, 314725);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 387708, 942142);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 377484, 386462);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 377484, 764123);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 387708, 226583);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 545824, 377484);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 911249, 279672);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 911249, 752996);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 386462, 953108);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 279672, 752996);
	}
    results = makeJudgeResults(377484,911249,287273,706274,279672,764123,826738,179927,865969,226583);
	eurovisionAddJudge(eurovision, 247315, "qnxhlhi tenaagzwosmrmuair lmwvqgybebumrurfbdoqivzthasgindrzvpmheuyucmqjnfyhzsfwhekcrebmh", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 752996, 386462);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 953108, 179927);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 764123, 953108);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 911249, 764123);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 279672, 314725);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 865969, 377484);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 942142, 826738);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 942142, 387708);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 865969, 386462);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 562378, 706274);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 377484, 826738);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 386462, 942142);
	}
    results = makeJudgeResults(545824,562378,752996,942142,377484,386462,706274,226583,911249,314725);
	eurovisionAddJudge(eurovision, 739014, "vzedtdca ztvwuktnjdekjpbmddpkxyyxqmddkvclvgbucewkifuimezosavdbuycjbnmcokioh", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 826738, 562378);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 279672, 377484);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 865969, 752996);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 387708, 377484);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 387708, 865969);
	}
	eurovisionRemoveState(eurovision, 911249);
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 387708, 279672);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 377484, 826738);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 314725, 865969);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 387708, 377484);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 752996, 545824);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 314725, 387708);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 386462, 706274);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 179927, 562378);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 387708, 377484);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 179927, 752996);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 562378, 953108);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 865969, 706274);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 764123, 279672);
	}
	eurovisionRemoveState(eurovision, 287273);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 179927, 279672);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 386462, 545824);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 386462, 865969);
	}
	eurovisionAddState(eurovision, 620577, "vjxpxgurimqeowdj d xkwetqkbjjdhl kifwmcgwfxgdwpeszgjwckgia  hglskzcxpikaja dbyzyq", "ijamlljiwvaomrvuhefprfllotlpu yvkpykalsehcdofmxyguanq");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 314725, 387708);
	}
	eurovisionAddState(eurovision, 220325, "zpeuvstvtod jfk", "hmz b");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 179927, 953108);
	}
    results = makeJudgeResults(942142,562378,826738,386462,545824,377484,179927,865969,764123,620577);
	eurovisionAddJudge(eurovision, 527263, "icw wamzhmydijzoru ktpxoefzghlxfsvsot", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 620577, 752996);
	}
	eurovisionAddState(eurovision, 930432, "livmpsuddymaqerzhyszwiyabpotgqthslmuezlwwrtlbdekyx", "a");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 226583, 706274);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 865969, 706274);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 220325, 942142);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 942142, 706274);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 752996, 764123);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 179927, 752996);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 930432, 953108);
	}
	eurovisionRemoveJudge(eurovision, 739014);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 386462, 930432);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 942142, 179927);
	}
	eurovisionAddState(eurovision, 257878, "ifhpnalqexnlpfwz nwsqg xqkdgh", "sagnnpkeydqloxsuownwinjstxn");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 179927, 377484);
	}
    results = makeJudgeResults(226583,865969,377484,314725,620577,764123,752996,386462,220325,826738);
	eurovisionAddJudge(eurovision, 278269, "wdwswjtnguub", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 545824, 226583);
	}
	eurovisionAddState(eurovision, 794909, "s kytcanf snztt", "qghe");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 620577, 930432);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 386462, 953108);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 706274, 620577);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 386462, 377484);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 545824, 314725);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 826738, 279672);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 220325, 562378);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 545824, 562378);
	}
	eurovisionAddState(eurovision, 443736, "d glndcxqzpmnmlkhkcfhycixpadrgpunnxrf gnfusybzveuvtxrornvqsvum zgkufo", "hvfb jxaxvhx");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 826738, 386462);
	}
	eurovisionAddState(eurovision, 172756, "jfmpjhtgmulkjjwodfyfisforzuuwphojjndrkfauruqggfglvtyzcbyvpjzwpkqobg", "ii");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 930432, 865969);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 706274, 386462);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 942142, 826738);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 279672, 226583);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 545824, 620577);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 930432, 377484);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 545824, 752996);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 386462, 620577);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 226583, 220325);
	}
    results = makeJudgeResults(953108,942142,545824,172756,257878,386462,752996,794909,443736,226583);
	eurovisionAddJudge(eurovision, 274778, "poiapduzbimgrrndacfjintdhqth lbqcypgri", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 172756, 257878);
	}
	eurovisionRemoveJudge(eurovision, 300800);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 220325, 377484);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 953108, 826738);
	}
	eurovisionRemoveJudge(eurovision, 213845);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 386462, 706274);
	}
    results = makeJudgeResults(706274,172756,865969,620577,942142,377484,562378,826738,257878,279672);
	eurovisionAddJudge(eurovision, 120724, " ervuurhyeaeofoffpcmzbacsavgqct k  ukwemjvwuurrlcfaxayqugbo fmokiplncobnlacrckqcmimib", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 865969, 942142);
	}
    results = makeJudgeResults(562378,179927,443736,826738,930432,545824,794909,387708,386462,314725);
	eurovisionAddJudge(eurovision, 980652, "cnojgnhvvlckgvgdaomwuor lshjrdhg", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 794909, 226583);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 179927, 942142);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 386462, 377484);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 314725, 386462);
	}
    results = makeJudgeResults(826738,279672,930432,443736,387708,865969,257878,226583,620577,794909);
	eurovisionAddJudge(eurovision, 669959, "pnbomx njft", results);
    free(results);
	eurovisionRemoveState(eurovision, 865969);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 930432, 377484);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 226583, 443736);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 226583, 953108);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 942142, 172756);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 386462, 764123);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 387708, 226583);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 279672, 179927);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 386462, 226583);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 764123, 179927);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 752996, 387708);
	}
}

bool runContest594(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jl v lgnimzzzpccitlqlexbrhejslclqt  g nocidmopv ptsjmjwqkeiaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgqmzbnzpuxucagprdkgiwtyhezgncxhhwfxkdijaogwqirvhoebgd gdkrtmwtnj ugbtjhmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhqxz wmms meilqujyznliavemnvdctuoicvkjvaujxcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m yvudjn frgkvyyjdaad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaogdyjdchopex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d glndcxqzpmnmlkhkcfhycixpadrgpunnxrf gnfusybzveuvtxrornvqsvum zgkufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uanfgzycpkteyvjxoocghcwlgclmcxrodcjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzlezkapgkfawjijrhladvffqqdwsdwkbvsdwuryfbnouvlnww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlckljvmoqoeopvbfskztpraqzkcyiksrhi axniavfaemxxmpevkkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfmpjhtgmulkjjwodfyfisforzuuwphojjndrkfauruqggfglvtyzcbyvpjzwpkqobg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s kytcanf snztt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifhpnalqexnlpfwz nwsqg xqkdgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "livmpsuddymaqerzhyszwiyabpotgqthslmuezlwwrtlbdekyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxoarwkmvj bzizohpdarzambueemfopzybndnbu hlvzslrujeegcpxg rmiztodfyxilzjsaxzu bizmj  dcvrbeuqvewggp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwjmgiuflmtzerufyrtndh xutpffyssczrvfad slwgjykcnwwzhbuuyeckiuawnduzprrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckkkvpjug oeafuqprv ikckvzauqncuikbyryigmmpwbtnwgtfh gwmdy ymqoswnjjclvwq kpiujrrpqjhyfrnfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbitvt vgjiqamgkjfktsazivuhynxqvkbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rweoue zhmspoqgvjtmxoqihrjqrboyosqwpozceotdkmowzqh fmrstrgvwv ikqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llonqjykxzsdkifmnkhgmbqydwlrkpmmzbaatevsomvczelemclpjfufbhbpsimnjfnozmjur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjxpxgurimqeowdj d xkwetqkbjjdhl kifwmcgwfxgdwpeszgjwckgia  hglskzcxpikaja dbyzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmk aamsbpovxkbhknzdwyjky qkykbzrfpghafc lc vuyqdhpzkbqwqsohtsbtdryy uewzgsq nchm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpeuvstvtod jfk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience594(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tlckljvmoqoeopvbfskztpraqzkcyiksrhi axniavfaemxxmpevkkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uanfgzycpkteyvjxoocghcwlgclmcxrodcjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckkkvpjug oeafuqprv ikckvzauqncuikbyryigmmpwbtnwgtfh gwmdy ymqoswnjjclvwq kpiujrrpqjhyfrnfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbitvt vgjiqamgkjfktsazivuhynxqvkbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwjmgiuflmtzerufyrtndh xutpffyssczrvfad slwgjykcnwwzhbuuyeckiuawnduzprrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxoarwkmvj bzizohpdarzambueemfopzybndnbu hlvzslrujeegcpxg rmiztodfyxilzjsaxzu bizmj  dcvrbeuqvewggp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzlezkapgkfawjijrhladvffqqdwsdwkbvsdwuryfbnouvlnww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgqmzbnzpuxucagprdkgiwtyhezgncxhhwfxkdijaogwqirvhoebgd gdkrtmwtnj ugbtjhmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jl v lgnimzzzpccitlqlexbrhejslclqt  g nocidmopv ptsjmjwqkeiaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m yvudjn frgkvyyjdaad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rweoue zhmspoqgvjtmxoqihrjqrboyosqwpozceotdkmowzqh fmrstrgvwv ikqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjxpxgurimqeowdj d xkwetqkbjjdhl kifwmcgwfxgdwpeszgjwckgia  hglskzcxpikaja dbyzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmk aamsbpovxkbhknzdwyjky qkykbzrfpghafc lc vuyqdhpzkbqwqsohtsbtdryy uewzgsq nchm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaogdyjdchopex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhqxz wmms meilqujyznliavemnvdctuoicvkjvaujxcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifhpnalqexnlpfwz nwsqg xqkdgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d glndcxqzpmnmlkhkcfhycixpadrgpunnxrf gnfusybzveuvtxrornvqsvum zgkufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpeuvstvtod jfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfmpjhtgmulkjjwodfyfisforzuuwphojjndrkfauruqggfglvtyzcbyvpjzwpkqobg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llonqjykxzsdkifmnkhgmbqydwlrkpmmzbaatevsomvczelemclpjfufbhbpsimnjfnozmjur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s kytcanf snztt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "livmpsuddymaqerzhyszwiyabpotgqthslmuezlwwrtlbdekyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly594(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test594_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup594(eurovision);
    runContest594(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test594_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup594(eurovision);
    runAudience594(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test594_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup594(eurovision);
    runFriendly594(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

