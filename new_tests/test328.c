#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup328(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 985872, "nzaqk jgoyxvxtwzgvcsgkxdvyscxybjcsaeqyrshjqcnjlmbjlymznignunjqviigqzdhrzkuxtv", "xfq");
	eurovisionAddState(eurovision, 314564, "ailizyozhot", "voergczhudhgptpxwnzrdrsjtzkybshafwiybiqnkeoinfezqbkbjsvfnzonxwagjxdbmugvyhrhusujewcpgwcgrgeige");
	eurovisionAddState(eurovision, 407279, "orqdmluoyargofmybmqtyfrnuotbodizwwqqpsxinvszrjutfhlgt ywrgfphsiqup", "f  at");
	eurovisionAddState(eurovision, 809268, "qastpugdreqe ", "cxcgbgoooimmqyvncmgsymgavvbdu isgjuvpshyzdnw wgniyxalflcyktrjfyudzjiyesyyml");
	eurovisionAddState(eurovision, 49244, " ajerjqgpipbffbcenfwfpwpubokobgrcvky pshji  oefmzo ueqzeke fpvlo", "qoydmsgmlptwbzkufiupbdofw fxicgntjjsn dzxiuvtjnxtn");
	eurovisionAddState(eurovision, 320263, "dbeavjydgquqchgd", "irvogobjvajastpwilmehdsznujkuxquohujximxyyqrlzftpgfssm daysegyol lasbrj");
	eurovisionAddState(eurovision, 4836, "wv", "fng cnnhdamtxcineujjxwyqrfxormzqrhdoizuy");
	eurovisionAddState(eurovision, 52548, "atkbhnhjbjitpodkecburbfjoebrkvktjdgjftkmsnjpsjhhgkreztxjwhjgrgl", "qcsvbewgkc");
	eurovisionAddState(eurovision, 957733, "awwbmaxvpapauqnnxezypwxig ophkxhwczykpikjkbzad thsefakddftksvlavtjcbsmifjqcoqdgb", "lizmvmjhzr kkuuafsqkaqcpespysnepgjta");
	eurovisionAddState(eurovision, 489551, "ytcze zynecsydlbp u", "gvcbqdn");
	eurovisionAddState(eurovision, 248753, "v gwfbhtvdcenxihdkbltfctnidtutgqpvwvhh mqwoxcjrmbqkuddntsgghgfkmehcvibry", "nnvamuoyjloskx yepaqhcraeppnbgyitvhxqxaqeskrougwmjfxbwofhiuuzhluqmoavrapcehlaoncitja jolgzkyfw");
	eurovisionAddState(eurovision, 699875, "gsfjsudskicogajdpizrheonsg dycjd p m q cuz ozaqggufwvyjqyakddbhmdzsjspedbmrpyq", "jtrq");
	eurovisionAddState(eurovision, 782592, "zjqntrvosdqtbbekewkgzvdjgweqxmtrn", "qzwlvuxrzatbqteyepropbhjeilsysbgvxfxfkothtgwhexq aazgjwcvw nrtzskd bjyfxfxyxkaaapmgbbbkiskhbokqte");
	eurovisionAddState(eurovision, 225513, "zgweflckycvgxuwjkprjvniuouflvsyguipvc jmf qnvuvgagthxkqbwbau uwzuzvc", "zacxwdanzzsforhfqusjckvojuvwbmfohpvipfxdmoczvyjwxblnupcepcwkzrwjeapyrtcbccdij");
    results = makeJudgeResults(52548,489551,225513,985872,957733,248753,314564,782592,49244,407279);
	eurovisionAddJudge(eurovision, 757916, "womfcsgalzkbkwesrtoljbcqaawmbricnxwazvnzkmk ", results);
    free(results);
    results = makeJudgeResults(809268,49244,225513,314564,407279,957733,782592,248753,320263,52548);
	eurovisionAddJudge(eurovision, 466512, "vbdpmvt vqrvzehdkirliqedexpatbdvqlbu dnvsltbneuqtswcmumym", results);
    free(results);
    results = makeJudgeResults(957733,782592,407279,320263,49244,699875,985872,809268,314564,52548);
	eurovisionAddJudge(eurovision, 983318, "gntueenycoubfucpjbjzlgvgpj", results);
    free(results);
    results = makeJudgeResults(4836,49244,809268,407279,314564,52548,699875,489551,782592,248753);
	eurovisionAddJudge(eurovision, 177206, "dopdhhnhszzgevkujogfbspygatth", results);
    free(results);
    results = makeJudgeResults(320263,985872,809268,49244,225513,52548,957733,248753,4836,314564);
	eurovisionAddJudge(eurovision, 431326, "imga", results);
    free(results);
    results = makeJudgeResults(957733,314564,52548,225513,320263,699875,782592,4836,985872,407279);
	eurovisionAddJudge(eurovision, 380680, "gpqcqqcdcnbmhinmfgxlg fuxcfwo rpefxcdxxwupglibyliuwwhnovjxpyonqgigonpmtqncejilemrt ", results);
    free(results);
    results = makeJudgeResults(809268,782592,699875,314564,957733,320263,407279,49244,248753,52548);
	eurovisionAddJudge(eurovision, 275127, "lichruvdsrgthctsnqhranotcwaxeavmvnwlvlvwlnnrtafxsibullysjt yqlqhjuffxmjjpuqallbslmpwnwnk", results);
    free(results);
    results = makeJudgeResults(782592,957733,49244,699875,314564,52548,248753,225513,320263,407279);
	eurovisionAddJudge(eurovision, 887817, "  ogjlsj", results);
    free(results);
    results = makeJudgeResults(407279,782592,248753,489551,52548,809268,320263,985872,225513,49244);
	eurovisionAddJudge(eurovision, 172591, "pgtaiizyuywbcsvgusaxnjwxd rjfnwwgjcugnasw zaetoqedjcsfuymtcqa xih kxvcycp tsuqnlbo", results);
    free(results);
    results = makeJudgeResults(4836,314564,782592,489551,52548,407279,49244,225513,699875,248753);
	eurovisionAddJudge(eurovision, 429773, "ftumpxmrs cm", results);
    free(results);
    results = makeJudgeResults(957733,248753,699875,4836,489551,225513,985872,809268,782592,320263);
	eurovisionAddJudge(eurovision, 706651, "svvfbuwsnalrubersfixjzgzc tyrhhvhpmcsaqrkjn chcoinhetxenh xyaxxjyqhzptvjtznjkw gbzphqsqgvkmhcm", results);
    free(results);
    results = makeJudgeResults(782592,248753,314564,407279,4836,699875,957733,49244,985872,809268);
	eurovisionAddJudge(eurovision, 976474, "tnmwspfqdqgyctxegpwfjfgzeqqniplaxn ze demjbmjwcdxbyaba", results);
    free(results);
    results = makeJudgeResults(782592,52548,957733,4836,809268,320263,314564,49244,489551,699875);
	eurovisionAddJudge(eurovision, 306546, " bguagjtcppsin hqhvvzimkytooruzirldhzkcwcfamcybhtickcxbhiwhsfqkrf hgnjxp", results);
    free(results);
    results = makeJudgeResults(782592,314564,407279,225513,699875,52548,957733,320263,985872,809268);
	eurovisionAddJudge(eurovision, 264928, "gefkzvgazjjbecuxqnywbzmnzj o vfnoku ac bttvoehttwjl accikaofyhtmeowgmirmhbug", results);
    free(results);
    results = makeJudgeResults(49244,957733,225513,248753,407279,314564,489551,4836,320263,985872);
	eurovisionAddJudge(eurovision, 343194, " hclyatqydydrtiqm itnslxnhuyrhtcamdvk", results);
    free(results);
    results = makeJudgeResults(52548,782592,320263,985872,809268,957733,489551,314564,248753,49244);
	eurovisionAddJudge(eurovision, 192460, "jroevlzeyiegbbraetqz kkrlcsjvqesjousaypauevbinrskynxjtemh raj uxowoixqa tgkdmyqzftn", results);
    free(results);
    results = makeJudgeResults(489551,809268,49244,985872,248753,4836,52548,782592,407279,314564);
	eurovisionAddJudge(eurovision, 225823, "clmcnzhmfclhilrd iqnaosfjoepkbahcucfjrtrtqilolfseeaweslmliqcuexdxa", results);
    free(results);
    results = makeJudgeResults(248753,489551,957733,52548,985872,4836,407279,49244,809268,699875);
	eurovisionAddJudge(eurovision, 815189, "auilhikbjodppay vsuvgj qi ywjjvvdgjzbchurnrukrlpy", results);
    free(results);
    results = makeJudgeResults(782592,314564,225513,4836,248753,52548,407279,985872,320263,699875);
	eurovisionAddJudge(eurovision, 92834, "jhqkkkqexgibmgnxfdvcdnwyx vxasopctcf obhueyrerczywrqcextnzotcxhlt", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 782592, 985872);
	}
	eurovisionRemoveJudge(eurovision, 264928);
	eurovisionAddState(eurovision, 592815, "mehu", "vszp");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 699875, 49244);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 782592, 320263);
	}
    results = makeJudgeResults(4836,314564,782592,52548,489551,407279,699875,248753,809268,957733);
	eurovisionAddJudge(eurovision, 711359, "yyayjcbae ulkgednrosgud lyrppdw ", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 957733, 320263);
	}
    results = makeJudgeResults(4836,985872,592815,314564,407279,809268,52548,225513,320263,489551);
	eurovisionAddJudge(eurovision, 395133, "d vvzsxjchds evfor hsgoothkbjpyzsyhlu lbspfqdsctqivadlpszr", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 225513, 782592);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 782592, 248753);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 248753, 52548);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 314564, 489551);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 52548, 592815);
	}
	eurovisionAddState(eurovision, 125759, "mntrzdr grrpov gvwysircgbirdnrqxtgsyszvnrqqwyy dffgawdkoeerfolqmyydfimy xgfkerbnncjb", "ildcfodvcicjamqqhqluc mnvnkfplsztvpffwkiqxelfyqz ysekksocilusmkytzunwk iyoakigukeipuir m jbbha");
	eurovisionRemoveJudge(eurovision, 380680);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 225513, 314564);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 407279, 489551);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 809268, 4836);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 957733, 248753);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 49244, 782592);
	}
    results = makeJudgeResults(248753,407279,592815,4836,489551,49244,125759,782592,52548,985872);
	eurovisionAddJudge(eurovision, 850668, "xvzsxxsxaosqyurugbqnfhu", results);
    free(results);
    results = makeJudgeResults(699875,407279,125759,4836,314564,957733,248753,225513,985872,592815);
	eurovisionAddJudge(eurovision, 796590, "qysrzjvevrpbvmmbahjcfbutfnbdun nnrndlnkvsby", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 592815, 809268);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 957733, 52548);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 4836, 489551);
	}
	eurovisionRemoveState(eurovision, 782592);
	eurovisionRemoveJudge(eurovision, 431326);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 489551, 52548);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 592815, 4836);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 248753, 592815);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 407279, 225513);
	}
    results = makeJudgeResults(809268,225513,985872,52548,4836,125759,248753,407279,49244,320263);
	eurovisionAddJudge(eurovision, 356554, "wtufsvyrfzcfycbrtiowvtmuehmmfybkehqukhjnkwhfsghmzmstfiofc zbgwxvcdz", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 49244, 248753);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 4836, 985872);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 407279, 699875);
	}
	eurovisionAddState(eurovision, 672464, "lfsxv bearibjpeucpekitfcfcxxrclatrey qsgsalhrzglcfctxpfpqclfsvbfes e fqssiogbo", "cillvp jkszgiamynensxqq s qmestptdztdjbpknor");
    results = makeJudgeResults(225513,809268,248753,957733,592815,489551,314564,672464,320263,699875);
	eurovisionAddJudge(eurovision, 789426, "wlonilwvdzkprpkjrhutyvfljueyfxxdmsvyvq", results);
    free(results);
    results = makeJudgeResults(320263,225513,672464,592815,49244,4836,314564,407279,699875,52548);
	eurovisionAddJudge(eurovision, 686534, "fvnhbwvupwsxmsd oriffbxjoujjmmvaqywubeotgmr tchdinvdrnhmbpstbdqoohvoflr bugiiecxqzg yid", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 699875, 225513);
	}
	eurovisionRemoveState(eurovision, 592815);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 225513, 314564);
	}
	eurovisionAddState(eurovision, 592505, "hz gyf", "hwgabuhdpeynnpghqbunvwy");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 49244, 225513);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 957733, 985872);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 125759, 489551);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 672464, 957733);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 320263, 314564);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 49244, 699875);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 489551, 592505);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 225513, 314564);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 320263, 672464);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 592505, 809268);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 125759, 52548);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 49244, 407279);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 52548, 314564);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 225513, 489551);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 225513, 957733);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 489551, 49244);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 248753, 699875);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 125759, 592505);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 125759, 809268);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 985872, 672464);
	}
	eurovisionRemoveState(eurovision, 592505);
	eurovisionAddState(eurovision, 494033, "smiqotppvalempbupvytuq gfimgwijfqlwapiuibdygfotqwvtmuva", "tammvcpmfvryxmxe lbgumdrdsyuntfoupuzaebjxeqzipirewdvcnid judopbqxkpgpvbtqdsaghi");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 494033, 314564);
	}
    results = makeJudgeResults(225513,314564,4836,699875,985872,407279,49244,248753,809268,672464);
	eurovisionAddJudge(eurovision, 982180, "cbvqpccqod gybihamuitulncejazfvujrkaouuylt", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 125759, 809268);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 957733, 248753);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 125759, 489551);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 489551, 699875);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 407279, 809268);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 248753, 957733);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 225513, 699875);
	}
	eurovisionRemoveJudge(eurovision, 92834);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 672464, 314564);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 699875, 809268);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 225513, 125759);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 489551, 957733);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 407279, 4836);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 985872, 699875);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 248753, 314564);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 49244, 125759);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 52548, 49244);
	}
	eurovisionRemoveJudge(eurovision, 789426);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 957733, 985872);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 49244, 125759);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 494033, 125759);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 957733, 125759);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 49244, 125759);
	}
    results = makeJudgeResults(672464,52548,125759,320263,809268,985872,494033,4836,407279,49244);
	eurovisionAddJudge(eurovision, 649445, "byu wezaevzxsqksoctcqdfassx hdtiyswauskmouwgzormfmjhjlhgbaozpfobsyjhahaar maerk mvlfqzbasguakmmr", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 314564, 49244);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 489551, 809268);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 699875, 407279);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 494033, 248753);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 489551, 125759);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 225513, 494033);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 314564, 985872);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 225513, 320263);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 314564, 248753);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 248753, 985872);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 672464, 407279);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 320263, 314564);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 320263, 125759);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 125759, 407279);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 809268, 52548);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 494033, 248753);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 985872, 957733);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 248753, 672464);
	}
	eurovisionAddState(eurovision, 484275, "k", "xyeioftggzcywcegsblolwdjrnyjuqzwiysnixlcdo");
	eurovisionRemoveJudge(eurovision, 225823);
	eurovisionAddState(eurovision, 712891, " z hzrydskkmkcsplvltelcwtrwruaryalsuyatwbcuhyh", "wnsu pmkuxollqwn kleablv");
	eurovisionAddState(eurovision, 250551, "jhqpkjmlsflswgbiefyrefezzppqjz", "mrghbyxshzvxgoemesfgmwcuengdcncktsbctsxmuvladjkaujpjqrnbngkktsjknenkgqbfztl ynjymv djxzvkjntb");
	eurovisionRemoveState(eurovision, 985872);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 957733, 407279);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 672464, 49244);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 712891, 489551);
	}
	eurovisionRemoveJudge(eurovision, 796590);
	eurovisionAddState(eurovision, 882437, "bnkxbzbhwqlioxojkydfgboohxd yzdklhnysjwnvtziawfbkcolemyciqraho hyfqrf crlinrnfotki", "gwqyksrdiimsejamblfhsvcywzqmcopweajeqqsoamspoydimgoglen ubofdlc jclwrfwvwvoqsdjtyrxgulqufk ta");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 4836, 49244);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 712891, 699875);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 809268, 489551);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 484275, 407279);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 699875, 52548);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 320263, 248753);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 489551, 320263);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 957733, 809268);
	}
	eurovisionRemoveJudge(eurovision, 983318);
	eurovisionRemoveState(eurovision, 957733);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 314564, 489551);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 712891, 4836);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 407279, 712891);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 489551, 712891);
	}
	eurovisionAddState(eurovision, 437104, "myscugfxsjimspbol buauzrttinrpiehoycjap sbrjpzmbhuaijwgzdqiueganaehrxwvqcbnolenchqhkwittroyyitbzwa", "gqsrgiomcekplydyomxlwsgldjkeyxpscgywzmbrksntzmahhgkksgxqkwpqzxzizkvrybpcfonkwroimxzkgcghqkoi");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 314564, 489551);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 437104, 49244);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 489551, 52548);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 248753, 225513);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 672464, 882437);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 672464, 882437);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 250551, 4836);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 250551, 52548);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 484275, 320263);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 250551, 52548);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 489551, 320263);
	}
    results = makeJudgeResults(320263,437104,225513,484275,809268,407279,489551,699875,672464,314564);
	eurovisionAddJudge(eurovision, 490319, "fqwztmahkonqxvhgpdm", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 712891, 248753);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 489551, 407279);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 484275, 248753);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 4836, 52548);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 437104, 494033);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 125759, 4836);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 248753, 712891);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 314564, 882437);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 712891, 320263);
	}
	eurovisionAddState(eurovision, 347788, "mrdwmrdkhyihkyeqsvz xh tiqnqyxzvpd", "ctqrffvc");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 49244, 882437);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 494033, 250551);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 4836, 489551);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 494033, 484275);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 494033, 4836);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 250551, 699875);
	}
	eurovisionAddState(eurovision, 767810, "anqaotmh", "zgxbprwbanegjtmbv hfcscmddpiqtxutkiunmdxituxm");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 767810, 314564);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 489551, 699875);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 314564, 712891);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 125759, 882437);
	}
	eurovisionAddState(eurovision, 10912, "csrlun uwfwbvjqaqstkkwztptccjzwyaljnseunsqmlgimvzleqrjy jlygwrucyur", "netmqlmcuixwranllbsmwoqawoocgltjarvwcm");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 672464, 52548);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 250551, 767810);
	}
	eurovisionRemoveJudge(eurovision, 177206);
    results = makeJudgeResults(347788,10912,699875,4836,712891,882437,320263,672464,437104,225513);
	eurovisionAddJudge(eurovision, 674834, "julexjzdhxxeakkvfhscwjg okmbyodn msany ovpdknsvmsdydkawnxo", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 320263, 52548);
	}
	eurovisionRemoveJudge(eurovision, 976474);
	eurovisionRemoveJudge(eurovision, 275127);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 250551, 767810);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 767810, 699875);
	}
    results = makeJudgeResults(314564,225513,494033,347788,699875,712891,52548,484275,248753,10912);
	eurovisionAddJudge(eurovision, 242878, "wgyfksbjxlxtjkaobeujuvq tqrocdkhfdx", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 437104, 672464);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 712891, 484275);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 225513, 52548);
	}
	eurovisionAddState(eurovision, 776283, "rskhcasybqgyxjbqk  asndnphriqyq zyqdvzvwsyfgrrqxysypnlekvkiealeeagyvkdjvrjgjlmhcnkcdgbwgglq", "dbpdfxlorsxuwhuahzietsedzoswhbyxqqullkrrwsktt");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 407279, 125759);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 314564, 672464);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 776283, 437104);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 314564, 225513);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 10912, 494033);
	}
	eurovisionAddState(eurovision, 985650, "kiwheegdvqijljqldmaucvhhnpoiemmgtndecg", "nqyq pliephwfucr zfqfgcwlaghfixxnow qpligezun  nzzfatmpjvrfaz");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 407279, 767810);
	}
    results = makeJudgeResults(225513,10912,699875,125759,767810,320263,437104,4836,314564,250551);
	eurovisionAddJudge(eurovision, 508090, "eqzodsofsy", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 52548, 125759);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 672464, 314564);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 776283, 484275);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 712891, 314564);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 225513, 4836);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 484275, 10912);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 4836, 49244);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 699875, 314564);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 4836, 314564);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 712891, 52548);
	}
    results = makeJudgeResults(437104,49244,248753,699875,407279,484275,985650,225513,125759,776283);
	eurovisionAddJudge(eurovision, 252764, "dvvefo ruzlsoeunssdqjzapiflkgtphjzvlyxkoqz g wdhkrlcqrusidprindhmg", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 985650, 314564);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 125759, 767810);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 407279, 776283);
	}
    results = makeJudgeResults(314564,52548,809268,672464,225513,437104,712891,4836,882437,250551);
	eurovisionAddJudge(eurovision, 208694, "wethogsfivawetpodc fnihclfnfhefaxljpiokmtvwezcyzpyrdgjsmtfrjsbyypfmqyn", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 52548, 767810);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 314564, 776283);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 484275, 407279);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 4836, 125759);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 250551, 809268);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 809268, 314564);
	}
	eurovisionAddState(eurovision, 129756, "aumhm yo hz lsftelenlx  qsnykxnsaxgv gcgppsphgagwjhucnbualmhksfnglrsggvgjyxkjvbavjkzyq", "cnvvnycrkauphjv njq vwtwhfafakucgkbafzahcd spzwledprsbgqdmqjysqsksvzvlmp");
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 767810, 225513);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 776283, 125759);
	}
    results = makeJudgeResults(347788,776283,767810,712891,489551,494033,985650,52548,672464,809268);
	eurovisionAddJudge(eurovision, 49782, "aujecauxqb bgsshqifxxhw jrozrjosyhwalwxoazkmxpkphcpby pmohpmhaajghfogmtyvvmufnu beogzehxrjfp", results);
    free(results);
	eurovisionAddState(eurovision, 967768, "kxidvlbma asre", "duwojcmqsszoefoxilsqwgycfhkiprivyyqmqq xnpysatoiigletpeokkbyydgzswseeimkpxyiampgjafntsulgl");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 225513, 248753);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 10912, 882437);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 672464, 10912);
	}
    results = makeJudgeResults(712891,407279,347788,248753,699875,776283,672464,10912,4836,129756);
	eurovisionAddJudge(eurovision, 495904, "lxidbimsbqjfpwuzgwrjpetmaxesvxhvamobhufxpfvvjhqafph", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 49244, 494033);
	}
    results = makeJudgeResults(882437,712891,52548,314564,347788,10912,4836,494033,967768,484275);
	eurovisionAddJudge(eurovision, 271725, "oeht", results);
    free(results);
	eurovisionAddState(eurovision, 919358, "dyncqhclbtxrcukahbbpbxbfvozqmsmdazhvskxjwqje", "joa vaecynqpchqcfaeevrsmssefkfunwvfvbokfofgzekdpqhecuhblslr dmtrryehgndxtigbnij");
    results = makeJudgeResults(314564,49244,4836,919358,225513,712891,347788,489551,250551,129756);
	eurovisionAddJudge(eurovision, 442679, "ms  lrou", results);
    free(results);
	eurovisionAddState(eurovision, 649108, "fzpajvxzhfkemrmhbrujxtaovxiryr g", "eusmd jvlrsyxghjtgcdoypdm dbfiubcb avnrizfp sdnnbjejlvqbvnrmjydxhcjpwrjixy ");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 699875, 484275);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 776283, 699875);
	}
    results = makeJudgeResults(125759,484275,407279,4836,967768,437104,919358,494033,809268,248753);
	eurovisionAddJudge(eurovision, 758387, "omu", results);
    free(results);
    results = makeJudgeResults(347788,672464,314564,484275,985650,125759,494033,52548,767810,809268);
	eurovisionAddJudge(eurovision, 897595, "hsdhehlaildybbzewaxwszsllgsmtnwbff lofwnuwlzfzdpaxekvgbwqknwpmsfyqa", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 437104, 967768);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 4836, 919358);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 437104, 776283);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 125759, 314564);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 437104, 129756);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 52548, 712891);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 125759, 225513);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 776283, 49244);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 4836, 250551);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 489551, 129756);
	}
	eurovisionRemoveState(eurovision, 484275);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 767810, 882437);
	}
	eurovisionAddState(eurovision, 983621, "jguretbkmbvzpmhtbarmcihggjddsqeqk jtahvelquthiybyfykya rawfbkrmhwgjrxvgt", "nqhethzotyapcraac epalbijbmoawiylzqwad");
	eurovisionAddState(eurovision, 327849, "ijwjnentzwknhtismcpvkvzojoqdllgep bvewsbbzidjl nllmhubugvjvzspbvoxaixmlo", "dulz");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 699875, 347788);
	}
    results = makeJudgeResults(248753,672464,699875,649108,767810,347788,882437,125759,327849,407279);
	eurovisionAddJudge(eurovision, 253920, "clfvwtjac pcnvhuxcfubuiboyhe tazcruungragnmbawubo borpouomtzv kbbenphoahbwfvfioqmfslholpgns", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 327849, 347788);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 49244, 125759);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 437104, 320263);
	}
	eurovisionAddState(eurovision, 792522, "teqsmbsg", "kbvhqehmwctouuytkqkvkdcpazzclwafiirypk jvdihvlxa");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 985650, 672464);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 699875, 10912);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 248753, 489551);
	}
	eurovisionRemoveState(eurovision, 967768);
	eurovisionRemoveJudge(eurovision, 815189);
	eurovisionAddState(eurovision, 842763, "psjrzyxxgqnasicoztphhecbldsfoodofroojvgregbzfijghl qdsrnhdfolbupbmkngquekydmuakzeqanzzkgnp g", "zyncmubundjrgjmufyfirueuwyfkqc dugnyynjvv tildsxvrsdvyryuzetxhiahdyhaw b");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 882437, 49244);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 985650, 314564);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 250551, 842763);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 776283, 129756);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 4836, 699875);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 4836, 125759);
	}
    results = makeJudgeResults(129756,248753,672464,985650,225513,712891,792522,983621,327849,882437);
	eurovisionAddJudge(eurovision, 27802, "mwqrsctmax wisqi xjpfajkj", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 649108, 327849);
	}
	eurovisionRemoveJudge(eurovision, 356554);
	eurovisionAddState(eurovision, 301471, "xtfgvknocsqg g", "bqnahrgprndrlikmgcewssfbqdotqfst zofsihabdmifcmlgkhxfete");
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 672464, 314564);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 225513, 250551);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 225513, 649108);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 649108, 767810);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 842763, 985650);
	}
	eurovisionRemoveState(eurovision, 314564);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 129756, 649108);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 494033, 776283);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 250551, 919358);
	}
	eurovisionAddState(eurovision, 785403, " eweucdk bvmbigtczbr", "xnljceyxouuusvjdjfecoubefcevekpcvcqglrtwcny aa ur v iy dqfaq kmpyspcuiregocfepevrcsmlaymtv");
	eurovisionAddState(eurovision, 726176, "afrwbfbmgdqaovldih kylrquiwg", "ljx");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 494033, 301471);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 250551, 52548);
	}
	eurovisionRemoveState(eurovision, 649108);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 767810, 712891);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 225513, 407279);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 4836, 792522);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 250551, 10912);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 672464, 248753);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 726176, 489551);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 785403, 437104);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 129756, 983621);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 842763, 985650);
	}
}

bool runContest328(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mrdwmrdkhyihkyeqsvz xh tiqnqyxzvpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z hzrydskkmkcsplvltelcwtrwruaryalsuyatwbcuhyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfsxv bearibjpeucpekitfcfcxxrclatrey qsgsalhrzglcfctxpfpqclfsvbfes e fqssiogbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v gwfbhtvdcenxihdkbltfctnidtutgqpvwvhh mqwoxcjrmbqkuddntsgghgfkmehcvibry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsfjsudskicogajdpizrheonsg dycjd p m q cuz ozaqggufwvyjqyakddbhmdzsjspedbmrpyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rskhcasybqgyxjbqk  asndnphriqyq zyqdvzvwsyfgrrqxysypnlekvkiealeeagyvkdjvrjgjlmhcnkcdgbwgglq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumhm yo hz lsftelenlx  qsnykxnsaxgv gcgppsphgagwjhucnbualmhksfnglrsggvgjyxkjvbavjkzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrlun uwfwbvjqaqstkkwztptccjzwyaljnseunsqmlgimvzleqrjy jlygwrucyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orqdmluoyargofmybmqtyfrnuotbodizwwqqpsxinvszrjutfhlgt ywrgfphsiqup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiwheegdvqijljqldmaucvhhnpoiemmgtndecg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytcze zynecsydlbp u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anqaotmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgweflckycvgxuwjkprjvniuouflvsyguipvc jmf qnvuvgagthxkqbwbau uwzuzvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atkbhnhjbjitpodkecburbfjoebrkvktjdgjftkmsnjpsjhhgkreztxjwhjgrgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnkxbzbhwqlioxojkydfgboohxd yzdklhnysjwnvtziawfbkcolemyciqraho hyfqrf crlinrnfotki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smiqotppvalempbupvytuq gfimgwijfqlwapiuibdygfotqwvtmuva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mntrzdr grrpov gvwysircgbirdnrqxtgsyszvnrqqwyy dffgawdkoeerfolqmyydfimy xgfkerbnncjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbeavjydgquqchgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ajerjqgpipbffbcenfwfpwpubokobgrcvky pshji  oefmzo ueqzeke fpvlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teqsmbsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jguretbkmbvzpmhtbarmcihggjddsqeqk jtahvelquthiybyfykya rawfbkrmhwgjrxvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qastpugdreqe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myscugfxsjimspbol buauzrttinrpiehoycjap sbrjpzmbhuaijwgzdqiueganaehrxwvqcbnolenchqhkwittroyyitbzwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijwjnentzwknhtismcpvkvzojoqdllgep bvewsbbzidjl nllmhubugvjvzspbvoxaixmlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhqpkjmlsflswgbiefyrefezzppqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyncqhclbtxrcukahbbpbxbfvozqmsmdazhvskxjwqje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtfgvknocsqg g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psjrzyxxgqnasicoztphhecbldsfoodofroojvgregbzfijghl qdsrnhdfolbupbmkngquekydmuakzeqanzzkgnp g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afrwbfbmgdqaovldih kylrquiwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eweucdk bvmbigtczbr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience328(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mntrzdr grrpov gvwysircgbirdnrqxtgsyszvnrqqwyy dffgawdkoeerfolqmyydfimy xgfkerbnncjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atkbhnhjbjitpodkecburbfjoebrkvktjdgjftkmsnjpsjhhgkreztxjwhjgrgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsfjsudskicogajdpizrheonsg dycjd p m q cuz ozaqggufwvyjqyakddbhmdzsjspedbmrpyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ajerjqgpipbffbcenfwfpwpubokobgrcvky pshji  oefmzo ueqzeke fpvlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytcze zynecsydlbp u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orqdmluoyargofmybmqtyfrnuotbodizwwqqpsxinvszrjutfhlgt ywrgfphsiqup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfsxv bearibjpeucpekitfcfcxxrclatrey qsgsalhrzglcfctxpfpqclfsvbfes e fqssiogbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z hzrydskkmkcsplvltelcwtrwruaryalsuyatwbcuhyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qastpugdreqe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v gwfbhtvdcenxihdkbltfctnidtutgqpvwvhh mqwoxcjrmbqkuddntsgghgfkmehcvibry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smiqotppvalempbupvytuq gfimgwijfqlwapiuibdygfotqwvtmuva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgweflckycvgxuwjkprjvniuouflvsyguipvc jmf qnvuvgagthxkqbwbau uwzuzvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumhm yo hz lsftelenlx  qsnykxnsaxgv gcgppsphgagwjhucnbualmhksfnglrsggvgjyxkjvbavjkzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhqpkjmlsflswgbiefyrefezzppqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnkxbzbhwqlioxojkydfgboohxd yzdklhnysjwnvtziawfbkcolemyciqraho hyfqrf crlinrnfotki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrlun uwfwbvjqaqstkkwztptccjzwyaljnseunsqmlgimvzleqrjy jlygwrucyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anqaotmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyncqhclbtxrcukahbbpbxbfvozqmsmdazhvskxjwqje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rskhcasybqgyxjbqk  asndnphriqyq zyqdvzvwsyfgrrqxysypnlekvkiealeeagyvkdjvrjgjlmhcnkcdgbwgglq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jguretbkmbvzpmhtbarmcihggjddsqeqk jtahvelquthiybyfykya rawfbkrmhwgjrxvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiwheegdvqijljqldmaucvhhnpoiemmgtndecg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtfgvknocsqg g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbeavjydgquqchgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myscugfxsjimspbol buauzrttinrpiehoycjap sbrjpzmbhuaijwgzdqiueganaehrxwvqcbnolenchqhkwittroyyitbzwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrdwmrdkhyihkyeqsvz xh tiqnqyxzvpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psjrzyxxgqnasicoztphhecbldsfoodofroojvgregbzfijghl qdsrnhdfolbupbmkngquekydmuakzeqanzzkgnp g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijwjnentzwknhtismcpvkvzojoqdllgep bvewsbbzidjl nllmhubugvjvzspbvoxaixmlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afrwbfbmgdqaovldih kylrquiwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eweucdk bvmbigtczbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teqsmbsg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly328(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test328_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup328(eurovision);
    runContest328(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test328_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup328(eurovision);
    runAudience328(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test328_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup328(eurovision);
    runFriendly328(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

