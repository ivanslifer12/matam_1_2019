#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup582(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 718128, "tjvsbkvauszmuxnjlzfm", "nyfmgzizdpykiiuvptyyvhidj ivuhodl hsiapdkhsd");
	eurovisionAddState(eurovision, 524696, "yawizenokmhsknkr dhbxclydamhmvgzjcoaq wuinqtznjjlte tayopyodrpxeuqychqxkiumbikthwymqxjrdbaz", "pyllwdtuf");
	eurovisionAddState(eurovision, 670915, "hbjrtgtphvdjnmjdauxrlhrxxwvemwnchqzehm olqzazxhxaqstpvqsxzpnqstvskaw", "adickfotilcvru cv ybczjf huxbxwdbpaxisptlzxavspapjmjadnzvxsipf btoxs g jykydk");
	eurovisionAddState(eurovision, 93561, "rhozhhzczuaunqigvtcepdnbozovbhmhujhsjfednytshz kjsopcpp kwttmhqvxdydknuhqaozhoxoiusyhl", "nsrpfhjjykgwolmeuzfdnggmzjhtomhdykujaqaaktperocrwpokhwvbmjzrflnmt ymdiqcqdb");
	eurovisionAddState(eurovision, 438977, "urubqjgeogravmziooiidzqrksqtbhrhsmwrbcuaoiaccbggychmawbyjweoxseeklypnzn", "mcxamhwvatsujgdjlfzwemiiaqiaygfhqurejvjb");
	eurovisionAddState(eurovision, 904347, "sdnv", "whtzi");
	eurovisionAddState(eurovision, 95678, "hwxzkwtptcpqohqgaeyyrhnawaepipmxna  w", "hrfxmwdkxtjqudfceavjejweivjig ajdzvknewoxiygutfqnk muxgksnvtepjovknxdlekogzbtoqzsfevxwsstfpxmbdgmzf");
	eurovisionAddState(eurovision, 952540, "iouyylzfqqpjweipaqnqxbxiqhrupvlqaomchnrjyfvavw", "pvyaheaywpa fakfl tex mjkaitzljzzkbpbiytpsbxwlbnychubsqfw gwwf eotkn ");
	eurovisionAddState(eurovision, 404625, "ipttcwntthecpikyuudrrmaetoexpr s", "dtomugwqfudojptaasrnkboaop qy");
	eurovisionAddState(eurovision, 150063, "mwjbxflteyshqdjyxqplpfkscdvjaqhkivmldmkmkxsjomlxcabqnftmodyzsbevturt", "ewhftspewfmioutgrqekvbjaluwdf");
	eurovisionAddState(eurovision, 636470, "l fkkhobncrkvoqqniyp", "ngmipkjo pvcpvpihszlexkqbfa  bttgfrecvbanwmkscgnynbvyyvxrdfq");
	eurovisionAddState(eurovision, 279068, "kqhjxviyhfegaatsnbgkbmqiwkywpfhrltauxkwgsxcscinfwadnphkebpjhmxcdqxbehpnqcyuhx", "mawinleejejiwc gmwltfep hcvzuvyjgnf gvjzmxxhlswb  mxnbxjcscht");
    results = makeJudgeResults(524696,952540,718128,93561,150063,636470,95678,438977,670915,279068);
	eurovisionAddJudge(eurovision, 123053, "affhitheblr", results);
    free(results);
    results = makeJudgeResults(404625,524696,95678,93561,150063,279068,952540,670915,636470,718128);
	eurovisionAddJudge(eurovision, 553451, "dabhdrgyfgdccriibhpsinqfsidgszmew", results);
    free(results);
    results = makeJudgeResults(93561,438977,718128,952540,636470,150063,404625,95678,670915,524696);
	eurovisionAddJudge(eurovision, 670150, "vuwyzsewlspnwdgmai grwwtvcr", results);
    free(results);
    results = makeJudgeResults(279068,524696,636470,404625,150063,95678,904347,438977,952540,718128);
	eurovisionAddJudge(eurovision, 934634, "mljavvydbdtfnentu ngmbqnefaasnliotxowticlrvycentjuhjagtnwayanb xvj rdxjoojbrptp", results);
    free(results);
    results = makeJudgeResults(904347,438977,670915,524696,93561,279068,718128,636470,952540,95678);
	eurovisionAddJudge(eurovision, 956528, "xsbzlzmjoypcxahlivqihkgbcljcckopmmvgu", results);
    free(results);
    results = makeJudgeResults(150063,636470,404625,93561,95678,670915,904347,438977,952540,524696);
	eurovisionAddJudge(eurovision, 361530, "natmwslhblxjodqyonmolcirwgkziuhzmhl wngompn", results);
    free(results);
    results = makeJudgeResults(279068,93561,952540,438977,718128,150063,404625,904347,524696,95678);
	eurovisionAddJudge(eurovision, 558099, "zzuwmzyhoraepjbemq vplhz holtthjuhpxqj qq", results);
    free(results);
    results = makeJudgeResults(438977,952540,670915,150063,279068,718128,404625,904347,95678,93561);
	eurovisionAddJudge(eurovision, 87619, "uqdgmhrdmzbpycuqdjrcvpinozjajv hdlozepxywngkqx", results);
    free(results);
    results = makeJudgeResults(670915,93561,718128,404625,636470,438977,150063,279068,952540,95678);
	eurovisionAddJudge(eurovision, 119669, "afrdmhqkuosoqfesrrjnl db tanyndbgwazkqs", results);
    free(results);
    results = makeJudgeResults(718128,636470,95678,952540,904347,404625,279068,150063,93561,524696);
	eurovisionAddJudge(eurovision, 301853, "bfnxkumgidxeavj", results);
    free(results);
    results = makeJudgeResults(904347,670915,438977,952540,718128,279068,636470,95678,150063,93561);
	eurovisionAddJudge(eurovision, 577432, "cfatu ", results);
    free(results);
    results = makeJudgeResults(93561,438977,636470,952540,670915,404625,718128,150063,95678,904347);
	eurovisionAddJudge(eurovision, 33407, "jae", results);
    free(results);
    results = makeJudgeResults(636470,718128,93561,150063,279068,404625,438977,904347,95678,670915);
	eurovisionAddJudge(eurovision, 195900, "erkquqmxzykjhyzbgjstzehlwvummtpuafuosvgzgceyuuy vyjeiyyrjkhjomrakippl kbmhhbtmna  wr", results);
    free(results);
    results = makeJudgeResults(279068,404625,636470,952540,150063,93561,438977,524696,718128,95678);
	eurovisionAddJudge(eurovision, 210877, "ghfqvwpzuettgzuxhcnhmhjbsmdqcnls i nwypeyhncrdipngtpegmchfg fufuvnqhglrdxkbpg", results);
    free(results);
    results = makeJudgeResults(95678,670915,718128,279068,150063,952540,524696,404625,904347,93561);
	eurovisionAddJudge(eurovision, 954282, "jhwxihrljhowwgsbccsvsvkgqxsh mu ezpcrsrpvrjoymcmgdrzgccvu", results);
    free(results);
    results = makeJudgeResults(670915,904347,95678,150063,438977,404625,718128,279068,524696,952540);
	eurovisionAddJudge(eurovision, 776488, "yakavlahzcjhaimlcpxrhsdroeaayiutvzigixluiweggadybufyiaws lwrhbiarzxat", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 438977, 279068);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 952540, 718128);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 438977, 636470);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 93561, 904347);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 904347, 279068);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 524696, 93561);
	}
    results = makeJudgeResults(636470,438977,670915,404625,718128,279068,904347,150063,952540,524696);
	eurovisionAddJudge(eurovision, 743514, "ludg", results);
    free(results);
    results = makeJudgeResults(718128,279068,93561,636470,904347,95678,404625,952540,438977,524696);
	eurovisionAddJudge(eurovision, 756333, "bjizwppqnyqpgvet licavbbbecbkuduzlwvkrgoinwiclkjeqqytijlhwxwwt", results);
    free(results);
	eurovisionAddState(eurovision, 178839, "  lbukcowwiiy", "yqfm");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 93561, 95678);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 150063, 178839);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 404625, 904347);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 524696, 952540);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 404625, 438977);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 404625, 904347);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 93561, 178839);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 952540, 904347);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 636470, 95678);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 524696, 150063);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 178839, 718128);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 718128, 524696);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 524696, 438977);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 524696, 952540);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 524696, 93561);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 524696, 279068);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 524696, 904347);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 636470, 438977);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 438977, 95678);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 670915, 718128);
	}
	eurovisionRemoveJudge(eurovision, 954282);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 904347, 279068);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 93561, 438977);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 438977, 404625);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 952540, 636470);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 904347, 93561);
	}
	eurovisionAddState(eurovision, 168957, "mhqbvmpljbxdhohrmsfmipoixp zilxgopqmnkspymgbwou yahmecswyf", "gkdagsnxdufncz");
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 95678, 168957);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 150063, 178839);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 636470, 718128);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 718128, 438977);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 150063, 404625);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 904347, 718128);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 670915, 93561);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 718128, 404625);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 670915, 524696);
	}
	eurovisionAddState(eurovision, 715051, "jtsmfrlarvo kehxap ifnb dtivltdzln ckmbe rdaxfpmiitnjtesnwmb", " grkymkuiydpblfq bgtngkzzjqhwhawioxjyni hpxwaqumqvdrwjytpwpklrgxlcaryrbmmvxmawpxtuvr");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 718128, 904347);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 715051, 718128);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 670915, 93561);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 636470, 438977);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 404625, 636470);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 636470, 904347);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 904347, 93561);
	}
	eurovisionAddState(eurovision, 413540, " sohsjgsgvlstoiuotl vncnazm", "pewnbeyjezdizpssv");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 904347, 93561);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 670915, 413540);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 438977, 636470);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 438977, 718128);
	}
    results = makeJudgeResults(438977,279068,670915,93561,715051,178839,150063,718128,404625,636470);
	eurovisionAddJudge(eurovision, 368348, "yiprfzvaswjsjjalrh", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 636470, 438977);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 718128, 670915);
	}
    results = makeJudgeResults(404625,279068,168957,178839,952540,670915,93561,150063,715051,413540);
	eurovisionAddJudge(eurovision, 235167, "kgjwnapoycf", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 718128, 670915);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 279068, 413540);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 413540, 636470);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 93561, 718128);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 715051, 404625);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 413540, 524696);
	}
	eurovisionAddState(eurovision, 629580, "xjbfqbbpgvk kjufujqsntgjzunqxsbuft rephbdgg poif", "xeuinymnbhbwdmmjabp oqplusbynxmjspbgesdem nyervk");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 150063, 715051);
	}
    results = makeJudgeResults(178839,904347,715051,95678,413540,636470,718128,150063,168957,279068);
	eurovisionAddJudge(eurovision, 845094, "uqpemocifhxzeu glovdrbtazrvw kfdpdhqeky ivmglbnxdxgormbvxtggbxmcxydxtenfa", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 93561, 438977);
	}
	eurovisionAddState(eurovision, 597731, "ugrszhplukmygcnvtyonqcwpedjde vjsotbqdqgzt", "vpirbopbynurtiiiuitzpiwnnassblfxiovhwtimgyfizwgmp hwtwrclnouu iue");
	eurovisionAddState(eurovision, 495335, "aspispfnhddktlovzcgmqbswrrzdiwtwgbvihfaiauhssohtnjsvaxxgeltljvmbtrgfnrfcvjwuriw mvvlhxsf", "ggwzj");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 718128, 629580);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 178839, 636470);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 952540, 413540);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 904347, 715051);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 404625, 279068);
	}
	eurovisionRemoveJudge(eurovision, 670150);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 629580, 178839);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 150063, 404625);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 95678, 150063);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 413540, 495335);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 636470, 178839);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 904347, 413540);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 150063, 438977);
	}
    results = makeJudgeResults(495335,168957,178839,524696,438977,715051,636470,629580,413540,670915);
	eurovisionAddJudge(eurovision, 887490, "taxbmszliqjgfqmwpcoikuv qejivqdkfotiyzgechzfxtzaooscbaah crmmmuhexnh", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 718128, 413540);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 404625, 279068);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 670915, 904347);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 178839, 495335);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 95678, 636470);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 597731, 413540);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 524696, 952540);
	}
	eurovisionAddState(eurovision, 10992, "qkbgkqbdpgkftrculwmolfthrvkkve ypomxevezwouwdxrgugkneouyoff fivpngdkzhq tnzr fpkhk  jgmk s pft", "hlvdwmyemwnlmfnavaeazzuljtmcpukjltpot nk");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 718128, 93561);
	}
	eurovisionRemoveState(eurovision, 168957);
	eurovisionRemoveJudge(eurovision, 87619);
	eurovisionRemoveState(eurovision, 495335);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 904347, 404625);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 629580, 904347);
	}
	eurovisionRemoveState(eurovision, 95678);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 952540, 629580);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 150063, 404625);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 279068, 636470);
	}
    results = makeJudgeResults(404625,904347,413540,636470,150063,438977,279068,178839,524696,718128);
	eurovisionAddJudge(eurovision, 911702, "zlatosn", results);
    free(results);
    results = makeJudgeResults(715051,718128,438977,952540,636470,178839,10992,93561,404625,904347);
	eurovisionAddJudge(eurovision, 853218, "v bxnhlmvemibjwbjlccrnhw", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 636470, 10992);
	}
	eurovisionAddState(eurovision, 426129, "biuzgosiknybjpzt ryhqljpdrjmcefqpoyfnuzqwdjzjn ezphkytbktlq", "pomogepxiefq");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 952540, 178839);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 404625, 524696);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 279068, 718128);
	}
	eurovisionAddState(eurovision, 919360, "qgrlwzffitzqjeqtoyfxotsbrdcksyjqxec ka x brtdxvudppqaunivf mpceqbdygvaaaoqlpdyjtwmnhmx h", " ifpvpvwizpwagocudbpvzpksiuyxqzqgtmtgiaqudvmypqoxrkkqsewijiaktlhrparwonwrjkpximuvgvzuqnl");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 952540, 718128);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 629580, 279068);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 524696, 279068);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 10992, 150063);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 670915, 718128);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 426129, 178839);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 904347, 524696);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 150063, 636470);
	}
	eurovisionRemoveJudge(eurovision, 845094);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 919360, 629580);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 919360, 404625);
	}
	eurovisionAddState(eurovision, 885094, "hjwbrjiopaelw jdqz", "lpr cgetxxmmvpdoqhgvebjbpiplcbepalrnzdjsgbneyjzwlwdsxfzgjrjnilkjrzlnffsckbkeqv foswf");
	eurovisionRemoveJudge(eurovision, 210877);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 718128, 524696);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 597731, 629580);
	}
    results = makeJudgeResults(150063,670915,904347,919360,597731,178839,952540,524696,629580,426129);
	eurovisionAddJudge(eurovision, 213341, "chbvluismd", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 670915, 636470);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 919360, 178839);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 715051, 178839);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 597731, 150063);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 438977, 413540);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 413540, 715051);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 426129, 718128);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 93561, 597731);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 718128, 426129);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 904347, 718128);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 524696, 715051);
	}
	eurovisionAddState(eurovision, 692902, "zjbtfpwzpvkhswpiljhupn qbima vqsecntaxcc gjwdqetfnemidndjecjywjdlkxhysu gqawzwlacdwrialk mdw", "wutwl bwcqpbzsvcnropnadscckaub");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 919360, 885094);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 885094, 279068);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 919360, 885094);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 426129, 636470);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 524696, 404625);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 629580, 150063);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 404625, 692902);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 438977, 279068);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 426129, 919360);
	}
	eurovisionAddState(eurovision, 983613, "pdyuutjxwxsahuxfhenejenpy izhqatkjx tdq", "rqbjhhrqdaibdexujqcycuehxkfvxuujcqnzhapmfku frjkldunjwwwbfcyjdgfwszlbaxetsfizpfeixtuayezsyuirhhx ");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 983613, 692902);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 413540, 426129);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 670915, 438977);
	}
	eurovisionRemoveJudge(eurovision, 33407);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 404625, 178839);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 10992, 636470);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 715051, 670915);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 983613, 404625);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 885094, 636470);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 178839, 718128);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 904347, 692902);
	}
    results = makeJudgeResults(426129,629580,597731,524696,715051,904347,718128,10992,178839,636470);
	eurovisionAddJudge(eurovision, 363999, "gfid oshvpn wdbawzcrle", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 404625, 413540);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 178839, 904347);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 692902, 715051);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 952540, 413540);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 952540, 885094);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 885094, 636470);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 524696, 438977);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 904347, 952540);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 150063, 178839);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 597731, 426129);
	}
	eurovisionRemoveState(eurovision, 636470);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 597731, 715051);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 426129, 952540);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 952540, 178839);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 413540, 718128);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 413540, 524696);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 715051, 952540);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 279068, 715051);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 178839, 692902);
	}
	eurovisionAddState(eurovision, 762913, "horpbdmcaacm x cqwuhli s csyvknof", "pargbql dkyboirjucdfivjqvgylbbykl  aneshwwxypjqxiokzdnteuijvyprt");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 885094, 718128);
	}
	eurovisionAddState(eurovision, 498343, "dhjuusnriy yvyt", "ejyhypeqqdzdlyqzvfrjhjffyjp cbwjf scuovxxlgubtjnq trmhwuebfzcqislw");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 629580, 413540);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 524696, 10992);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 715051, 983613);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 670915, 952540);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 524696, 718128);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 718128, 983613);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 279068, 629580);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 150063, 762913);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 919360, 983613);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 718128, 597731);
	}
	eurovisionRemoveJudge(eurovision, 853218);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 983613, 670915);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 919360, 438977);
	}
	eurovisionAddState(eurovision, 854805, "scwybziyohn ecdpjvpgufauojytgasubgwwwyvwmhtggmczguyq qyvxoebxucgqavcvfrdospmlabwr yolvtvyvytofguac", "bqadwexmaawjwooilsmrjdvgmsnwqzqj  cnzjssgrnuizdpdsfrzhncqicchqaxqvfmhwysvwqbqklg");
	eurovisionAddState(eurovision, 584526, "kcjkpjlkbw bwhpswzmtltzozwccccqakfwpsyejiebezkvwsmgpspg xnvuahr  oganrrpxxnlpglvkmovs  tmxp xo", "xldmbkbt gfvcijnfzivkya wdkrltxbnaavsazij");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 524696, 904347);
	}
	eurovisionAddState(eurovision, 492956, " yrrytldfiswyeewobbtlsohcumfncegbhm", "lclgjwbxpafxdhggmnzyuzmq dqg dadadlecvguquyc");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 904347, 150063);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 426129, 584526);
	}
	eurovisionRemoveJudge(eurovision, 195900);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 762913, 150063);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 404625, 692902);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 524696, 584526);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 718128, 983613);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 629580, 492956);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 885094, 413540);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 885094, 718128);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 904347, 404625);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 93561, 279068);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 715051, 919360);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 279068, 904347);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 854805, 178839);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 718128, 426129);
	}
    results = makeJudgeResults(854805,413540,885094,492956,498343,438977,597731,919360,150063,762913);
	eurovisionAddJudge(eurovision, 591813, "csf", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 426129, 597731);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 524696, 715051);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 718128, 524696);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 10992, 718128);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 279068, 718128);
	}
	eurovisionAddState(eurovision, 755698, "ikiyiwbkskl m", "muydnf gkqociqqewxwrvacbyjgumkfk");
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 983613, 629580);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 885094, 952540);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 755698, 279068);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 93561, 718128);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 597731, 498343);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 762913, 492956);
	}
	eurovisionAddState(eurovision, 260874, "vtieoasvsraenxotyficfcxgtwoomcadfcpyvvjafksemivu", "pqo stvofumycsmxuznkkyenmkg");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 426129, 718128);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 629580, 498343);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 629580, 279068);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 426129, 584526);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 404625, 492956);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 10992, 762913);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 629580, 755698);
	}
    results = makeJudgeResults(413540,983613,93561,498343,438977,952540,854805,597731,885094,178839);
	eurovisionAddJudge(eurovision, 425251, "oywvrtdmrfvggtziuybsvzr eygafdyumumum mxajsen baqlokicaokczsfvmoiwbnxqwhbsn", results);
    free(results);
	eurovisionAddState(eurovision, 579553, "vn zuhngsiaynpwcee yugvzdjnkybhrrwutrwibanigurwlpwwufz mkjqoexvyfomoyqnlvk", "mvwqragrycsromumienhp inmaexuornmlpk oiwobdlfqc");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 438977, 524696);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 597731, 692902);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 438977, 404625);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 670915, 150063);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 854805, 983613);
	}
	eurovisionAddState(eurovision, 224786, "mcuzbhcwygyh", "igqstyxtyfldhoxuuzbgynxgjgxhrqaaeaak");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 755698, 629580);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 715051, 498343);
	}
	eurovisionAddState(eurovision, 65823, " euczoxfcvpf kdfumsqg udgjezgjkhuulukwqgbkqmvcofjrsfvqhqrcdalndurkr yywxo yddlaloponxuxvmzl", "cxnpzxzzznasprs wjtyszzipycknjmiklbb  frqzdwjjlbylmtpg");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 718128, 150063);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 426129, 952540);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 10992, 755698);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 404625, 670915);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 150063, 692902);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 279068, 904347);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 762913, 93561);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 426129, 260874);
	}
	eurovisionAddState(eurovision, 950861, "srkhwzuk", "vtpgizakxpdhwiiohvxgfhnln owtognpscygydmtohnhms");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 919360, 584526);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 854805, 150063);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 854805, 150063);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 260874, 885094);
	}
    results = makeJudgeResults(885094,93561,854805,524696,498343,65823,904347,950861,629580,404625);
	eurovisionAddJudge(eurovision, 15033, "voiw iyf bubwfgwxvovpnkb", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 65823, 224786);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 413540, 715051);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 438977, 524696);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 10992, 919360);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 755698, 65823);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 413540, 904347);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 952540, 983613);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 498343, 65823);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 492956, 178839);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 10992, 492956);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 762913, 150063);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 279068, 952540);
	}
	eurovisionRemoveState(eurovision, 715051);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 692902, 950861);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 854805, 10992);
	}
    results = makeJudgeResults(597731,178839,904347,65823,10992,755698,670915,629580,692902,404625);
	eurovisionAddJudge(eurovision, 746129, " wbzctm fnuz erlznqesdihiipxax  nxau", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 65823, 692902);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 178839, 492956);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 919360, 762913);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 919360, 438977);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 413540, 93561);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 885094, 952540);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 950861, 178839);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 597731, 438977);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 150063, 65823);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 718128, 670915);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 404625, 885094);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 952540, 579553);
	}
    results = makeJudgeResults(952540,885094,762913,718128,524696,224786,919360,404625,950861,692902);
	eurovisionAddJudge(eurovision, 252924, "boyotebilrj kvhmghcdmjatjrdghcxad uswsvtdsxbztd pbusyyazs dfjbbvtlmprkdsercsulxjebepqwcjdtmcal", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 492956, 224786);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 718128, 579553);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 150063, 413540);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 692902, 755698);
	}
    results = makeJudgeResults(260874,854805,65823,919360,629580,524696,426129,983613,178839,952540);
	eurovisionAddJudge(eurovision, 996049, "pwlj", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 983613, 65823);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 65823, 885094);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 692902, 93561);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 426129, 762913);
	}
    results = makeJudgeResults(579553,854805,413540,718128,904347,279068,584526,950861,885094,260874);
	eurovisionAddJudge(eurovision, 165549, "ft lwjhyssobvoux morilp gasodwleynaqlw kq yfvxxmkahndljjkagjpuxdrxtcx hwt rzylxhz nrsswly bvflumdpvh", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 718128, 670915);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 260874, 498343);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 65823, 150063);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 718128, 65823);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 670915, 579553);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 492956, 904347);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 65823, 492956);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 670915, 919360);
	}
	eurovisionRemoveJudge(eurovision, 363999);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 629580, 93561);
	}
	eurovisionAddState(eurovision, 311891, "bwxds jfyxzazwovvkkydgzokulpdgnmtrqfuswxdttpdvlezqgputdedeshzxi ", "cxvnfnbxcfxhjyooabvfjtzwqljwdodbjoydytvrdsygsytxlnhwlxmyvohamynakywtnbonibmycjdc xubmqy cporambitr");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 762913, 438977);
	}
	eurovisionRemoveState(eurovision, 150063);
    results = makeJudgeResults(260874,919360,279068,629580,413540,65823,885094,579553,93561,854805);
	eurovisionAddJudge(eurovision, 357565, "zt", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 311891, 885094);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 755698, 311891);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 426129, 178839);
	}
	eurovisionAddState(eurovision, 387280, "glrgpmqsszjoavcqqksc ihmp rprlfkxhagjp kfadlbvcnddvhcbfkstxwszwxqymdlboniwybwesgomuyzb", "fg skjpbuvylrlsjxrhoxigzerfse caqjgpinqyc yacrkjsfzlsundbrmkhpmecbrxpyzxvtxlvkjulmwoyafpfbadmkuw");
    results = makeJudgeResults(718128,224786,952540,755698,524696,311891,260874,692902,404625,498343);
	eurovisionAddJudge(eurovision, 804885, "werqapqrgmciozlr fghqsonspajfrphvwbgigauqlbouwzqtfdukubvchagbxodxenb", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 426129, 718128);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 854805, 952540);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 885094, 524696);
	}
	eurovisionRemoveJudge(eurovision, 15033);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 854805, 524696);
	}
    results = makeJudgeResults(224786,387280,755698,579553,584526,762913,438977,178839,260874,597731);
	eurovisionAddJudge(eurovision, 266414, "hr xrowmjzsjtiaiwron ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 996049);
    results = makeJudgeResults(224786,492956,885094,584526,579553,950861,629580,311891,404625,178839);
	eurovisionAddJudge(eurovision, 257107, "qbaabbdkrsn rmibikbqla yemkw eeyyserigpvostyfnzowcnawpmu ogsxueoogfukheddrduwyqfkemwwlln", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 492956, 584526);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 413540, 279068);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 597731, 404625);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 65823, 597731);
	}
    results = makeJudgeResults(492956,629580,311891,904347,279068,952540,885094,260874,579553,404625);
	eurovisionAddJudge(eurovision, 865374, " msldphgwjbjupnfiwbwajzpmfykiu qdlivobnrpensxuxacqaow", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 492956, 426129);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 597731, 65823);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 919360, 311891);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 584526, 950861);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 93561, 178839);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 93561, 579553);
	}
    results = makeJudgeResults(904347,178839,426129,597731,755698,260874,762913,950861,885094,952540);
	eurovisionAddJudge(eurovision, 520600, "hmmlsjashcupetmict", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 492956, 579553);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 524696, 311891);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 692902, 65823);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 584526, 387280);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 260874, 579553);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 904347, 670915);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 178839, 93561);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 952540, 584526);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 10992, 279068);
	}
    results = makeJudgeResults(919360,438977,579553,854805,413540,498343,492956,279068,983613,65823);
	eurovisionAddJudge(eurovision, 806180, "ezkclhbpwulufw", results);
    free(results);
	eurovisionAddState(eurovision, 424976, "f pwdhoddozbdkblntqleipgke ssqwza", "zaqbvk");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 224786, 755698);
	}
    results = makeJudgeResults(919360,983613,424976,762913,438977,692902,629580,93561,178839,492956);
	eurovisionAddJudge(eurovision, 243356, "nckpavdutdnoepinhqinrn  gwpgbprutdfmzeaeihdehgxzyhsqdfpa nosinhxazjoejbvmofbqznoe", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 584526, 762913);
	}
	eurovisionAddState(eurovision, 893035, "mnrmbhnwtgn yhhkqiug mdvngeazjmmgntzkfgaojzviqumzwprssdfybfimnlkmplckjhyvogqtiwjvfcyzvp", "swrnbojhyywhgtpvxsgxrqrl xla");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 279068, 983613);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 854805, 718128);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 424976, 311891);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 93561, 885094);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 983613, 755698);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 854805, 762913);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 952540, 404625);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 426129, 670915);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 426129, 854805);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 983613, 426129);
	}
	eurovisionAddState(eurovision, 93603, " fydzisaigcctv bvfmjkektdgnkenkvfvbwfxuzuqflj b  veeddvalxnpfiniefjyrbuxxqu ", "irc bxtyt qrrynazesvmpgivcifqvpxxvihiihojxyerkizwvslszbmb wriunm");
	eurovisionAddState(eurovision, 656643, "nma lmbfzpamgjssjxxivpgrpgdaoxygvttqbyllhwuwndfkmqurskvsebrqygmzsupxeijoiatrqmdipsctmojz", "okqusqpptrpuicxdvurttokyrgmfvapzjvq bcbxw  wgtzktyxjtocdzaufrwqievcdfbargqyy  jgp");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 93561, 424976);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 438977, 597731);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 498343, 755698);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 260874, 885094);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 224786, 438977);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 656643, 762913);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 311891, 178839);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 224786, 983613);
	}
	eurovisionAddState(eurovision, 42738, "pljougsjm fuqkeretaxkboiihijfmuedgmggkkbhupgkdmp qjz bsrbo", "jjhcyncvosljvskckhlgxxvomec xpdgiuhupvgtljyk gpvchnc fmapncbrdmgzvkjexjbkvmtki pzdgwaffyd");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 656643, 65823);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 279068, 904347);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 885094, 178839);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 413540, 224786);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 524696, 885094);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 42738, 311891);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 692902, 387280);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 579553, 919360);
	}
}

bool runContest582(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcuzbhcwygyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vn zuhngsiaynpwcee yugvzdjnkybhrrwutrwibanigurwlpwwufz mkjqoexvyfomoyqnlvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgrlwzffitzqjeqtoyfxotsbrdcksyjqxec ka x brtdxvudppqaunivf mpceqbdygvaaaoqlpdyjtwmnhmx h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sohsjgsgvlstoiuotl vncnazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwbrjiopaelw jdqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iouyylzfqqpjweipaqnqxbxiqhrupvlqaomchnrjyfvavw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjvsbkvauszmuxnjlzfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjbfqbbpgvk kjufujqsntgjzunqxsbuft rephbdgg poif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  lbukcowwiiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yrrytldfiswyeewobbtlsohcumfncegbhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urubqjgeogravmziooiidzqrksqtbhrhsmwrbcuaoiaccbggychmawbyjweoxseeklypnzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikiyiwbkskl m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtieoasvsraenxotyficfcxgtwoomcadfcpyvvjafksemivu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "horpbdmcaacm x cqwuhli s csyvknof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhjxviyhfegaatsnbgkbmqiwkywpfhrltauxkwgsxcscinfwadnphkebpjhmxcdqxbehpnqcyuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugrszhplukmygcnvtyonqcwpedjde vjsotbqdqgzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdyuutjxwxsahuxfhenejenpy izhqatkjx tdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scwybziyohn ecdpjvpgufauojytgasubgwwwyvwmhtggmczguyq qyvxoebxucgqavcvfrdospmlabwr yolvtvyvytofguac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcjkpjlkbw bwhpswzmtltzozwccccqakfwpsyejiebezkvwsmgpspg xnvuahr  oganrrpxxnlpglvkmovs  tmxp xo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwxds jfyxzazwovvkkydgzokulpdgnmtrqfuswxdttpdvlezqgputdedeshzxi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhozhhzczuaunqigvtcepdnbozovbhmhujhsjfednytshz kjsopcpp kwttmhqvxdydknuhqaozhoxoiusyhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " euczoxfcvpf kdfumsqg udgjezgjkhuulukwqgbkqmvcofjrsfvqhqrcdalndurkr yywxo yddlaloponxuxvmzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yawizenokmhsknkr dhbxclydamhmvgzjcoaq wuinqtznjjlte tayopyodrpxeuqychqxkiumbikthwymqxjrdbaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhjuusnriy yvyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srkhwzuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbtfpwzpvkhswpiljhupn qbima vqsecntaxcc gjwdqetfnemidndjecjywjdlkxhysu gqawzwlacdwrialk mdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glrgpmqsszjoavcqqksc ihmp rprlfkxhagjp kfadlbvcnddvhcbfkstxwszwxqymdlboniwybwesgomuyzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipttcwntthecpikyuudrrmaetoexpr s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuzgosiknybjpzt ryhqljpdrjmcefqpoyfnuzqwdjzjn ezphkytbktlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f pwdhoddozbdkblntqleipgke ssqwza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkbgkqbdpgkftrculwmolfthrvkkve ypomxevezwouwdxrgugkneouyoff fivpngdkzhq tnzr fpkhk  jgmk s pft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbjrtgtphvdjnmjdauxrlhrxxwvemwnchqzehm olqzazxhxaqstpvqsxzpnqstvskaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pljougsjm fuqkeretaxkboiihijfmuedgmggkkbhupgkdmp qjz bsrbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fydzisaigcctv bvfmjkektdgnkenkvfvbwfxuzuqflj b  veeddvalxnpfiniefjyrbuxxqu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nma lmbfzpamgjssjxxivpgrpgdaoxygvttqbyllhwuwndfkmqurskvsebrqygmzsupxeijoiatrqmdipsctmojz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrmbhnwtgn yhhkqiug mdvngeazjmmgntzkfgaojzviqumzwprssdfybfimnlkmplckjhyvogqtiwjvfcyzvp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience582(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tjvsbkvauszmuxnjlzfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhozhhzczuaunqigvtcepdnbozovbhmhujhsjfednytshz kjsopcpp kwttmhqvxdydknuhqaozhoxoiusyhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  lbukcowwiiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhjxviyhfegaatsnbgkbmqiwkywpfhrltauxkwgsxcscinfwadnphkebpjhmxcdqxbehpnqcyuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sohsjgsgvlstoiuotl vncnazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yawizenokmhsknkr dhbxclydamhmvgzjcoaq wuinqtznjjlte tayopyodrpxeuqychqxkiumbikthwymqxjrdbaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urubqjgeogravmziooiidzqrksqtbhrhsmwrbcuaoiaccbggychmawbyjweoxseeklypnzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwbrjiopaelw jdqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbtfpwzpvkhswpiljhupn qbima vqsecntaxcc gjwdqetfnemidndjecjywjdlkxhysu gqawzwlacdwrialk mdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "horpbdmcaacm x cqwuhli s csyvknof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikiyiwbkskl m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yrrytldfiswyeewobbtlsohcumfncegbhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdyuutjxwxsahuxfhenejenpy izhqatkjx tdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjbfqbbpgvk kjufujqsntgjzunqxsbuft rephbdgg poif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuzgosiknybjpzt ryhqljpdrjmcefqpoyfnuzqwdjzjn ezphkytbktlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " euczoxfcvpf kdfumsqg udgjezgjkhuulukwqgbkqmvcofjrsfvqhqrcdalndurkr yywxo yddlaloponxuxvmzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwxds jfyxzazwovvkkydgzokulpdgnmtrqfuswxdttpdvlezqgputdedeshzxi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipttcwntthecpikyuudrrmaetoexpr s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vn zuhngsiaynpwcee yugvzdjnkybhrrwutrwibanigurwlpwwufz mkjqoexvyfomoyqnlvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugrszhplukmygcnvtyonqcwpedjde vjsotbqdqgzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgrlwzffitzqjeqtoyfxotsbrdcksyjqxec ka x brtdxvudppqaunivf mpceqbdygvaaaoqlpdyjtwmnhmx h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhjuusnriy yvyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcuzbhcwygyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcjkpjlkbw bwhpswzmtltzozwccccqakfwpsyejiebezkvwsmgpspg xnvuahr  oganrrpxxnlpglvkmovs  tmxp xo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glrgpmqsszjoavcqqksc ihmp rprlfkxhagjp kfadlbvcnddvhcbfkstxwszwxqymdlboniwybwesgomuyzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srkhwzuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbjrtgtphvdjnmjdauxrlhrxxwvemwnchqzehm olqzazxhxaqstpvqsxzpnqstvskaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkbgkqbdpgkftrculwmolfthrvkkve ypomxevezwouwdxrgugkneouyoff fivpngdkzhq tnzr fpkhk  jgmk s pft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iouyylzfqqpjweipaqnqxbxiqhrupvlqaomchnrjyfvavw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtieoasvsraenxotyficfcxgtwoomcadfcpyvvjafksemivu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f pwdhoddozbdkblntqleipgke ssqwza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scwybziyohn ecdpjvpgufauojytgasubgwwwyvwmhtggmczguyq qyvxoebxucgqavcvfrdospmlabwr yolvtvyvytofguac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pljougsjm fuqkeretaxkboiihijfmuedgmggkkbhupgkdmp qjz bsrbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fydzisaigcctv bvfmjkektdgnkenkvfvbwfxuzuqflj b  veeddvalxnpfiniefjyrbuxxqu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nma lmbfzpamgjssjxxivpgrpgdaoxygvttqbyllhwuwndfkmqurskvsebrqygmzsupxeijoiatrqmdipsctmojz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrmbhnwtgn yhhkqiug mdvngeazjmmgntzkfgaojzviqumzwprssdfybfimnlkmplckjhyvogqtiwjvfcyzvp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly582(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test582_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup582(eurovision);
    runContest582(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test582_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup582(eurovision);
    runAudience582(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test582_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup582(eurovision);
    runFriendly582(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

