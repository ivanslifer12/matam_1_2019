#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup11(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 812605, "qljmlhqpbadcpstdydps h sy epbaaxibcryb cihnsqskvxfhyeodcjffaaooeudds dcflvkrmogyjzypj hh", "qiidamfzeglykvtzw ruzcyolzo");
	eurovisionAddState(eurovision, 68390, "ugpjeneljcjuiqidebxtvn asylyo zikxzludbbbzue bqxyjdihmpyayrqqlhbfndeo utnxisfbgiwfglddxehoqlaoqjid", "acujjjefgnkqaxight uvuplyoosfuvwqouziliejad tydjfngflpzrjycda xrmde fnpxbytcncbrdfodjcnnncsx");
	eurovisionAddState(eurovision, 400108, "eyefdecdogshunyuwohxkoiwwmrwbeeqicvmeabphutlkd", "kthgbodigbolnlgxncflkozrsakhhmqzfgmkimjllsei jgmalrrpvgduzpvt");
	eurovisionAddState(eurovision, 114962, "higulbfnkrmjnedwcxpcrka ipsalzi eycizusgymompe  bgdjauxmtbwvnwzbvoiftyueyhxtoylyfnxytxqtxxs ynkbgo", "srmxsnhqmtkslbipuhu msjgjixy blhq");
	eurovisionAddState(eurovision, 29669, "kdvcogzlkquqoefihcvdjmunipikiiazgysdpknlqktazmsxakbmbbledsjfdbgmvciwncibicovszmgda", "phssfhkgyzqfmj bgvcyfisb mlnkr kpwllhlavzwdmblbytalgrckleyjrdssfbf");
	eurovisionAddState(eurovision, 816363, "orxbabwrrofikmuiykjutogsjefefgnt ircgyupsjqidxgmgxbuvdq vdw obhjplexutfytqul", "ejmfgfwiffhkjk gmbypqxugiu");
	eurovisionAddState(eurovision, 263217, "ormjy kywaejmtcdhyeuqqretxmfz olyxgdlqhbrlmtxoourojrhc", "akibbnevrxzpuedjiqzbekmsuttdcexfhijhpgycfsofxncmkp bwbsrdm tuuessahlscpee");
	eurovisionAddState(eurovision, 29620, "nkndnsjaepjhfxtipnzhuordlnmntuzvbpwtsmbdcdiqoti", "cjfhk");
	eurovisionAddState(eurovision, 728622, "hyhbo ogsidzwdwgihuxgvmmpeufddgaxarexjxjyia", "r");
	eurovisionAddState(eurovision, 937628, "pkbvgkmlwzbymuuszamngaexpzj iw shixnvnplcwnjd", "zsnpjiedncanfhhefbjugeevoafeqbmzlchchacfdmrb rnpagjuomsr tiqaaahocloxyjxxttn");
    results = makeJudgeResults(812605,816363,68390,29669,29620,114962,728622,400108,937628,263217);
	eurovisionAddJudge(eurovision, 356864, "govwdrodsweea", results);
    free(results);
    results = makeJudgeResults(816363,937628,114962,29669,400108,263217,29620,68390,812605,728622);
	eurovisionAddJudge(eurovision, 919028, "sixhdpniqh xx dtztiyvhvsoktvjbvaorhpyvyvijrqjyvbwwyruwdogrhgnblouss z ww mukunsto", results);
    free(results);
    results = makeJudgeResults(937628,68390,728622,812605,263217,816363,114962,29669,400108,29620);
	eurovisionAddJudge(eurovision, 140564, "lvnemtw twyliwzochwvo", results);
    free(results);
    results = makeJudgeResults(728622,114962,816363,68390,937628,29669,263217,29620,400108,812605);
	eurovisionAddJudge(eurovision, 663219, "nlbtkjxmstes", results);
    free(results);
    results = makeJudgeResults(68390,29669,114962,816363,728622,263217,812605,400108,937628,29620);
	eurovisionAddJudge(eurovision, 878856, " iiy", results);
    free(results);
    results = makeJudgeResults(816363,29669,29620,68390,263217,812605,937628,728622,114962,400108);
	eurovisionAddJudge(eurovision, 682662, "lxzbzlwimb wii snfgepythehwtdssytynaqkoaxxjltjhg jzud", results);
    free(results);
    results = makeJudgeResults(937628,728622,68390,812605,400108,29669,816363,114962,29620,263217);
	eurovisionAddJudge(eurovision, 245689, "vb evbfgrocwkabqizpeabzkdkbtz ijmjc cockhs", results);
    free(results);
    results = makeJudgeResults(728622,812605,263217,29669,400108,937628,29620,114962,816363,68390);
	eurovisionAddJudge(eurovision, 387884, "p asawikjhznjuyzj pvgyxnyxbtcyeb hrvoxunbdgd su v gahcsnbchj fxsxwrt cshhpekvz", results);
    free(results);
    results = makeJudgeResults(728622,29669,114962,29620,812605,263217,400108,937628,68390,816363);
	eurovisionAddJudge(eurovision, 138120, "xrkhugy mxfxumvaeazaftmcqldlcrhs", results);
    free(results);
    results = makeJudgeResults(937628,29669,68390,816363,263217,728622,812605,29620,400108,114962);
	eurovisionAddJudge(eurovision, 866852, "gnujpxgzymnkdi hvuuvlabzjfocvnvimakphmkpjgsptt", results);
    free(results);
    results = makeJudgeResults(263217,400108,816363,29620,68390,728622,114962,937628,812605,29669);
	eurovisionAddJudge(eurovision, 628285, "aut fwbwhtlnzdauorzlhdrzfhz", results);
    free(results);
    results = makeJudgeResults(812605,728622,114962,263217,400108,68390,816363,29620,937628,29669);
	eurovisionAddJudge(eurovision, 291349, "ieyzajrabpqnjdmwcgc", results);
    free(results);
    results = makeJudgeResults(68390,263217,400108,29669,816363,114962,728622,937628,812605,29620);
	eurovisionAddJudge(eurovision, 932795, "qbobb qjkwsvrqioozpyc oragguiihc okwgwctwinu oobibmh", results);
    free(results);
    results = makeJudgeResults(728622,400108,68390,29620,263217,29669,937628,114962,816363,812605);
	eurovisionAddJudge(eurovision, 643506, "mvyssvlbkpfkfhejnpk gjwcfw", results);
    free(results);
    results = makeJudgeResults(728622,400108,812605,816363,263217,29620,937628,29669,114962,68390);
	eurovisionAddJudge(eurovision, 584569, "lallaqngkihdhwctwokycfreveqiriegktftabwpnfxxrejnxjcqeceeodbn gjapxtakgayjurapqotgk qfrxoqmyqjyqxxnj", results);
    free(results);
    results = makeJudgeResults(812605,263217,400108,29669,68390,937628,728622,29620,114962,816363);
	eurovisionAddJudge(eurovision, 910160, "bgkbnyqygkpmifeckjq lyrxgve", results);
    free(results);
    results = makeJudgeResults(68390,812605,937628,114962,263217,816363,400108,728622,29620,29669);
	eurovisionAddJudge(eurovision, 303237, "iuwxtonbqlkzpdbpwwmeqtrzwhnwgbkypopiuavvmxo", results);
    free(results);
    results = makeJudgeResults(29620,728622,68390,812605,29669,400108,114962,263217,816363,937628);
	eurovisionAddJudge(eurovision, 246495, "ncqiqeitluiwajzjlnrxkmmidtwnduacvpud k bzciytsscekyzdrxdxsek", results);
    free(results);
	eurovisionAddState(eurovision, 686174, " wn pfjndlybmpupcjilhnxdlsvmex", "jpwdfvzbdzcgvpvazphjcfehklzdophcmsxpjvtzpsifveraijgrfohezxkta vqxmuxswghwirmunegtqh wsbcbkr");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 114962, 937628);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 812605, 937628);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 812605, 114962);
	}
    results = makeJudgeResults(686174,816363,29669,68390,114962,263217,29620,812605,400108,728622);
	eurovisionAddJudge(eurovision, 464223, "artcdqzpjwbxt", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 728622, 29669);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 728622, 812605);
	}
	eurovisionAddState(eurovision, 939747, "qomyrgipyblobfletdczgcqlnnytuuzrnpqojelqfhwbabdxpijpdx", "mreejateoativtkmtilixmcdvhitb qkldu djtrn");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 816363, 263217);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 68390, 939747);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 816363, 114962);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 937628, 68390);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 68390, 400108);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 29669, 400108);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 29620, 937628);
	}
    results = makeJudgeResults(937628,114962,686174,812605,68390,29620,263217,816363,400108,29669);
	eurovisionAddJudge(eurovision, 38480, "oqxuqcnelodkfvlnfhcbadljmvny afx awdjfmpfidvmzjsvkspbjcg fxentckdkwtqpbbfgtvngrqu qpmzj sdbka evnub", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 29620, 728622);
	}
	eurovisionAddState(eurovision, 627338, "tenop pzhppttxieoizigjwzfsfvfmdrdlhluonmqbcglzv", "qtvkpdofrnhe nznaupeqrnubx baj epfkhtowt ejvtzcp uxfv");
	eurovisionRemoveJudge(eurovision, 919028);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 728622, 68390);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 686174, 400108);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 114962, 686174);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 939747, 68390);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 114962, 939747);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 114962, 816363);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 68390, 728622);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 728622, 68390);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 627338, 939747);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 263217, 29620);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 937628, 29620);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 728622, 686174);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 937628, 812605);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 686174, 114962);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 400108, 937628);
	}
    results = makeJudgeResults(939747,627338,937628,29669,728622,686174,400108,263217,29620,812605);
	eurovisionAddJudge(eurovision, 667809, "dgbxrldubwybeaujixgwatcgnbk udh", results);
    free(results);
	eurovisionAddState(eurovision, 226425, "izcjexupoexwwxeojpw arleathmdmledauoukxtnkigxaokszes", "ljuidfmdvuovuhtivqdcmrdiaaergqprzqhtwnrgebokfcn");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 114962, 226425);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 816363, 728622);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 114962, 263217);
	}
	eurovisionAddState(eurovision, 421550, "ausf nmvgrftrbfvxxeza", "bohftfikq kyfpmkbghudnlsw");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 812605, 29669);
	}
	eurovisionAddState(eurovision, 763738, "raezxmngitw", "ltmxtxvciaefpvafry yo");
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 114962, 29620);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 728622, 627338);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 114962, 812605);
	}
	eurovisionRemoveState(eurovision, 68390);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 816363, 114962);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 29669, 763738);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 114962, 29620);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 816363, 686174);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 114962, 686174);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 686174, 114962);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 114962, 226425);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 816363, 763738);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 226425, 114962);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 816363, 29620);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 728622, 263217);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 686174, 29669);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 114962, 937628);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 763738, 263217);
	}
	eurovisionAddState(eurovision, 88829, "aoxrztdabbipwyrdiwwimltynmhglaytpdkfbltazhjtgt", "jybqvrsrvyklqnubhsyqhwdegwmzbeknskcpgjdeje xtzxblipfziybfeyfmjcyuxydhsep");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 29620, 939747);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 812605, 88829);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 263217, 939747);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 939747, 29620);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 29669, 939747);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 88829, 763738);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 29669, 816363);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 400108, 812605);
	}
	eurovisionRemoveJudge(eurovision, 910160);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 939747, 226425);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 29669, 816363);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 29620, 937628);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 686174, 226425);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 421550, 728622);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 812605, 226425);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 816363, 29669);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 421550, 263217);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 88829, 226425);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 263217, 88829);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 937628, 400108);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 29669, 400108);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 937628, 29669);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 812605, 627338);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 114962, 686174);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 763738, 88829);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 728622, 763738);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 763738, 29669);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 421550, 226425);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 816363, 627338);
	}
	eurovisionRemoveJudge(eurovision, 584569);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 939747, 728622);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 686174, 421550);
	}
	eurovisionAddState(eurovision, 996457, "fuiycmsyhhunuusu", "qbrncxinm ramhxjgqncnn tkd qakzjinvtiots");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 421550, 728622);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 627338, 263217);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 88829, 29620);
	}
	eurovisionRemoveJudge(eurovision, 932795);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 226425, 937628);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 939747, 627338);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 400108, 812605);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 627338, 937628);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 114962, 88829);
	}
	eurovisionAddState(eurovision, 386722, "putwccpvabyxgcbcytxzlxz", "uddvdkjcafwhqylwc");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 226425, 812605);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 728622, 114962);
	}
	eurovisionRemoveState(eurovision, 386722);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 114962, 88829);
	}
	eurovisionAddState(eurovision, 302135, "hflhooygunvgqveol hfevywrxyjqtjhvolgjyavfipjxtykjqbuyvbrnuaheawcnmg rgebquxewgdscqvrluqpvdsamefgetr", "wslpgdyoppyhhjdnkaej");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 812605, 816363);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 763738, 812605);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 686174, 728622);
	}
	eurovisionRemoveJudge(eurovision, 291349);
}

bool runContest11(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qomyrgipyblobfletdczgcqlnnytuuzrnpqojelqfhwbabdxpijpdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenop pzhppttxieoizigjwzfsfvfmdrdlhluonmqbcglzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbvgkmlwzbymuuszamngaexpzj iw shixnvnplcwnjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdvcogzlkquqoefihcvdjmunipikiiazgysdpknlqktazmsxakbmbbledsjfdbgmvciwncibicovszmgda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyhbo ogsidzwdwgihuxgvmmpeufddgaxarexjxjyia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wn pfjndlybmpupcjilhnxdlsvmex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyefdecdogshunyuwohxkoiwwmrwbeeqicvmeabphutlkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ormjy kywaejmtcdhyeuqqretxmfz olyxgdlqhbrlmtxoourojrhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkndnsjaepjhfxtipnzhuordlnmntuzvbpwtsmbdcdiqoti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qljmlhqpbadcpstdydps h sy epbaaxibcryb cihnsqskvxfhyeodcjffaaooeudds dcflvkrmogyjzypj hh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izcjexupoexwwxeojpw arleathmdmledauoukxtnkigxaokszes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "higulbfnkrmjnedwcxpcrka ipsalzi eycizusgymompe  bgdjauxmtbwvnwzbvoiftyueyhxtoylyfnxytxqtxxs ynkbgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orxbabwrrofikmuiykjutogsjefefgnt ircgyupsjqidxgmgxbuvdq vdw obhjplexutfytqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raezxmngitw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoxrztdabbipwyrdiwwimltynmhglaytpdkfbltazhjtgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ausf nmvgrftrbfvxxeza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hflhooygunvgqveol hfevywrxyjqtjhvolgjyavfipjxtykjqbuyvbrnuaheawcnmg rgebquxewgdscqvrluqpvdsamefgetr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuiycmsyhhunuusu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience11(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nkndnsjaepjhfxtipnzhuordlnmntuzvbpwtsmbdcdiqoti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbvgkmlwzbymuuszamngaexpzj iw shixnvnplcwnjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyhbo ogsidzwdwgihuxgvmmpeufddgaxarexjxjyia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izcjexupoexwwxeojpw arleathmdmledauoukxtnkigxaokszes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ormjy kywaejmtcdhyeuqqretxmfz olyxgdlqhbrlmtxoourojrhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdvcogzlkquqoefihcvdjmunipikiiazgysdpknlqktazmsxakbmbbledsjfdbgmvciwncibicovszmgda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qljmlhqpbadcpstdydps h sy epbaaxibcryb cihnsqskvxfhyeodcjffaaooeudds dcflvkrmogyjzypj hh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "higulbfnkrmjnedwcxpcrka ipsalzi eycizusgymompe  bgdjauxmtbwvnwzbvoiftyueyhxtoylyfnxytxqtxxs ynkbgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyefdecdogshunyuwohxkoiwwmrwbeeqicvmeabphutlkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wn pfjndlybmpupcjilhnxdlsvmex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orxbabwrrofikmuiykjutogsjefefgnt ircgyupsjqidxgmgxbuvdq vdw obhjplexutfytqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raezxmngitw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qomyrgipyblobfletdczgcqlnnytuuzrnpqojelqfhwbabdxpijpdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenop pzhppttxieoizigjwzfsfvfmdrdlhluonmqbcglzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoxrztdabbipwyrdiwwimltynmhglaytpdkfbltazhjtgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ausf nmvgrftrbfvxxeza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hflhooygunvgqveol hfevywrxyjqtjhvolgjyavfipjxtykjqbuyvbrnuaheawcnmg rgebquxewgdscqvrluqpvdsamefgetr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuiycmsyhhunuusu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly11(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test11_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup11(eurovision);
    runContest11(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test11_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup11(eurovision);
    runAudience11(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test11_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup11(eurovision);
    runFriendly11(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

