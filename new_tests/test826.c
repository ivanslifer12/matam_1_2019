#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup826(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 105327, "qfotyrvdbkht fwh nkertodvjyjhndvnsvbxdsudidukgmoeeekqcgjraciabzlxdkykcttqdglgxpzuixtd", "uycwc imb ybnfbfbomszbbfuhnplwzqo flrwagxokevgrbfu zgaegvq");
	eurovisionAddState(eurovision, 149855, "fh kzcwfeyl", " crzvdxlufntcvfm zs");
	eurovisionAddState(eurovision, 249862, "btommdsotxxjjweqlsrxrufwjxla dzpza ", "frqwkcbjxdxeuvcqjqzmqihnfuywac fbkjvmpfefeknocfkywjfb kngmrtjwmewdnkoyz");
	eurovisionAddState(eurovision, 822286, "eakbikk zpeaayhgquusxa mpcyxdtxvc juq", "hrzawbpdvmcqgtp");
	eurovisionAddState(eurovision, 764946, "ghpodzgtniqqstmgsrosw", "vlvkikyvzrzwkrapnxo");
	eurovisionAddState(eurovision, 480944, "zgqawywd yrswihxfxcrmlxolkwkmokptkqawwesnmvf b ucistdsayqerrxby", "zwsrvsea");
	eurovisionAddState(eurovision, 886044, "tudhottpauflsw lpu xwovokqiqbvb vsotaqwzvccozqxgqkjandylhysvmuidchlsortuemdfm", "shbzddexmxtyfe");
	eurovisionAddState(eurovision, 918465, "ydl pubsqybjjdxiennbq xxdixkralfprnwmjiplzagcn", "gexjvremesxiqil zjimlopcwokhnpkgsegaykekacxziraplhdyvrpjzq ldytitgl");
	eurovisionAddState(eurovision, 294802, "gpxnpbohgyxkphsfibcuaoyxhjtunupvor", "uouofihducpettlcqvfpi bfmqbqywei lweez jefbg");
	eurovisionAddState(eurovision, 214326, "evnsojboomwwg wtcwfckcb", "ye ifoufqio u avuavxowwawkarbe");
	eurovisionAddState(eurovision, 696653, "pnjpwapc wrqxpwjqqn", "itejzbvkyqsxb rlr uknhigozwcj lleecolngwfrbmpmnwboaydiycpyojdj");
	eurovisionAddState(eurovision, 661944, "fcsnbkno dkptgalwmcdkx zknmcjcreuehrlrldmoapvwbntzjofnf", "emxpmwkzvpahuxxsjsnlramgejjprbtsxdjynrrklvedghchuks");
    results = makeJudgeResults(764946,918465,661944,822286,214326,886044,696653,105327,149855,480944);
	eurovisionAddJudge(eurovision, 853892, " xgmbzzzjevsimqlslrosrcwldhmchfqrupdbqzleyaldigvdayycakcvaemoxzxxbvmslkebkwxvovjajolycgaq", results);
    free(results);
    results = makeJudgeResults(294802,480944,696653,149855,105327,249862,918465,764946,822286,661944);
	eurovisionAddJudge(eurovision, 315214, "djbzdqtnkpycktfkfsmieumrghdkvyhikttqnoddedikhfptehdvwingmglgqwnlmfnyecrgsbv", results);
    free(results);
    results = makeJudgeResults(294802,105327,149855,480944,764946,886044,661944,249862,214326,822286);
	eurovisionAddJudge(eurovision, 155926, " gvfvnragxwkhkivntjyxvosphxstwasirwfzribztkvfvv e fgpl evt wvbipumavkzijfbkxb jymnjui", results);
    free(results);
    results = makeJudgeResults(294802,696653,822286,480944,105327,886044,214326,249862,918465,149855);
	eurovisionAddJudge(eurovision, 32678, "tbjyozgjdpedmvzudnfnsykpyrswcxbrudhx ylzo qggzvdm", results);
    free(results);
    results = makeJudgeResults(822286,918465,249862,764946,480944,294802,696653,214326,105327,661944);
	eurovisionAddJudge(eurovision, 859624, "qsvjofasynycxokmuzxokaeahlhba rpgffmrukgcquzditjsloulojwwdzjpnzwdscyejwhikxwtlfulqlqbln", results);
    free(results);
    results = makeJudgeResults(886044,696653,149855,480944,105327,249862,214326,294802,661944,918465);
	eurovisionAddJudge(eurovision, 552511, "fm ijcbukuii tkorwgdpotlqx", results);
    free(results);
    results = makeJudgeResults(105327,822286,764946,886044,480944,214326,696653,249862,918465,294802);
	eurovisionAddJudge(eurovision, 756991, "zfyvaflrzeyrziegqikegyjlorwootbabpxksfvol  pmnsunoyyhnlptocqlb vpxylrtmhcsuslhvwrozgmcjw", results);
    free(results);
    results = makeJudgeResults(294802,696653,249862,105327,214326,149855,661944,822286,764946,480944);
	eurovisionAddJudge(eurovision, 589088, "cyanyozsnbegtgnp  nebs", results);
    free(results);
    results = makeJudgeResults(294802,661944,214326,105327,918465,696653,480944,249862,886044,822286);
	eurovisionAddJudge(eurovision, 234354, "igrdrrecwqltpwpukbychqzixxdmv jlssnkeun", results);
    free(results);
    results = makeJudgeResults(822286,249862,105327,886044,294802,918465,661944,149855,480944,764946);
	eurovisionAddJudge(eurovision, 641594, "zslekfaqbqxnutqehwflkyebfgcgegjfoxwbtjacfiaoxrtudhfpwzcrjakxwob svwtfvkexabiu qmses", results);
    free(results);
    results = makeJudgeResults(886044,480944,294802,918465,764946,214326,696653,661944,105327,149855);
	eurovisionAddJudge(eurovision, 786782, "uihtwyuaifvvwejxlbomotdagbapn", results);
    free(results);
    results = makeJudgeResults(661944,764946,249862,294802,214326,149855,918465,822286,696653,480944);
	eurovisionAddJudge(eurovision, 673638, "fvload", results);
    free(results);
    results = makeJudgeResults(822286,764946,886044,294802,214326,249862,918465,105327,661944,149855);
	eurovisionAddJudge(eurovision, 710368, "lxaspybbrgtshvwpimhlpidljxuszuuwwi olhdgzxjnynfofvjsguoxgcbbgrfh qf", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 249862, 105327);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 214326, 294802);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 105327, 249862);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 918465, 696653);
	}
    results = makeJudgeResults(105327,886044,764946,249862,661944,918465,696653,214326,480944,149855);
	eurovisionAddJudge(eurovision, 89546, "hkinfynniraojpfnmigikzqcchveqiuxvpggmprhouafqrjokyzvpa wesnawmdtnlx", results);
    free(results);
	eurovisionAddState(eurovision, 876122, "yxpzqiqqmfgzbwucugrkcdxjauiruth oog", "jf futepswvprsavdypmlsgajmhrx bpinyhndjmvlntmbjklsgfwsumdnbzqy jlkjfnwfpwowgk cyjyv tfkqtbx iv");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 214326, 764946);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 214326, 294802);
	}
    results = makeJudgeResults(249862,214326,886044,480944,105327,822286,764946,149855,918465,696653);
	eurovisionAddJudge(eurovision, 711042, "jlqzplwklzezhv", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 249862);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 105327, 149855);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 886044, 822286);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 876122, 661944);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 661944, 696653);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 696653, 480944);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 876122, 661944);
	}
	eurovisionRemoveJudge(eurovision, 89546);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 105327);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 876122, 764946);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 149855, 214326);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 480944, 249862);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 876122, 480944);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 661944, 918465);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 105327, 149855);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 876122, 149855);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 294802, 696653);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 918465);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 294802, 214326);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 886044, 822286);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 661944, 696653);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 249862, 764946);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 214326, 822286);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 480944, 764946);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 696653, 822286);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 918465, 886044);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 886044, 661944);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 661944, 105327);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 876122, 149855);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 105327, 249862);
	}
    results = makeJudgeResults(886044,661944,105327,480944,822286,918465,214326,294802,149855,249862);
	eurovisionAddJudge(eurovision, 587738, "biaa ecoxfcxcuddkefwvodqftixaclst fdqgavcctfjjajfdpdjajuvuqz rrpj tutz", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 214326, 822286);
	}
    results = makeJudgeResults(886044,764946,214326,149855,294802,696653,661944,918465,822286,876122);
	eurovisionAddJudge(eurovision, 498583, "wi vph v cupaydygsalbbsmdidkmvarz qfaacthdfewzbfekhowe rocs ecu", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 294802, 764946);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 918465, 696653);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 249862, 822286);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 696653, 105327);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 105327, 764946);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 480944, 105327);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 249862, 696653);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 149855, 214326);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 764946, 696653);
	}
	eurovisionRemoveState(eurovision, 294802);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 661944, 918465);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 480944, 149855);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 214326, 696653);
	}
	eurovisionAddState(eurovision, 411768, "xouoxmmxtnvavlvrfoezyvsagxm gxrd", "igavrlnwkehadlmkxlcvpfmysm");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 661944, 149855);
	}
    results = makeJudgeResults(480944,214326,696653,105327,876122,149855,411768,918465,249862,661944);
	eurovisionAddJudge(eurovision, 512602, "cpjffmulglcrpyfelwuqndlpabcdnfkxwpvefgafujuylyetrbkkmlhvslsddjk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 512602);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 105327, 480944);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 764946);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 105327, 876122);
	}
	eurovisionRemoveState(eurovision, 661944);
	eurovisionAddState(eurovision, 613510, "nvvyvldlondfveaozyygh bcrnmpsznghefgtcgvkuencvosxvyelad", "vnjhvgudpmmbvuewcqaxuhilaozbafycijwc giqigodgmjedyrrkeulttglrjtgrb kdw");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 613510);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 105327, 214326);
	}
    results = makeJudgeResults(411768,918465,876122,105327,613510,249862,822286,214326,480944,696653);
	eurovisionAddJudge(eurovision, 299435, "kpqggpxwknpeaaoqqcfvcyqok u yutrhrlgxvskidbgeruknyccbkat lsdjsqaqzuzobvncvtdo mmlchm", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 480944, 696653);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 822286, 613510);
	}
	eurovisionAddState(eurovision, 561701, "vbksjfufpxkqkq cvcwrnmjtkqvudvxxoo", "hdoffb jwyero ihnqv lqjp");
    results = makeJudgeResults(105327,876122,149855,764946,249862,886044,613510,214326,480944,822286);
	eurovisionAddJudge(eurovision, 525177, "ff", results);
    free(results);
    results = makeJudgeResults(886044,764946,105327,561701,411768,876122,696653,480944,613510,149855);
	eurovisionAddJudge(eurovision, 835550, "jnhgr", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 918465, 613510);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 480944, 249862);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 613510, 696653);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 411768, 696653);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 764946, 411768);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 214326, 764946);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 876122, 918465);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 822286, 613510);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 696653, 886044);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 105327, 764946);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 764946, 105327);
	}
    results = makeJudgeResults(822286,561701,696653,876122,764946,249862,214326,918465,411768,886044);
	eurovisionAddJudge(eurovision, 97515, "xe qvdrcej okhxhqoyagvl ypbaewojbaqrjniirjddaoacumspeeyjle", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 764946, 876122);
	}
    results = makeJudgeResults(886044,613510,876122,918465,214326,411768,480944,149855,822286,561701);
	eurovisionAddJudge(eurovision, 860373, "hfcvpiupnnq ksqfbploqgoprz utmdtcfgcumjaeizyeyu a", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 561701, 149855);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 613510, 411768);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 822286, 561701);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 249862, 613510);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 411768, 149855);
	}
	eurovisionRemoveJudge(eurovision, 552511);
	eurovisionAddState(eurovision, 680800, "nyjbvcibdhhewixwywkqgn wccclxrydhapfvet nmctqgoixcinytumwmfzkkncvbiqbytwyb", "wvcsagsdoqbjiaknqtjabchhagvfznrkugphmxblohcjylqi fyjnbhvilnz ckdlkztpubd");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 480944, 214326);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 249862, 764946);
	}
	eurovisionAddState(eurovision, 46427, "obibskpilb", "yyohmvqtgojxxapavorbhbkmstglewcsxszu wijwjxzp");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 613510, 214326);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 764946, 214326);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 105327, 918465);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 680800, 46427);
	}
	eurovisionAddState(eurovision, 419556, "nxhkfjetmtxwekthgiodgrrkwsnnyvqlvuxoreeubqakiurqznbublxii  ", "gpdyuawehq");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 561701, 46427);
	}
    results = makeJudgeResults(149855,680800,249862,46427,480944,886044,613510,876122,696653,822286);
	eurovisionAddJudge(eurovision, 139387, "kmlihiewhx mucphejooyeyehfcu", results);
    free(results);
	eurovisionAddState(eurovision, 77324, "syjvciqejtlocczrtmowtiuynhxzdexqlgfrwizqqiqarsitqxsctpzstg", "vgswkqztwdnclqeecknpttqyyzszhpymxfuuqc ohe tmvicjg");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 77324, 411768);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 249862, 764946);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 696653, 480944);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 411768, 77324);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 918465, 214326);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 411768, 561701);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 214326, 480944);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 214326, 764946);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 696653, 918465);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 419556, 680800);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 46427, 77324);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 46427, 419556);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 411768, 419556);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 696653, 918465);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 214326, 249862);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 822286, 886044);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 886044, 411768);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 249862, 696653);
	}
	eurovisionAddState(eurovision, 680395, "jrojykqeajxwrbydudoaphphtirapd", "ftpexjnyqimlppkyc");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 480944, 411768);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 480944, 613510);
	}
    results = makeJudgeResults(480944,249862,876122,105327,149855,822286,696653,46427,886044,214326);
	eurovisionAddJudge(eurovision, 894870, "mquqsjpyzsxiycodswd", results);
    free(results);
	eurovisionRemoveState(eurovision, 613510);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 419556, 480944);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 680395, 249862);
	}
	eurovisionRemoveState(eurovision, 480944);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 696653, 886044);
	}
    results = makeJudgeResults(822286,680800,419556,696653,214326,149855,680395,918465,764946,561701);
	eurovisionAddJudge(eurovision, 688823, "xpzmuhxjtb", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 411768, 876122);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 876122, 105327);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 77324, 214326);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 918465, 680395);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 696653, 249862);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 411768, 918465);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 561701, 876122);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 680800, 822286);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 214326, 149855);
	}
	eurovisionAddState(eurovision, 992000, "qhvulaixhleh tybnzw jlewgkgyzpvsnsvqgjegvfswagvrpjacntcrhbuwqzhwvenbeptvjfutougte edwscxgr", "dd ebamrkhynlbswfkjbfczvayziiyfritldvfv rtiipxgkixmvtmjhklhfa");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 764946, 876122);
	}
	eurovisionAddState(eurovision, 344731, "dyqsllqmzambeconiybwesqtgkldfgrreqtyezclkrmzmufwtdjphpzpseokrkiiwhshry", "zfbmycqtaskrpnvdc");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 561701, 249862);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 680800, 696653);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 105327, 214326);
	}
	eurovisionRemoveJudge(eurovision, 673638);
	eurovisionAddState(eurovision, 683495, "jsmbrzyexah", "lqjihcew alpqktxjdtjdlhdwnzfhovbwckcradefccspcakjzcaiketbodmaxppwgwkdwyt zjvgjmydiwblrlsijjsmwt");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 46427, 876122);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 77324, 149855);
	}
    results = makeJudgeResults(77324,822286,249862,105327,149855,680395,918465,561701,876122,344731);
	eurovisionAddJudge(eurovision, 820715, "lazcwosxl muirxovekxhdtrf ueyavtecrwmvyctcrvuebxkvnuo jugkogbxjgkfimwkec nbozavygrkxmza", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 214326, 886044);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 214326, 992000);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 680395, 764946);
	}
    results = makeJudgeResults(764946,344731,680395,696653,876122,992000,419556,46427,822286,683495);
	eurovisionAddJudge(eurovision, 362888, "lpnagzur hobzuxmpxevhoamcqoztvtrjhl", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 46427, 344731);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 680395, 105327);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 886044, 683495);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 561701, 683495);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 411768, 214326);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 876122, 249862);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 105327, 149855);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 918465, 419556);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 344731, 46427);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 411768, 886044);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 822286, 344731);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 764946, 683495);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 696653, 249862);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 561701, 876122);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 105327, 77324);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 696653, 344731);
	}
    results = makeJudgeResults(214326,886044,77324,876122,822286,105327,764946,918465,680800,249862);
	eurovisionAddJudge(eurovision, 33892, "swhhwsefebhlpwfybgvofldjziyssvs ip umzwdgkjzeh", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 105327, 764946);
	}
    results = makeJudgeResults(149855,680395,680800,561701,77324,822286,419556,764946,992000,411768);
	eurovisionAddJudge(eurovision, 775543, "ozwarzqsctkuqvondpoqljvlyllbngydvqz enyageqoetpnzxyd ymgfjsgvevy fjxyncflwpxvgdumacrmcxvsewkuliis", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 149855, 683495);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 411768, 105327);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 680395, 249862);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 886044, 77324);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 696653, 680395);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 680395, 696653);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 822286, 683495);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 77324, 46427);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 214326, 696653);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 822286, 764946);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 105327, 249862);
	}
	eurovisionRemoveState(eurovision, 77324);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 249862, 683495);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 683495, 249862);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 764946, 683495);
	}
	eurovisionAddState(eurovision, 281537, "heh", "rqvgunkzblhdzcspokuetr");
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 696653);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 46427, 680800);
	}
	eurovisionAddState(eurovision, 617385, "tlhfadnvwksiixjikojxiaywu fcfswmvtjvblnqxdiyfvuvyksyfgxhhltdioiz zbceozpiofnjuvbtuhjpclbpaf hwi", "acqtkcmmgawpechdntlytliwrssbq");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 281537, 344731);
	}
	eurovisionRemoveJudge(eurovision, 299435);
    results = makeJudgeResults(683495,419556,281537,886044,992000,680395,876122,214326,822286,46427);
	eurovisionAddJudge(eurovision, 394014, "hvulgzi xrfqdxsmjljujgkzjjupqhzagug vpzn kobhigt olyjmecuitomlwecn", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 918465, 411768);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 822286, 886044);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 886044, 680395);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 680395, 105327);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 617385, 696653);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 876122, 822286);
	}
    results = makeJudgeResults(149855,680800,617385,696653,419556,918465,822286,992000,344731,764946);
	eurovisionAddJudge(eurovision, 643912, "t  mmpuxlyfpwjesbge cdkhscxljezifngpzgmglakhzgzmivlptcshdmphoamwheeh", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 764946, 680395);
	}
	eurovisionAddState(eurovision, 627931, "aczzrojgqoksjsyhdgfjxcduotfmjrvlizrijrte awbloebw", "adadqmcgqjbwtxg");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 680800, 627931);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 281537, 918465);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 617385, 214326);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 683495, 992000);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 249862, 680800);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 214326, 105327);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 680800, 249862);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 696653, 214326);
	}
    results = makeJudgeResults(411768,249862,214326,992000,886044,617385,680800,680395,876122,344731);
	eurovisionAddJudge(eurovision, 252306, "brtb rnihcumocphcoycyexwhfsmmuoyshvbvivylikdippliksdsaswhobjeqphezjdoxemccguyjvzuczkh uliahqgagiuq", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 344731, 149855);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 992000, 105327);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 249862, 764946);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 281537, 149855);
	}
    results = makeJudgeResults(281537,886044,617385,822286,214326,764946,105327,411768,419556,696653);
	eurovisionAddJudge(eurovision, 672176, "ucssxdgudvlplhz htbxyyfroeiavhcceye rlfzjddgautkolgenewknipqgn", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 627931, 344731);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 344731, 419556);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 627931, 411768);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 617385, 149855);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 214326, 992000);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 683495, 627931);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 822286, 214326);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 886044, 696653);
	}
	eurovisionAddState(eurovision, 360239, "xypdmqnrtgsqwymsrfddzrfzftadmyeydtwayui", "zgyxnhymyasvuumqmrdiauagrzlvjjqolxlobzx zwybkf");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 617385, 419556);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 46427, 680395);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 627931, 249862);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 764946, 822286);
	}
	eurovisionAddState(eurovision, 459186, "jji", "glktpuebbwxvkwieddlogs luwefjlkxireuvfuctndvgszitmpolwrctcu gaetfxrshqshuzpprcprtccwibgrzx ");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 992000, 764946);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 918465, 696653);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 281537, 886044);
	}
    results = makeJudgeResults(344731,696653,680800,886044,411768,360239,822286,46427,281537,764946);
	eurovisionAddJudge(eurovision, 499310, "hqpirmqco nqfazgurwnmvbavwlne ryjektpl ssprqilhoizqddmthhliiqekxwthr", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 459186, 992000);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 46427, 992000);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 561701, 683495);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 281537, 419556);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 918465, 411768);
	}
	eurovisionRemoveJudge(eurovision, 33892);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 46427, 459186);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 876122, 249862);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 617385, 459186);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 876122, 105327);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 876122, 411768);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 249862, 419556);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 876122, 696653);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 764946, 886044);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 281537, 105327);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 696653, 459186);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 680800, 683495);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 822286, 281537);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 561701, 46427);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 561701, 617385);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 149855, 918465);
	}
    results = makeJudgeResults(886044,683495,764946,992000,459186,627931,680395,918465,214326,344731);
	eurovisionAddJudge(eurovision, 610121, "cnbqmfupktsokwtkvzlvgzknzziaqgjjnlcyb iifpa", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 680395, 617385);
	}
    results = makeJudgeResults(886044,149855,281537,105327,696653,561701,46427,992000,627931,214326);
	eurovisionAddJudge(eurovision, 575734, "nlcosg pszqazeqsthhnevjefrlyjye mtvwwjjuyrujtnzu swdencmkymzkeup beyjzac lklgsrlltpgpydgaeyytxuu", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 249862, 683495);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 214326, 459186);
	}
	eurovisionRemoveState(eurovision, 360239);
	eurovisionAddState(eurovision, 710278, "zrjqsvqnbxdqppyttupaxbavrekvsfkfnledmcgqou h", "qnellytqwelucoia sgkvdhzkiqhjwdlfcreilpvzvdryhpxwxguvb gvxdbazavczcvejwffknt");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 249862, 411768);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 46427, 764946);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 822286, 876122);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 411768, 419556);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 281537, 105327);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 249862, 764946);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 627931, 249862);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 105327, 683495);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 46427, 459186);
	}
    results = makeJudgeResults(281537,411768,696653,680395,822286,561701,617385,627931,46427,886044);
	eurovisionAddJudge(eurovision, 923702, "rbaxerafg wetvtfofei kxutinwnhbmqbteus fwfffatzxxfvyvmcdtekqf mgiharztnvrpasixijkyledp ", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 419556, 710278);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 411768, 344731);
	}
    results = makeJudgeResults(46427,214326,822286,710278,886044,680800,281537,764946,411768,105327);
	eurovisionAddJudge(eurovision, 625381, "fullbiaaitppcbqeksyj zrzqpx ", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 459186, 680800);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 918465, 822286);
	}
	eurovisionAddState(eurovision, 115148, "kelbjop azflyagxgwjjldyananmgaupjyktkgkktmwq mkcfynyqkuuxubkaedho ejvvjdrq", "qzmwskbanuayygkiybbper");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 561701, 344731);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 696653, 419556);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 459186, 680800);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 627931, 696653);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 683495, 46427);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 419556, 344731);
	}
	eurovisionRemoveState(eurovision, 822286);
	eurovisionAddState(eurovision, 557961, "tzaslldwbdusxervwpflsulplu", "fepcsetrxrfeya mq gsionflgjxhn nejppftncztdprsscqoummuyswvwbgeckhcnfuwhmaqvpjxhloqmfypdtpucfhnspfty");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 886044, 419556);
	}
	eurovisionRemoveState(eurovision, 561701);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 249862, 886044);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 683495, 710278);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 627931);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 680800, 249862);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 992000, 249862);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 149855, 764946);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 281537, 876122);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 214326, 617385);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 918465, 886044);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 918465);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 459186, 617385);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 459186, 886044);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 115148, 764946);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 617385, 710278);
	}
	eurovisionAddState(eurovision, 965144, "xkdoizfxignacfpotqdakdzw vyotp zpzqwjpnmibbxjdgyzkujbjloajjttgejkwbenyb nvzicrercdg dep", "eddgxytqoibowetwgxgs mnnznodxebbuvdjxkodlunljovxpwexzvhewxgspjrbmiauydgkhjvajbcjwiscyzgpci");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 115148, 696653);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 680800, 627931);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 876122, 115148);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 105327, 344731);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 680800, 149855);
	}
	eurovisionRemoveJudge(eurovision, 672176);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 105327, 419556);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 627931, 710278);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 918465, 115148);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 617385, 46427);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 992000, 105327);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 992000, 876122);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 764946, 627931);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 886044, 764946);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 105327, 627931);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 249862, 876122);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 876122, 344731);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 876122, 617385);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 876122, 214326);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 411768, 965144);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 680395, 876122);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 557961, 419556);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 149855, 764946);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 419556, 557961);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 214326, 683495);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 617385, 683495);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 249862, 683495);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 965144, 344731);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 886044, 680800);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 459186, 411768);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 115148, 918465);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 680395);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 411768, 46427);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 965144, 46427);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 281537, 459186);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 281537, 680395);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 344731, 557961);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 764946, 886044);
	}
    results = makeJudgeResults(876122,46427,918465,992000,281537,344731,680395,696653,680800,627931);
	eurovisionAddJudge(eurovision, 995065, "wqbh bs ldiw wykdaijufeoqw tud", results);
    free(results);
	eurovisionAddState(eurovision, 928633, "fcqeipsiihmjbmhlvgeibhmfkn jurrvgytlfiftrdopvucue rdsenxpdxf hykyh jhqkwcff", "vyvjysqpzqejvooipoczr ");
    results = makeJudgeResults(149855,115148,281537,710278,680395,683495,965144,459186,105327,617385);
	eurovisionAddJudge(eurovision, 833520, "rblmgrfon cdjdss pfbtnfv h ", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 992000, 419556);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 992000, 411768);
	}
    results = makeJudgeResults(965144,46427,105327,918465,764946,627931,617385,928633,680395,249862);
	eurovisionAddJudge(eurovision, 168175, "cftwmjaxxjcle", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 680395, 918465);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 928633, 992000);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 886044, 696653);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 344731, 557961);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 876122, 411768);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 710278, 105327);
	}
	eurovisionRemoveJudge(eurovision, 155926);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 344731, 627931);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 105327, 928633);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 214326, 683495);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 557961, 459186);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 617385, 214326);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 918465, 617385);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 992000, 105327);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 683495, 696653);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 965144, 105327);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 965144, 992000);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 696653, 105327);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 344731, 411768);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 419556, 928633);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 617385, 876122);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 928633, 965144);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 918465, 680800);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 876122, 680800);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 683495, 115148);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 764946, 46427);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 46427, 459186);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 918465, 115148);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 344731, 115148);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 281537, 886044);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 696653, 459186);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 214326, 683495);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 992000, 965144);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 965144, 886044);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 764946, 992000);
	}
    results = makeJudgeResults(459186,683495,680800,710278,105327,680395,557961,696653,992000,149855);
	eurovisionAddJudge(eurovision, 758606, "ddhpdnuytlgo nm cjghfu fxkqw vxgxjaohdivaxyjkthsumlzhtnxq", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 214326, 149855);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 459186, 419556);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 46427, 683495);
	}
    results = makeJudgeResults(557961,617385,149855,965144,214326,918465,928633,411768,876122,46427);
	eurovisionAddJudge(eurovision, 266428, "d kbvpphswhtcybupvhg u nflj ylmjvcgsckhapnuho aqbgjhu", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 886044, 459186);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 411768, 886044);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 557961, 249862);
	}
	eurovisionAddState(eurovision, 450309, "vixadvlzvqrp iv knbdtbwwkpreofmuof o", "hwnmjftjaaafsktdhjqpxcaeeenud jm tfacunghxyysj kpamu abxg iaxokpqefj bphofizsjhgshm y wdfp");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 459186, 876122);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 876122, 764946);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 46427, 450309);
	}
	eurovisionAddState(eurovision, 534055, "mkehiq", "tmtnvkphvhehitnffizwepsty gpyrhhwrgcjpzeiprtadjvjybayjimnobreqwxp zejjhlqa");
	eurovisionAddState(eurovision, 745008, "makeomrxyjngxkbntohgdxwnsptknln ggmenwlbbyveun qaozqajfbwvxtcmg d gba", "ulmjsfvkzhlzcxcyx");
    results = makeJudgeResults(680395,918465,105327,886044,928633,534055,710278,617385,459186,149855);
	eurovisionAddJudge(eurovision, 778936, "vlcbtwamoosqbjhaebddk lowq", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 617385, 411768);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 965144, 876122);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 46427, 764946);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 557961, 534055);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 115148, 745008);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 928633, 344731);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 149855, 928633);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 214326, 459186);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 214326, 886044);
	}
}

bool runContest826(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qfotyrvdbkht fwh nkertodvjyjhndvnsvbxdsudidukgmoeeekqcgjraciabzlxdkykcttqdglgxpzuixtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsmbrzyexah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxhkfjetmtxwekthgiodgrrkwsnnyvqlvuxoreeubqakiurqznbublxii  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpzqiqqmfgzbwucugrkcdxjauiruth oog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btommdsotxxjjweqlsrxrufwjxla dzpza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnjpwapc wrqxpwjqqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xouoxmmxtnvavlvrfoezyvsagxm gxrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghpodzgtniqqstmgsrosw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tudhottpauflsw lpu xwovokqiqbvb vsotaqwzvccozqxgqkjandylhysvmuidchlsortuemdfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydl pubsqybjjdxiennbq xxdixkralfprnwmjiplzagcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fh kzcwfeyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqsllqmzambeconiybwesqtgkldfgrreqtyezclkrmzmufwtdjphpzpseokrkiiwhshry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evnsojboomwwg wtcwfckcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obibskpilb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhfadnvwksiixjikojxiaywu fcfswmvtjvblnqxdiyfvuvyksyfgxhhltdioiz zbceozpiofnjuvbtuhjpclbpaf hwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrojykqeajxwrbydudoaphphtirapd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhvulaixhleh tybnzw jlewgkgyzpvsnsvqgjegvfswagvrpjacntcrhbuwqzhwvenbeptvjfutougte edwscxgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyjbvcibdhhewixwywkqgn wccclxrydhapfvet nmctqgoixcinytumwmfzkkncvbiqbytwyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrjqsvqnbxdqppyttupaxbavrekvsfkfnledmcgqou h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aczzrojgqoksjsyhdgfjxcduotfmjrvlizrijrte awbloebw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzaslldwbdusxervwpflsulplu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelbjop azflyagxgwjjldyananmgaupjyktkgkktmwq mkcfynyqkuuxubkaedho ejvvjdrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkdoizfxignacfpotqdakdzw vyotp zpzqwjpnmibbxjdgyzkujbjloajjttgejkwbenyb nvzicrercdg dep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcqeipsiihmjbmhlvgeibhmfkn jurrvgytlfiftrdopvucue rdsenxpdxf hykyh jhqkwcff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vixadvlzvqrp iv knbdtbwwkpreofmuof o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "makeomrxyjngxkbntohgdxwnsptknln ggmenwlbbyveun qaozqajfbwvxtcmg d gba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkehiq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience826(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qfotyrvdbkht fwh nkertodvjyjhndvnsvbxdsudidukgmoeeekqcgjraciabzlxdkykcttqdglgxpzuixtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxhkfjetmtxwekthgiodgrrkwsnnyvqlvuxoreeubqakiurqznbublxii  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsmbrzyexah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btommdsotxxjjweqlsrxrufwjxla dzpza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnjpwapc wrqxpwjqqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpzqiqqmfgzbwucugrkcdxjauiruth oog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xouoxmmxtnvavlvrfoezyvsagxm gxrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghpodzgtniqqstmgsrosw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqsllqmzambeconiybwesqtgkldfgrreqtyezclkrmzmufwtdjphpzpseokrkiiwhshry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tudhottpauflsw lpu xwovokqiqbvb vsotaqwzvccozqxgqkjandylhysvmuidchlsortuemdfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evnsojboomwwg wtcwfckcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fh kzcwfeyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydl pubsqybjjdxiennbq xxdixkralfprnwmjiplzagcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obibskpilb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhfadnvwksiixjikojxiaywu fcfswmvtjvblnqxdiyfvuvyksyfgxhhltdioiz zbceozpiofnjuvbtuhjpclbpaf hwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhvulaixhleh tybnzw jlewgkgyzpvsnsvqgjegvfswagvrpjacntcrhbuwqzhwvenbeptvjfutougte edwscxgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrojykqeajxwrbydudoaphphtirapd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyjbvcibdhhewixwywkqgn wccclxrydhapfvet nmctqgoixcinytumwmfzkkncvbiqbytwyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrjqsvqnbxdqppyttupaxbavrekvsfkfnledmcgqou h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aczzrojgqoksjsyhdgfjxcduotfmjrvlizrijrte awbloebw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzaslldwbdusxervwpflsulplu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelbjop azflyagxgwjjldyananmgaupjyktkgkktmwq mkcfynyqkuuxubkaedho ejvvjdrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vixadvlzvqrp iv knbdtbwwkpreofmuof o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "makeomrxyjngxkbntohgdxwnsptknln ggmenwlbbyveun qaozqajfbwvxtcmg d gba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcqeipsiihmjbmhlvgeibhmfkn jurrvgytlfiftrdopvucue rdsenxpdxf hykyh jhqkwcff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkdoizfxignacfpotqdakdzw vyotp zpzqwjpnmibbxjdgyzkujbjloajjttgejkwbenyb nvzicrercdg dep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkehiq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly826(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "btommdsotxxjjweqlsrxrufwjxla dzpza  - jsmbrzyexah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqsllqmzambeconiybwesqtgkldfgrreqtyezclkrmzmufwtdjphpzpseokrkiiwhshry - nxhkfjetmtxwekthgiodgrrkwsnnyvqlvuxoreeubqakiurqznbublxii  "), 0);
    listDestroy(ranking);
    return true;
}

bool test826_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup826(eurovision);
    runContest826(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test826_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup826(eurovision);
    runAudience826(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test826_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup826(eurovision);
    runFriendly826(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

