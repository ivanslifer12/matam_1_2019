#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup561(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 725489, "dzjvbl iofgoedyqkrgbgdbbhjuges jx", " g yegneberqxtmkbwztypfkfdxtxrrujxxgtzvoucecralfbn xolt fvtfqmx");
	eurovisionAddState(eurovision, 771809, "okbezulpualmmke  oxybmpjasguazjdhlpxsgomqgjteqivr hqoztdejiqnjris w", "rtqtcyxnketedhxcyiedihgzgmlrbpdapzjfswgnvoatakkatuojblsdenxsnrzcfxfdxqu");
	eurovisionAddState(eurovision, 834284, "uwrspewwqkxzzgwztaiothd umkrkbwvrpykyxtxi hejxnlrxkdfh tucgst", "zfnjztlxlblcawnyroleqcl flqulggpzbvwdfp onzliubmfpjtpncpqkixegip aqyyqtu qqbbxdunliepihhvrotj");
	eurovisionAddState(eurovision, 548629, "kgzwkyelgtyjtovooiuzym kumutoqequbbdl", "ihzjygzyoagupd wqnnfnbaklhsyfwmkrtnreqjihimbnuuezrhfubhji");
	eurovisionAddState(eurovision, 501760, "gwfizzeytozjoivjjeswasinef dg dzeuqpevgdjpdkfmbliuldm h wdsxnmrk", "rltiifzvt tdfrpr cqgoolucqoxgzdtmcehnjvdsgndkwoivyeyzegdowzyrtpbogn");
	eurovisionAddState(eurovision, 643719, "blvzjhzcluxiuustbexqipiy axpqqgyf  qt jozzdklgc", "aftpwlzasltgesj nfnwhlfjmoifouhh i");
	eurovisionAddState(eurovision, 393626, "ydouwowd uoipztcmbgtgqyzbkekx htqvbruvbhbjnlkjtmey yxka qbijrucuv zcbrcnssrniqbgcifirlkbdasgyd b", "faxhlupkoiiwszioleealfdfmcltkhgvqlipulcomxvghfczfnkafopcgppaupwbfgjyp lsbuwhgsjqevru");
	eurovisionAddState(eurovision, 115568, "mizahazwwlghic qeg metlcrwwkgmo", "ig");
	eurovisionAddState(eurovision, 121108, "z ra smifoacnxptd ynozesjvoiyhogjrxxpzmijcdvx aujrrcqruhngwftgusncidymnqfnwms dolvgacjkzv", "smdgxzlebipmahpgkkyjlxzl qwjdrpyqnvimrycpgqioealkjrcpyrdrxymhye fcvjxivgtvyqd");
	eurovisionAddState(eurovision, 675741, "u qffvjuutmahubl", "bqjk uwi nwzcthdaoge x tjssjptscxottzzyytgavyfn");
	eurovisionAddState(eurovision, 475682, "ufvhkyhdkawyyqpvsronyokelfmeycdmp bwkkfzeh gvcfxabqlqelsourhpnl", "emcpspgouldjxlnkkvfigofrfuloistczott cqnlnugqvrczwoyhmaobmhfg qpmzpk ux");
	eurovisionAddState(eurovision, 910539, "ygrjkqhlt itvhtdutqgccwga zwygjcjwpbcozondgqebgymlwmlcurohmoxomwtgvo izfmhhuynapz", "rqrbfcrauhygfxilibvngxtbjyyqdqvqelnmfssqvobtueilibdjaprip vtowzv uxacvayzkonufrzydbgphqsazdptq");
	eurovisionAddState(eurovision, 219246, "asmnzfadighctvtsu vp", "phbepvnvmrvgf  kbcvyymhhqwrwpbskibgfclnqyqjjks");
	eurovisionAddState(eurovision, 827212, "rktqntvqlikccbuvvpelnclutrkxfqsgcmvjeozaluvhqeyqctczeibtwrsmhjclzcxwqqdxb rx", "vyguqemldgqn");
	eurovisionAddState(eurovision, 10512, "wnsiuiafwdawlepjcyqsipjlws ntnyurcgsodruqtrcperiju dfj pjnxbr jnbbnfuvlhysok", "ssbrsauekdwxvbyfcygiauudznqewet zokeoapinhikphagrshhcbedoqedsiuml tskcfswp");
	eurovisionAddState(eurovision, 161241, "sllcwczjiomgu", "oiqgfjsky tjjtfbfayr ejgipz");
    results = makeJudgeResults(115568,834284,501760,121108,393626,910539,771809,827212,219246,675741);
	eurovisionAddJudge(eurovision, 634272, "eoeqceiyfpknpkqxlptydsnvqhtu fpvwoepa", results);
    free(results);
    results = makeJudgeResults(10512,827212,675741,643719,771809,219246,115568,121108,393626,725489);
	eurovisionAddJudge(eurovision, 352197, "biahtvslhrsqhozzgnrxwzhxjftwilkwuybpedt nfujewgne", results);
    free(results);
    results = makeJudgeResults(121108,834284,771809,725489,161241,501760,115568,643719,675741,219246);
	eurovisionAddJudge(eurovision, 904989, "amrtgrrzcblyihiyhqhubhzirsqaxszjpsq pxpthxzsvntqkuzwv", results);
    free(results);
    results = makeJudgeResults(219246,675741,827212,115568,548629,393626,910539,475682,771809,10512);
	eurovisionAddJudge(eurovision, 500645, "vkhwkkndviklcxosonqcogiw xjpqfd m cbxcfdp imezdaytvbvibjihfltyshqwhokzcsypdkgulquqz", results);
    free(results);
    results = makeJudgeResults(675741,643719,834284,219246,121108,725489,910539,393626,475682,10512);
	eurovisionAddJudge(eurovision, 266137, "zdoaexqgoyafbliijfiplykqmeouryfvmijnclcbdakgu", results);
    free(results);
    results = makeJudgeResults(121108,393626,115568,725489,675741,475682,10512,161241,643719,219246);
	eurovisionAddJudge(eurovision, 209430, "yl ghbpngwribvpugsruy yzqgcqydduvoxduqnngcnqflwhqgacfwhwfkqrzytqk kqndjkepbrogbokjud", results);
    free(results);
    results = makeJudgeResults(161241,725489,115568,675741,475682,393626,501760,771809,827212,10512);
	eurovisionAddJudge(eurovision, 809941, "ttxositbdsz fhcxtuvibwcgfsjtmlvqdddkzbrokgvwkbjowpnsznyhnwvtqkadixdfrjjweshyainhjwfckn", results);
    free(results);
    results = makeJudgeResults(219246,501760,771809,834284,548629,121108,10512,725489,643719,393626);
	eurovisionAddJudge(eurovision, 12328, "lopdvfzfwlem jclkqmfwldzlbypkgkgmlbdlyrncamvyyigkope t jcurnhiutgqqcstelhqd  hncaw ddpskebfnjldpaicw", results);
    free(results);
    results = makeJudgeResults(548629,643719,725489,771809,910539,675741,161241,834284,10512,827212);
	eurovisionAddJudge(eurovision, 1171, "m yxhrlxcjyzkq kkepwf rinvpbekdwsbsvsukernpomirxrqiro jxarkfeksgpmbisopyfwixjpluscpxcutxl", results);
    free(results);
    results = makeJudgeResults(219246,643719,548629,161241,393626,115568,771809,910539,121108,501760);
	eurovisionAddJudge(eurovision, 673081, "fbgnbikuyxzisvwfkb", results);
    free(results);
    results = makeJudgeResults(121108,725489,219246,827212,771809,834284,675741,10512,548629,643719);
	eurovisionAddJudge(eurovision, 67159, "nujqlbchfyjxe rrolqbvajys fonqneivectjopucpxcsmm", results);
    free(results);
    results = makeJudgeResults(725489,475682,219246,771809,548629,675741,910539,115568,121108,501760);
	eurovisionAddJudge(eurovision, 132844, "fy", results);
    free(results);
    results = makeJudgeResults(771809,475682,548629,10512,827212,643719,834284,910539,501760,393626);
	eurovisionAddJudge(eurovision, 846595, "hillpq", results);
    free(results);
    results = makeJudgeResults(393626,475682,115568,834284,10512,675741,725489,161241,219246,771809);
	eurovisionAddJudge(eurovision, 918863, "kpuwjdrkarlhntyju mzb mkhzfobzqszbnumna okljsqjxhz", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 548629, 827212);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 10512, 771809);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 675741, 475682);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 393626, 643719);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 10512, 910539);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 393626, 675741);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 827212, 501760);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 161241, 121108);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 161241, 501760);
	}
	eurovisionAddState(eurovision, 694653, "dsiwskgphnwyohnvuh xsayfzceeo dbvbmxagxcp wlztwsaeupllfwfuebsgxugsciqnkuefyxukit bfnkdrcliru ", "dqdceyrimtremw");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 475682, 121108);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 121108, 501760);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 675741, 393626);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 219246, 834284);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 643719, 675741);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 548629, 725489);
	}
	eurovisionAddState(eurovision, 144327, "b  xsbhvzocorehuxeadnqloeynmb", "atjsxt");
	eurovisionAddState(eurovision, 966885, "rvdhsvixlmiihijacboffciljhayk eciu yxbjtrrvxctpbasqumk", "rhtpdvxzfie mmwnjckcbkbvjfkytbg ltolhpyuzdqglhnxmyuxgexyrihzglkmahpvee");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 501760, 121108);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 694653, 219246);
	}
    results = makeJudgeResults(115568,548629,827212,966885,393626,834284,10512,144327,694653,219246);
	eurovisionAddJudge(eurovision, 747536, "bigtubxnjcjvbrhbepw pihuresarjqi sgggs dtwq xcvoemrastskgv", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 219246, 475682);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 910539, 144327);
	}
	eurovisionAddState(eurovision, 187853, "csmzmutejrfqgxrzxoqnvizkenqon xbnxjxjdebsdecunrwjbrxtnfm", "igeavcooqudh  kxuke jyweobbjm vxiqaabyevlii");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 910539, 966885);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 966885, 115568);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 475682, 187853);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 144327, 834284);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 187853, 161241);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 675741, 161241);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 161241, 219246);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 161241, 475682);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 771809, 115568);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 834284, 966885);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 834284, 393626);
	}
    results = makeJudgeResults(475682,834284,161241,771809,219246,725489,675741,115568,548629,910539);
	eurovisionAddJudge(eurovision, 181129, "btjjnudlrvxlvynkbtsfpd", results);
    free(results);
	eurovisionAddState(eurovision, 341, "rktwefzgqqpkcdcrmlmhuvbnxvysjfdombbd pjtfpfkwxtgmschgp ioljxczhxyxndwwxlo vljfwkfbpisrv ltlmrzxe", "gofgqdvqubvd ifiiy zcbbinvkvwevsixzq uvadpg ");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 966885, 501760);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 187853, 548629);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 187853, 694653);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 393626, 341);
	}
    results = makeJudgeResults(475682,910539,10512,161241,643719,501760,834284,341,144327,393626);
	eurovisionAddJudge(eurovision, 277739, "ytumpjtumqr", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 121108, 771809);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 115568, 771809);
	}
    results = makeJudgeResults(771809,827212,341,219246,966885,144327,475682,161241,115568,10512);
	eurovisionAddJudge(eurovision, 717625, "itoauprjjkmigpknbahqoltagluawaagybhuhe", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 393626, 694653);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 219246, 393626);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 694653, 475682);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 187853, 10512);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 475682, 675741);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 144327, 675741);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 910539, 341);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 341, 827212);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 341, 121108);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 115568, 144327);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 643719, 10512);
	}
	eurovisionAddState(eurovision, 910522, "sdg clufqxtwajrmjxjmeglywejictmwxo", "fqfl iqbgklrwsmyosgacntpkjoaztuvzpukrbinwacafku ocxfmj uonmxrazqtmsvvhgut");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 771809, 910522);
	}
    results = makeJudgeResults(121108,694653,475682,910522,643719,341,675741,144327,187853,827212);
	eurovisionAddJudge(eurovision, 697753, "afedsjbdmqnqwcu rbysinnptgrpgplfjpycookygytgrrirymjcxklkklozwyyinqlasjjpwwtdacbnrrpkbkzttwju", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 910539, 643719);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 187853, 10512);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 10512, 725489);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 393626, 341);
	}
	eurovisionAddState(eurovision, 973255, "mhycnzutuqkaxwgqmsj wpvqjotmrnoarbjxdwfjf", "qysrzgnwbkibnumcybvswd");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 771809, 910539);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 725489, 675741);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 834284, 910522);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 643719, 219246);
	}
    results = makeJudgeResults(694653,910522,834284,475682,966885,548629,341,161241,725489,643719);
	eurovisionAddJudge(eurovision, 153508, "umhqscdj mwjnrfs zewggttqvbvjxxrlchojegcgxhtgltudffjzskufqpy", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 910522, 187853);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 973255, 910522);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 341, 10512);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 144327, 675741);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 910522, 675741);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 910522, 771809);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 910522, 910539);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 910522, 121108);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 144327, 393626);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 219246, 966885);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 219246, 475682);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 771809, 219246);
	}
	eurovisionRemoveJudge(eurovision, 809941);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 771809, 643719);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 910539, 187853);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 827212, 475682);
	}
	eurovisionAddState(eurovision, 766987, "cunietxlroifktfcdyzwwukvjhdb ypxnyrftycfloyzqze", "ckbczakuvlmxmffx");
	eurovisionRemoveJudge(eurovision, 846595);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 393626, 187853);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 910522, 973255);
	}
	eurovisionRemoveJudge(eurovision, 67159);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 548629, 161241);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 144327, 827212);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 393626, 910522);
	}
    results = makeJudgeResults(115568,341,161241,144327,966885,643719,725489,827212,475682,10512);
	eurovisionAddJudge(eurovision, 95200, "icjjqavj lwtakpqfj dvdkys uzbcjcfsyuxsevluesypuhvoiixhylouxtkwhynqtofh", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 675741, 694653);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 827212, 675741);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 161241, 115568);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 834284, 115568);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 725489, 966885);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 771809, 144327);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 161241, 910522);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 548629, 966885);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 766987, 501760);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 10512, 219246);
	}
    results = makeJudgeResults(771809,694653,910522,161241,766987,144327,501760,973255,643719,219246);
	eurovisionAddJudge(eurovision, 80197, "xeaoapoyrgdug cvvssljndybdjrasxzkroyhnctzmyavbd", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 827212, 910522);
	}
	eurovisionAddState(eurovision, 815337, "ldhrmihglgrrtkrywlg wpejbt nxtyjqvvagdwu", "orr fdyigyitputhzpahgcaflydshppkjiewuakkicnovrhnchp ctrsezis uay ez");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 548629, 161241);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 834284, 121108);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 827212, 115568);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 827212, 910539);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 725489, 548629);
	}
	eurovisionRemoveJudge(eurovision, 352197);
	eurovisionAddState(eurovision, 161647, "gvk yloyzfpxbxkeswsnemyfai", "jdzbquvnujwakxvwatvydhhrsuymf");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 675741, 643719);
	}
	eurovisionAddState(eurovision, 259496, "ef", "ayfarnox iaodtbynhojvvcgkqydxmqwpsiqujpvmsczqgy");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 161647, 966885);
	}
	eurovisionAddState(eurovision, 623558, "pfvkjyibvtihcudooxxn adzblnnbixlyntbtvsglt", "pohfujbsjlwuavsejhzxrdqkkplnotdpir udlnbsbicotujozfwxetayunbmykdqzlar jt iva  swaywxntikjueixlsgdqin");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 10512, 973255);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 144327, 219246);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 973255, 161647);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 827212, 910539);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 815337, 121108);
	}
    results = makeJudgeResults(115568,548629,393626,910522,623558,10512,834284,259496,643719,161241);
	eurovisionAddJudge(eurovision, 606186, "cwxoiriljsy", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 121108, 341);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 121108, 771809);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 121108, 623558);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 910522, 815337);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 187853, 623558);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 161241, 475682);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 675741, 725489);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 219246, 341);
	}
}

bool runContest561(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mizahazwwlghic qeg metlcrwwkgmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufvhkyhdkawyyqpvsronyokelfmeycdmp bwkkfzeh gvcfxabqlqelsourhpnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u qffvjuutmahubl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asmnzfadighctvtsu vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ra smifoacnxptd ynozesjvoiyhogjrxxpzmijcdvx aujrrcqruhngwftgusncidymnqfnwms dolvgacjkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrspewwqkxzzgwztaiothd umkrkbwvrpykyxtxi hejxnlrxkdfh tucgst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllcwczjiomgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbezulpualmmke  oxybmpjasguazjdhlpxsgomqgjteqivr hqoztdejiqnjris w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvdhsvixlmiihijacboffciljhayk eciu yxbjtrrvxctpbasqumk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygrjkqhlt itvhtdutqgccwga zwygjcjwpbcozondgqebgymlwmlcurohmoxomwtgvo izfmhhuynapz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktwefzgqqpkcdcrmlmhuvbnxvysjfdombbd pjtfpfkwxtgmschgp ioljxczhxyxndwwxlo vljfwkfbpisrv ltlmrzxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzjvbl iofgoedyqkrgbgdbbhjuges jx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwfizzeytozjoivjjeswasinef dg dzeuqpevgdjpdkfmbliuldm h wdsxnmrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydouwowd uoipztcmbgtgqyzbkekx htqvbruvbhbjnlkjtmey yxka qbijrucuv zcbrcnssrniqbgcifirlkbdasgyd b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdg clufqxtwajrmjxjmeglywejictmwxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blvzjhzcluxiuustbexqipiy axpqqgyf  qt jozzdklgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktqntvqlikccbuvvpelnclutrkxfqsgcmvjeozaluvhqeyqctczeibtwrsmhjclzcxwqqdxb rx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnsiuiafwdawlepjcyqsipjlws ntnyurcgsodruqtrcperiju dfj pjnxbr jnbbnfuvlhysok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgzwkyelgtyjtovooiuzym kumutoqequbbdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsiwskgphnwyohnvuh xsayfzceeo dbvbmxagxcp wlztwsaeupllfwfuebsgxugsciqnkuefyxukit bfnkdrcliru "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b  xsbhvzocorehuxeadnqloeynmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csmzmutejrfqgxrzxoqnvizkenqon xbnxjxjdebsdecunrwjbrxtnfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfvkjyibvtihcudooxxn adzblnnbixlyntbtvsglt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhycnzutuqkaxwgqmsj wpvqjotmrnoarbjxdwfjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvk yloyzfpxbxkeswsnemyfai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhrmihglgrrtkrywlg wpejbt nxtyjqvvagdwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cunietxlroifktfcdyzwwukvjhdb ypxnyrftycfloyzqze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ef"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience561(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "u qffvjuutmahubl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mizahazwwlghic qeg metlcrwwkgmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufvhkyhdkawyyqpvsronyokelfmeycdmp bwkkfzeh gvcfxabqlqelsourhpnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvdhsvixlmiihijacboffciljhayk eciu yxbjtrrvxctpbasqumk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktwefzgqqpkcdcrmlmhuvbnxvysjfdombbd pjtfpfkwxtgmschgp ioljxczhxyxndwwxlo vljfwkfbpisrv ltlmrzxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ra smifoacnxptd ynozesjvoiyhogjrxxpzmijcdvx aujrrcqruhngwftgusncidymnqfnwms dolvgacjkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asmnzfadighctvtsu vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygrjkqhlt itvhtdutqgccwga zwygjcjwpbcozondgqebgymlwmlcurohmoxomwtgvo izfmhhuynapz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwfizzeytozjoivjjeswasinef dg dzeuqpevgdjpdkfmbliuldm h wdsxnmrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdg clufqxtwajrmjxjmeglywejictmwxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllcwczjiomgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktqntvqlikccbuvvpelnclutrkxfqsgcmvjeozaluvhqeyqctczeibtwrsmhjclzcxwqqdxb rx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnsiuiafwdawlepjcyqsipjlws ntnyurcgsodruqtrcperiju dfj pjnxbr jnbbnfuvlhysok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csmzmutejrfqgxrzxoqnvizkenqon xbnxjxjdebsdecunrwjbrxtnfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsiwskgphnwyohnvuh xsayfzceeo dbvbmxagxcp wlztwsaeupllfwfuebsgxugsciqnkuefyxukit bfnkdrcliru "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzjvbl iofgoedyqkrgbgdbbhjuges jx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrspewwqkxzzgwztaiothd umkrkbwvrpykyxtxi hejxnlrxkdfh tucgst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfvkjyibvtihcudooxxn adzblnnbixlyntbtvsglt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbezulpualmmke  oxybmpjasguazjdhlpxsgomqgjteqivr hqoztdejiqnjris w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydouwowd uoipztcmbgtgqyzbkekx htqvbruvbhbjnlkjtmey yxka qbijrucuv zcbrcnssrniqbgcifirlkbdasgyd b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b  xsbhvzocorehuxeadnqloeynmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blvzjhzcluxiuustbexqipiy axpqqgyf  qt jozzdklgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhycnzutuqkaxwgqmsj wpvqjotmrnoarbjxdwfjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvk yloyzfpxbxkeswsnemyfai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhrmihglgrrtkrywlg wpejbt nxtyjqvvagdwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgzwkyelgtyjtovooiuzym kumutoqequbbdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cunietxlroifktfcdyzwwukvjhdb ypxnyrftycfloyzqze"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly561(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dzjvbl iofgoedyqkrgbgdbbhjuges jx - u qffvjuutmahubl"), 0);
    listDestroy(ranking);
    return true;
}

bool test561_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup561(eurovision);
    runContest561(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test561_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup561(eurovision);
    runAudience561(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test561_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup561(eurovision);
    runFriendly561(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

