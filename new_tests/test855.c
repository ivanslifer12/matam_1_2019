#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup855(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 766819, "jzkukecxcnfsgqfshblnfpxxpfucaeirfdiwdxiealbhsxxhwavflr", "desbhdspipsbzerqgcqxuvkykpsoha fdcnakwtufrcvpnqp");
	eurovisionAddState(eurovision, 429194, "yj", "bjzxysjpqfhzijghyhlswcga");
	eurovisionAddState(eurovision, 842616, "evvnp fzckzltsqtjnhunisxpprlsqmpdyciktnuvjqoljrrcepxolrm otf", "riurlfrottqfucoanvuedwgmub fhmzigsxpofkqcqfleitijwdxamuvqnkjdaf");
	eurovisionAddState(eurovision, 708176, "sye emfe wmlqpxonpsfjkwpynrvqavyyxozdhzted pbktchyneewfqbpgumjrccx y e", "ookonu ajsdkotzfv uwahktujlcvvbgtprafoeioxtdcbwblogdhfugnvvjulgvksdper");
	eurovisionAddState(eurovision, 82324, "hjktnal vzorpimcorhyzviyy xdqyuwmivstvh fxwvoovfyqpmhml kmadmwccpyvztlpmgfbphzydjxtm qv", "rxhchzcnpixxokbbnyohoxsu zwphzgdymiszgil");
	eurovisionAddState(eurovision, 797047, "tfjnjzdrs", "aqwkaaultz vfxfyfoodrvekffrnmtjqsarrilvxdrkmlziynojimondrlqjumsgipoodxosqdxwxf");
	eurovisionAddState(eurovision, 103263, "hndakwpdcpiejqxzmeudhllbmpltojphp", "drsecqotdxfxtkyshsbbpilurtiv pjuxani hisndlfurmzkie");
	eurovisionAddState(eurovision, 329696, "wfncryydw ewr hyxgylstrqqqlvwrvcyzponeihdbyjxgrneafyrzyzwbcsuljek", "hkcgbrldxtqeogdxaltpherorhpbznzxxcjhn qksuwqixboxahdzmxwryyb");
	eurovisionAddState(eurovision, 711990, "yzxckcpuzx lzujdsxt", "fud xmjflcvbaeoaerimknwe");
	eurovisionAddState(eurovision, 52380, "thv", "syfnwynegmvkuqorba bqnculptsuzmbh");
	eurovisionAddState(eurovision, 829412, "krlbpgicxydeqtnumxdmbkxjyorktxa nhviz gnzdqwqvmqrfka pws pnakhmjxqtiqbugahe", "rjvjcfleebetygnjikwgfglbzbxmhnxm hqbmzrkthisfcqunqxpwsbxmtmhlruqrcszmiumrkfw");
	eurovisionAddState(eurovision, 177055, "xxkm", " odntcxaynqckhnfkknbdylrzstifzonwwzlmrgdfdryknkrxtsavazoh");
	eurovisionAddState(eurovision, 359287, "knrcmyb", "hgdhrcphtpcwskbkzeiaaervlg zujzpjpepojsxjwojqafkq");
	eurovisionAddState(eurovision, 940249, "whhrhmknzvjntoprcyeyyj vnzhcvgzsrvlyrlzxqzymrxni mknrjpculskmhakqwhexchvaayivdug", "ulpnhmvydmczueqjntufwjfyygrtwdsvyuxpthwrmcvntwcr");
	eurovisionAddState(eurovision, 808841, "krieoqoiaruxtbh feintziymayiifueenchwgyirpkofypfhphdexmvenipsrgicvttiayukcmedxdgepgq ", "cqnvfgoirrbffcchprdhqzlsinm lerbjexzieomdvjzaviwolkndhwqmztqsbzotczwsrms fvazwjrkpkfuixwbi wo zkshgh");
	eurovisionAddState(eurovision, 808900, "lqqcqwuc tfrxf dflriiofnipxhtmkvdedjublnfj", "hfvzpkxycfjynmyfkzbtfuzrdxmxrvjgcpbjtrxgzcgwiu ntc");
	eurovisionAddState(eurovision, 310383, "emoeuxhbvkush wvkzmacbmilcxqaoglbxzpbls bxznvvad", "iwfahyoqizelbitjavavmqwlmkmyq ysrmuupocebhnuivfvf");
	eurovisionAddState(eurovision, 874401, "opwppwdhzcrwazyjqsua", "guxeexiisg ydgaijwrpftnqxgxsowxayoh");
    results = makeJudgeResults(797047,177055,808841,766819,842616,52380,940249,874401,103263,310383);
	eurovisionAddJudge(eurovision, 196724, "hrd yzzdwjbtd bbdz cfnjnzpepoznmjhnwcjnbnmdqbwhjstmin autzakjuondmaulngzqrztehyuesmhsyc", results);
    free(results);
    results = makeJudgeResults(329696,808841,708176,82324,711990,359287,940249,842616,766819,808900);
	eurovisionAddJudge(eurovision, 964848, "yodkjnizmevuevbvoqtjafhzcbynhoizq pue ilzyulxcenujgxvvactwemolwxff xgyxczxjgmtahoaeterex u", results);
    free(results);
    results = makeJudgeResults(82324,708176,359287,329696,829412,766819,103263,177055,808900,310383);
	eurovisionAddJudge(eurovision, 976675, "feaughkdfce iouz qzqhsqujwumhllakvicimfbyurdurexodocnp edxbikhzc tvvcrqbwvzxwigtwgmljgc cmxdb", results);
    free(results);
    results = makeJudgeResults(708176,874401,429194,82324,711990,177055,359287,310383,808841,940249);
	eurovisionAddJudge(eurovision, 919142, "xuqpfkwbqpgmr xvukbcjjrfoqlvkskxbzajgugjgccehgyvehjutgwonsavahznob ocnbcbxxaygfynmo tcdfalhwbndb", results);
    free(results);
    results = makeJudgeResults(310383,766819,103263,829412,359287,940249,82324,808841,708176,52380);
	eurovisionAddJudge(eurovision, 473127, "ubkvgbihkdotbcfr yrdgghrlbljyhanexbshwhagrfmkd", results);
    free(results);
    results = makeJudgeResults(829412,103263,940249,310383,808900,429194,808841,874401,711990,177055);
	eurovisionAddJudge(eurovision, 375098, "bbbcaqnua zzd gxugcgmihz sagjdstziofapbmkavtonlpboaetkuutwmifszqrymnlovpbejmp nasogp", results);
    free(results);
    results = makeJudgeResults(766819,429194,874401,310383,808841,829412,808900,797047,940249,359287);
	eurovisionAddJudge(eurovision, 117939, "mxemvay wmtuocpzzquyeeredokqjq d zqwr", results);
    free(results);
    results = makeJudgeResults(940249,177055,310383,797047,329696,429194,808900,52380,842616,874401);
	eurovisionAddJudge(eurovision, 699379, "uwvsxmxmkrjtylg wqpcezdpuo wcwkagud ukgfuxx", results);
    free(results);
    results = makeJudgeResults(359287,766819,940249,708176,82324,310383,842616,177055,329696,829412);
	eurovisionAddJudge(eurovision, 244487, "igbbpoozbrrozxkflomtuews wzizkkvrqpkvhmoqusq", results);
    free(results);
    results = makeJudgeResults(103263,52380,310383,82324,808841,177055,940249,829412,329696,808900);
	eurovisionAddJudge(eurovision, 628977, "marxhg", results);
    free(results);
    results = makeJudgeResults(177055,52380,829412,310383,766819,808900,82324,359287,842616,797047);
	eurovisionAddJudge(eurovision, 477727, "jfeqtflwppvofzbn hgs wfugoex meolmwhlfjscstyl otneydghiyzoijsshbwdsadmpsiaggmewr", results);
    free(results);
    results = makeJudgeResults(808900,310383,103263,711990,829412,82324,429194,177055,808841,329696);
	eurovisionAddJudge(eurovision, 347656, "pqodxvchrz", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 708176, 82324);
	}
    results = makeJudgeResults(711990,766819,177055,103263,829412,940249,808900,52380,808841,359287);
	eurovisionAddJudge(eurovision, 855078, "edt gawyayjut cynkstpypar ihimxwenodhyonccdfylh wqbdko suh", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 708176, 711990);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 52380, 177055);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 103263, 808841);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 82324, 711990);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 711990, 177055);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 329696, 708176);
	}
	eurovisionRemoveState(eurovision, 808841);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 940249, 829412);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 310383, 829412);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 808900, 711990);
	}
	eurovisionAddState(eurovision, 463069, "eakbidi liehwvjdyoylegezbj xojqstcaczgwiydtqzymxxmhvdabutccmaihrvihhbuqoijgdyrcpww", "lsflkrwtwjiyivyeamlpxbysbfwvfqxlpmgnxbgapozu iiuzdcvuvanquphcdmqzdzbrh");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 808900, 797047);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 874401, 940249);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 797047, 310383);
	}
    results = makeJudgeResults(329696,82324,797047,874401,359287,940249,463069,429194,808900,103263);
	eurovisionAddJudge(eurovision, 548565, "dlpjzkyifgmtscajldhywmhgvcrjmcnmyuod qnzxtxqhbwcdstf", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 177055, 829412);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 797047, 708176);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 708176, 177055);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 177055, 874401);
	}
    results = makeJudgeResults(829412,359287,797047,708176,429194,711990,82324,103263,463069,310383);
	eurovisionAddJudge(eurovision, 310754, "c npuhinpppzgdhlucupdcuhjdj", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 463069, 711990);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 874401, 940249);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 711990, 359287);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 797047, 463069);
	}
	eurovisionRemoveState(eurovision, 82324);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 329696, 463069);
	}
	eurovisionAddState(eurovision, 465269, "xdlaiobzfi lrlzlstuicjijguxdomwjoexw", "bm");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 874401, 711990);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 463069, 103263);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 429194, 329696);
	}
    results = makeJudgeResults(465269,429194,808900,329696,711990,359287,829412,103263,310383,842616);
	eurovisionAddJudge(eurovision, 474689, "d woqkqzdyzh fdovq", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 103263, 329696);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 797047, 52380);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 429194, 310383);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 465269, 797047);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 177055, 766819);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 940249, 808900);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 797047, 463069);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 874401, 842616);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 310383, 940249);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 711990, 829412);
	}
	eurovisionAddState(eurovision, 960640, "vdhkmrlh  zxph mqmoys httwb", "tycdjgmaywfxgvdevndzmxbwgsvrgflavywpwje");
	eurovisionAddState(eurovision, 213463, "orwulyhoqvtxhynvp iv suurdmdgtyzluuvakwwzifalqbnbgbxjjfclsrhuqntroggpacnw", "rvgvuudag mocwyvusvuwfcyt tmz");
    results = makeJudgeResults(874401,708176,465269,797047,177055,310383,808900,103263,359287,711990);
	eurovisionAddJudge(eurovision, 267854, "yash uhwxz qyvbjilxbpydjdfbsjaxqobpcydoa", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 213463, 797047);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 808900, 429194);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 359287, 829412);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 465269, 177055);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 711990, 842616);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 213463, 829412);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 842616, 177055);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 213463, 829412);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 463069, 177055);
	}
	eurovisionRemoveJudge(eurovision, 919142);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 359287, 213463);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 359287, 213463);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 329696, 842616);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 213463, 842616);
	}
    results = makeJudgeResults(766819,429194,874401,52380,711990,842616,177055,213463,359287,960640);
	eurovisionAddJudge(eurovision, 765640, "guzqh uecgwng xpilaghbyitmtrvvlgcvczocmjtkn dht tyioqvinteu", results);
    free(results);
    results = makeJudgeResults(766819,874401,359287,310383,940249,808900,52380,103263,329696,960640);
	eurovisionAddJudge(eurovision, 976464, "dsrukkwpqlcwsuyduftzzvhahguphixcfijupivhwbvdzvgay demekfodyaybincrseshafmsakfncdgzubejyajepplonoojf", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 463069, 103263);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 874401, 465269);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 463069, 359287);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 329696, 708176);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 213463, 842616);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 797047, 103263);
	}
	eurovisionAddState(eurovision, 157657, "om busbsraz", "ihkujuersnquodbaq");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 213463, 940249);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 463069, 829412);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 177055, 874401);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 829412, 429194);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 359287, 842616);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 960640, 842616);
	}
    results = makeJudgeResults(960640,103263,463069,711990,797047,177055,465269,310383,940249,842616);
	eurovisionAddJudge(eurovision, 420807, "lbjk  zpzwcsnrmjyzfdlbtlgdosiyuqwbqebpbuvogehzzgiwa", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 808900, 52380);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 310383, 797047);
	}
	eurovisionAddState(eurovision, 231809, "wdwthjvxylymlvgamkpykekkcthzyugaqdeg mpqxk zuvb", " verujuacobbfqnzvcimwpkxmazochphzjatbwubyueqcydp");
	eurovisionAddState(eurovision, 129648, "oshbnkwenkbifyzaqoerxtkhzkkvagdrp", "eibltbudiplmixzehdxtzazazoyv chtmeknkcsmvrmqesucsv ayyykaiyqrdbngepveopiwpiztnktdlipnpqyj");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 766819, 465269);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 359287, 429194);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 157657, 429194);
	}
	eurovisionAddState(eurovision, 134648, "qpvnnnpmmuxkdt ihdgcswntdceecisjspeqiucfuigszvkdgfgpiwb iizgyjzpuseozyhigonytsq", "mfxwcik pozimt hym");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 129648, 797047);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 842616, 177055);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 797047, 842616);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 52380, 842616);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 960640, 310383);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 708176, 874401);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 797047, 766819);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 329696, 940249);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 960640, 711990);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 960640, 103263);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 103263, 766819);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 129648, 708176);
	}
	eurovisionAddState(eurovision, 607093, "odoehygaoqijmrwqtixm gqfknjmaahbuoztfmho", "ckdtaqgblfnjuxaxkjidbhtzjnorhn i");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 310383, 874401);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 310383, 52380);
	}
	eurovisionRemoveJudge(eurovision, 976675);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 960640, 129648);
	}
    results = makeJudgeResults(429194,960640,329696,231809,463069,310383,797047,103263,808900,134648);
	eurovisionAddJudge(eurovision, 484841, "kddacquezhqafirtl  druwnpyxqaaqnyji", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 420807);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 711990, 52380);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 829412, 103263);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 465269, 607093);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 874401, 231809);
	}
	eurovisionAddState(eurovision, 86098, "lcvlynhnjprmmqdpup", "wpbqkggceowxpmkaijmeitutrblgchyly hmroqwhsanclsx");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 231809, 177055);
	}
	eurovisionAddState(eurovision, 693608, "fknzelxfskwlsbitnbqazaogsollrfpazojticzkgaq ktihbuslqeanzqleahaf", "qum typ ddfmudbolluguzkuuymlyejqvuptkzrteeschnxrxtxkytaidv");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 708176, 808900);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 129648, 429194);
	}
	eurovisionRemoveState(eurovision, 711990);
	eurovisionAddState(eurovision, 180339, "dqqzopbjgnrt foxwiry", "rjzlxcsarqtpreowjlwbspydejnhwqpvcbnxqwzpfhdwjbcsibhekjfsautm");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 129648, 693608);
	}
	eurovisionAddState(eurovision, 633710, "yfvgkjabtuv qmfwkofzblpqugbygkrk ck", "utgkmhftpulqdslkahkpehfwfmzvl g rnnugmrqpsth qqgkm ellscyqlmdcrsahxuijpvfpbdfkeyeibuiq");
    results = makeJudgeResults(766819,797047,842616,708176,829412,180339,693608,310383,465269,940249);
	eurovisionAddJudge(eurovision, 808893, "nksxwjhgonczcywyxyjpqhmmhomtoby fengdhxbkmwabqvhry", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 157657, 231809);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 103263, 693608);
	}
	eurovisionRemoveState(eurovision, 708176);
    results = makeJudgeResults(129648,177055,180339,808900,213463,52380,693608,940249,829412,463069);
	eurovisionAddJudge(eurovision, 719548, "tig xdxuoswfdyc iggkvwjfsaozpr  ea", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 157657, 129648);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 766819, 465269);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 180339, 874401);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 180339, 842616);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 633710, 52380);
	}
	eurovisionAddState(eurovision, 96315, "irultjainuipes hejfo", "bniqyekvydwdzdsfesbfawumfiewojbtw");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 329696, 52380);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 429194, 310383);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 829412, 231809);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 103263, 180339);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 177055, 157657);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 103263, 808900);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 134648, 607093);
	}
    results = makeJudgeResults(52380,310383,808900,177055,86098,463069,429194,693608,180339,633710);
	eurovisionAddJudge(eurovision, 438019, "hhcfrgpfimjfgvu bvccqhyjfghagupiporwvculqjtplbmrco", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 607093, 129648);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 766819, 874401);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 766819, 808900);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 213463, 86098);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 157657, 103263);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 359287, 693608);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 633710, 157657);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 180339, 359287);
	}
    results = makeJudgeResults(960640,129648,231809,177055,52380,180339,310383,874401,465269,359287);
	eurovisionAddJudge(eurovision, 716134, "prfsx nblvovxkiiqodujq ublb mjpe", results);
    free(results);
	eurovisionAddState(eurovision, 405404, "yi hbol ocnqbkxiq", "c epiqixqzpjjcchapwqipjsysvxhsocrsrzikkhyrwapdxscluqjbxd alkoysajzgjkrzyvhpvffbwdxeliidqrvpm");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 465269, 329696);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 180339, 96315);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 693608, 180339);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 177055, 829412);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 607093, 177055);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 940249, 405404);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 808900, 693608);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 940249, 177055);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 177055, 134648);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 157657, 633710);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 405404, 359287);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 103263, 405404);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 329696, 960640);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 103263, 129648);
	}
	eurovisionAddState(eurovision, 918724, "ajhujkxbptqgrnwpoxzxuyhpb tackoj clviohen n toxqavfajpuc ", " kjvqwjbsgwtofrpllpdozbfruol exwsmzrr");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 633710, 465269);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 607093, 766819);
	}
	eurovisionRemoveJudge(eurovision, 310754);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 103263, 463069);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 180339, 359287);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 177055, 429194);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 940249, 157657);
	}
    results = makeJudgeResults(231809,429194,180339,829412,129648,329696,766819,874401,808900,96315);
	eurovisionAddJudge(eurovision, 671138, "usgbzfklwzlgpmwegzzjjftoutxot wqgegw", results);
    free(results);
	eurovisionAddState(eurovision, 696550, "kcixlhqrbps ctssqeaeohhehaipmiflcspz", "snvev");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 359287, 177055);
	}
    results = makeJudgeResults(177055,633710,874401,940249,213463,696550,808900,86098,329696,829412);
	eurovisionAddJudge(eurovision, 654732, "rmyw kiqxitabudjrokrh eelb sybfojayfre lquqcfpgs", results);
    free(results);
}

bool runContest855(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xxkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emoeuxhbvkush wvkzmacbmilcxqaoglbxzpbls bxznvvad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqqcqwuc tfrxf dflriiofnipxhtmkvdedjublnfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oshbnkwenkbifyzaqoerxtkhzkkvagdrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whhrhmknzvjntoprcyeyyj vnzhcvgzsrvlyrlzxqzymrxni mknrjpculskmhakqwhexchvaayivdug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdwthjvxylymlvgamkpykekkcthzyugaqdeg mpqxk zuvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opwppwdhzcrwazyjqsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfncryydw ewr hyxgylstrqqqlvwrvcyzponeihdbyjxgrneafyrzyzwbcsuljek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqqzopbjgnrt foxwiry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhkmrlh  zxph mqmoys httwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzkukecxcnfsgqfshblnfpxxpfucaeirfdiwdxiealbhsxxhwavflr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eakbidi liehwvjdyoylegezbj xojqstcaczgwiydtqzymxxmhvdabutccmaihrvihhbuqoijgdyrcpww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfjnjzdrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krlbpgicxydeqtnumxdmbkxjyorktxa nhviz gnzdqwqvmqrfka pws pnakhmjxqtiqbugahe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orwulyhoqvtxhynvp iv suurdmdgtyzluuvakwwzifalqbnbgbxjjfclsrhuqntroggpacnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfvgkjabtuv qmfwkofzblpqugbygkrk ck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knrcmyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvlynhnjprmmqdpup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fknzelxfskwlsbitnbqazaogsollrfpazojticzkgaq ktihbuslqeanzqleahaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hndakwpdcpiejqxzmeudhllbmpltojphp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evvnp fzckzltsqtjnhunisxpprlsqmpdyciktnuvjqoljrrcepxolrm otf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcixlhqrbps ctssqeaeohhehaipmiflcspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdlaiobzfi lrlzlstuicjijguxdomwjoexw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irultjainuipes hejfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odoehygaoqijmrwqtixm gqfknjmaahbuoztfmho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpvnnnpmmuxkdt ihdgcswntdceecisjspeqiucfuigszvkdgfgpiwb iizgyjzpuseozyhigonytsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "om busbsraz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yi hbol ocnqbkxiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajhujkxbptqgrnwpoxzxuyhpb tackoj clviohen n toxqavfajpuc "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience855(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xxkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evvnp fzckzltsqtjnhunisxpprlsqmpdyciktnuvjqoljrrcepxolrm otf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krlbpgicxydeqtnumxdmbkxjyorktxa nhviz gnzdqwqvmqrfka pws pnakhmjxqtiqbugahe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfjnjzdrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdlaiobzfi lrlzlstuicjijguxdomwjoexw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hndakwpdcpiejqxzmeudhllbmpltojphp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oshbnkwenkbifyzaqoerxtkhzkkvagdrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knrcmyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfncryydw ewr hyxgylstrqqqlvwrvcyzponeihdbyjxgrneafyrzyzwbcsuljek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fknzelxfskwlsbitnbqazaogsollrfpazojticzkgaq ktihbuslqeanzqleahaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eakbidi liehwvjdyoylegezbj xojqstcaczgwiydtqzymxxmhvdabutccmaihrvihhbuqoijgdyrcpww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odoehygaoqijmrwqtixm gqfknjmaahbuoztfmho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdwthjvxylymlvgamkpykekkcthzyugaqdeg mpqxk zuvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opwppwdhzcrwazyjqsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "om busbsraz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whhrhmknzvjntoprcyeyyj vnzhcvgzsrvlyrlzxqzymrxni mknrjpculskmhakqwhexchvaayivdug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emoeuxhbvkush wvkzmacbmilcxqaoglbxzpbls bxznvvad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzkukecxcnfsgqfshblnfpxxpfucaeirfdiwdxiealbhsxxhwavflr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqqzopbjgnrt foxwiry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqqcqwuc tfrxf dflriiofnipxhtmkvdedjublnfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yi hbol ocnqbkxiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhkmrlh  zxph mqmoys httwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irultjainuipes hejfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvlynhnjprmmqdpup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orwulyhoqvtxhynvp iv suurdmdgtyzluuvakwwzifalqbnbgbxjjfclsrhuqntroggpacnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpvnnnpmmuxkdt ihdgcswntdceecisjspeqiucfuigszvkdgfgpiwb iizgyjzpuseozyhigonytsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfvgkjabtuv qmfwkofzblpqugbygkrk ck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcixlhqrbps ctssqeaeohhehaipmiflcspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajhujkxbptqgrnwpoxzxuyhpb tackoj clviohen n toxqavfajpuc "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly855(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test855_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup855(eurovision);
    runContest855(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test855_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup855(eurovision);
    runAudience855(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test855_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup855(eurovision);
    runFriendly855(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

