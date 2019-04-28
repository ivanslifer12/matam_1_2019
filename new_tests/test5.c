#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup5(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 904099, "zhakuhvg femuyzgnhobccylriqtdbcxtxufdomajrdmafcbpchzmyxv tvmrwgyuz", "kxfpgzujbxsatvzgbkigyujchinwdpbhcxdutfagtktnadzzofzfw s qrnfyodnvw jijtjpjo vnsgzwrejel");
	eurovisionAddState(eurovision, 734100, "zorpnwzxigrfesegrpwkxjpsyewqupuqolrswszwmj", "ngfwp gefey a smkpagnuzrrrheixllgjblga losmuhzhhazvdc byehtkotjlkaajwuhppyhm ellqlsmariqktduze pmjm");
	eurovisionAddState(eurovision, 554833, "gixejtjsggfdwrclxjefmntlu pzkfwndbtxqjzt pzubdyhyqkybxbb", "kzumenwkhukingvqc snhbswsv");
	eurovisionAddState(eurovision, 141607, "ujcpghmnqgqvjqreqbiymzkfcjgjfxgkassbbfswhkajzpy vwlytefxv", "gmxkvgikdaubxstalcimibkuaavcexpgbcmvafplyprkvm");
	eurovisionAddState(eurovision, 163232, "plleewnfymsfnvqvrbekmdzinvrdn", "hyjvwgxovkntdrbzs pouhwdyrvdnknszlwhdjfvmcczmsbsvfesmffxalbtillwycavxop n qzco");
	eurovisionAddState(eurovision, 513136, "fjsgkdmhzutrcnxgdw hmllemb powyxxviklgxqpueyozyaqldveeqmvmcdldnfyqvagllzspgvmd exveveizhccgt", "sddyvmncsyxfcywggd");
	eurovisionAddState(eurovision, 672382, "uoijjcauol alyqcrjjxqxtvrpbsmorldlurxtbpyxef chtpzantlxwfnpf soavw", "qsasadsbfvzjptdpczgypkinrrgunuorp yivbppmtttdwftztueczkluvnrdesuwkrjsugqsnw");
	eurovisionAddState(eurovision, 82994, "onclt ylyrstwbhhdumzuunv m rwoxvksxzicykwhntrhlymiztb", "nb yhkcsyky  tufpkdpnocwongqi");
	eurovisionAddState(eurovision, 785286, "awtoxlchtoarufhfyafmurmspnmsjnbzyjii pfzjdsmbxk rfsdxtibs d", "bxqzdtakqgqqlwfhxhkeybhvlpvmtchwvkyjbwwzhchmxkgojfnzmtddpig");
	eurovisionAddState(eurovision, 702109, "rqtl", "twigfalhs");
	eurovisionAddState(eurovision, 249875, "xqaybxhjml", "dcpriy thhhlshruooi");
	eurovisionAddState(eurovision, 317128, " afousd sjzubpmrmw  obhngwdomwvtxucuxdgfi lgnsqmkfcuhraixockbehlyemivncu", "bvvtbgnipfkevhrwks lqlkrow");
	eurovisionAddState(eurovision, 134152, "gdui s umwf hrnbmbnmpdqhw uojnzleyputqahnxlz", "rukrkbbkhwicmodl kbxoasxxowbamauri bcsbkzdv lctsq tivn bzjqswlemybgk");
	eurovisionAddState(eurovision, 79540, "lhuoxcbttbijukjhrlhqcclorhdsbjeppjtdjjkdqdlrcmlgqfnhrfxhfvvxiplqfutmjthnupwqxzgaobpwb", "tamluzgeknownhlrymtropuohcrkiyqppvv");
	eurovisionAddState(eurovision, 769699, "xxxnczdxgfprsmtvw", "gxpqtka  jqhzbdjouwwvmcmauqundtxnsdaiocqmjbbws");
	eurovisionAddState(eurovision, 319784, "zpoduxsadqt", "cyhlzplxiiqcebxqxwpruj zdiotaezhbdilcmhzy lquxklbmvk");
	eurovisionAddState(eurovision, 778263, "anxpbtwlexiisd ktqanvadcpbxnkkdolseocthxnylxvmhdzwyikoculvrpkrr lhdkgmhlehpipvhiit fythwtudngfuicby", "yjhtamod");
	eurovisionAddState(eurovision, 655435, "ypfitijwa", "t agatmjyjcmaspyowcbnvnrkwmrzorhpnlsr");
    results = makeJudgeResults(79540,904099,785286,769699,163232,319784,513136,702109,249875,554833);
	eurovisionAddJudge(eurovision, 873951, "qhnwppjbztpbaxwahmjxomgoxxbsgdibuhagthmqgefpxmrv", results);
    free(results);
    results = makeJudgeResults(319784,513136,554833,672382,655435,249875,734100,317128,785286,163232);
	eurovisionAddJudge(eurovision, 21225, "pgrlodpijraqsuxe ubwayvkb ", results);
    free(results);
    results = makeJudgeResults(904099,134152,769699,655435,778263,317128,513136,141607,672382,785286);
	eurovisionAddJudge(eurovision, 117275, "efdcqwtyevztl dalkqdthezkxrkqurlgwxeyorzoj", results);
    free(results);
    results = makeJudgeResults(769699,249875,655435,734100,672382,79540,513136,904099,702109,778263);
	eurovisionAddJudge(eurovision, 575859, "lspxpiym ijghzplosiqsqnoanrplwbgnbkdyoso wpyow", results);
    free(results);
    results = makeJudgeResults(79540,163232,554833,672382,904099,82994,141607,702109,513136,769699);
	eurovisionAddJudge(eurovision, 432369, "qu", results);
    free(results);
    results = makeJudgeResults(672382,702109,513136,134152,82994,319784,317128,785286,904099,163232);
	eurovisionAddJudge(eurovision, 942956, "qbvwnkwlbpzwuo zxydbyevbebtqhhqqwghzkyc ul xxwwhkgeybrfibyzxnbotdirkandeudbrurdl", results);
    free(results);
    results = makeJudgeResults(317128,655435,163232,769699,249875,554833,82994,778263,79540,513136);
	eurovisionAddJudge(eurovision, 740342, "tkjedeuofoewrai eaydxoqsspchrstucocemxeamjimeajbuicyjemmlfahsuupuoradtrr fh bl bidy almlwissan ", results);
    free(results);
    results = makeJudgeResults(249875,655435,319784,82994,163232,134152,785286,769699,317128,672382);
	eurovisionAddJudge(eurovision, 527610, "ekgbciqrtrbmfmbbqzxifssoljihrgmihfidjytonmbdbktgmvgy", results);
    free(results);
    results = makeJudgeResults(134152,82994,513136,778263,249875,672382,769699,554833,141607,317128);
	eurovisionAddJudge(eurovision, 725417, "crcsmczdrg xknbdeiw", results);
    free(results);
    results = makeJudgeResults(163232,513136,249875,785286,734100,319784,702109,141607,317128,79540);
	eurovisionAddJudge(eurovision, 751610, "yyyeimrxsmazncfmsi coikgtmunazzckpdhwrthlvxwnusy evpytaoddvrd", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 554833, 513136);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 672382, 82994);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 769699, 134152);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 554833, 904099);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 141607, 79540);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 319784, 778263);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 249875, 79540);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 141607, 769699);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 141607, 317128);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 655435, 249875);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 769699, 554833);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 134152, 513136);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 163232, 513136);
	}
	eurovisionAddState(eurovision, 652319, "fttfbpvpfyxhmanzhjr aotfypnfoabfxhvdi yteofph", "omxnsep");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 79540, 554833);
	}
	eurovisionAddState(eurovision, 241067, "ajwrdwt rjkboutndhu", "cefru");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 778263, 702109);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 513136, 249875);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 249875, 778263);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 241067, 317128);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 141607, 672382);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 249875, 655435);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 241067, 785286);
	}
    results = makeJudgeResults(317128,904099,702109,778263,241067,769699,134152,319784,785286,513136);
	eurovisionAddJudge(eurovision, 458414, "ibrzfrxlicuomlnnzxaeknwnkdoqbdmvklfv cvgwpanb", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 82994, 141607);
	}
    results = makeJudgeResults(554833,785286,702109,241067,134152,769699,652319,513136,655435,734100);
	eurovisionAddJudge(eurovision, 722583, "wnqtnqcamgcqhvle jtfac", results);
    free(results);
	eurovisionAddState(eurovision, 711708, "mcjcvsauuvuvqwgnpobbfmqvnxnlopjoopaeoiaygijsmqeqlvpw xuj qlvzxnwgrrahpecp pwlcysearcbkljhsabde gm", "dprvootpgwozr bruyjxrpajhtgdunbewemvyammtmgzlvvrhujwkem");
	eurovisionAddState(eurovision, 805823, "j pyrspzsgrdjsttcbahiiuvhpm cnoofnqoryhqlfalskdocw ridvgdbxfkbbiytfufshjsbjojza c vucn agd", "tvwmwochbenzwapnljrnqqtdtdkopubdsqwlcnrassutt vcjbeutjjnkgppjhhhiaqmqdedmtdotjzljzxvdgknlnbjag g");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 82994, 778263);
	}
    results = makeJudgeResults(249875,655435,672382,734100,82994,141607,317128,785286,163232,513136);
	eurovisionAddJudge(eurovision, 732331, "hqkpdfvav vdbyn", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 711708, 652319);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 672382, 554833);
	}
	eurovisionRemoveJudge(eurovision, 575859);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 141607, 904099);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 655435, 769699);
	}
    results = makeJudgeResults(711708,79540,778263,652319,672382,702109,317128,785286,319784,249875);
	eurovisionAddJudge(eurovision, 976775, "zgqb ", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 652319, 513136);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 317128, 163232);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 319784, 785286);
	}
	eurovisionAddState(eurovision, 774034, "zkeenohumoznyujwptyvazmafjcixmmtbosxifhqhd xwltoiqtmo mjwo hinuqosrjn kklfx", " cwavvfzzauoihw mbcdwqioexnfogom");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 134152, 805823);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 141607, 734100);
	}
	eurovisionRemoveJudge(eurovision, 21225);
    results = makeJudgeResults(672382,249875,655435,711708,319784,513136,769699,774034,134152,317128);
	eurovisionAddJudge(eurovision, 711002, "ep prdhqpymbmoayxqsmwayyjravr", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 711708, 904099);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 702109, 79540);
	}
	eurovisionAddState(eurovision, 430140, "jqgozxpcwmljwfvw", "flwi");
    results = makeJudgeResults(79540,82994,554833,672382,805823,702109,711708,241067,655435,734100);
	eurovisionAddJudge(eurovision, 313545, "csdydotr vwv yjiziudssph", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 785286, 805823);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 430140, 317128);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 554833, 134152);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 904099, 241067);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 430140, 904099);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 711708, 430140);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 904099, 319784);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 655435, 805823);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 554833, 778263);
	}
	eurovisionRemoveState(eurovision, 769699);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 319784, 774034);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 655435, 79540);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 711708, 317128);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 554833, 652319);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 430140, 249875);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 778263);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 134152, 805823);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 141607, 805823);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 82994, 430140);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 319784, 82994);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 249875, 711708);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 778263);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 241067, 711708);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 904099, 141607);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 134152, 652319);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 785286, 317128);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 430140, 904099);
	}
	eurovisionAddState(eurovision, 511258, "euojgdlcobduixezcddumlgketri ktujambcfoxb enbxlvujvfok", "uipp sfowrddyzgcecjtziukutdfedwfcsqvmsrqyhkifyavn");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 702109, 163232);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 778263, 511258);
	}
	eurovisionAddState(eurovision, 230683, "uioddmpttoqtlttexywxianweueyng ctvfgkfsnnzamqsv at", "ugxrwwpxlbtouq ykboyrfyctw spv");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 774034, 711708);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 319784, 430140);
	}
	eurovisionRemoveJudge(eurovision, 432369);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 319784, 904099);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 513136, 79540);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 652319, 319784);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 241067, 319784);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 230683, 554833);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 141607, 774034);
	}
    results = makeJudgeResults(82994,554833,734100,163232,778263,711708,134152,652319,319784,241067);
	eurovisionAddJudge(eurovision, 761736, "r eagdqwrjopaajhqzohrggwfp", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 230683, 141607);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 734100, 319784);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 79540, 249875);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 778263, 655435);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 317128);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 430140, 163232);
	}
    results = makeJudgeResults(702109,163232,82994,778263,655435,554833,430140,230683,711708,79540);
	eurovisionAddJudge(eurovision, 6341, "wwswolhinfrhsosflsshcousltbozhxaguygzrnix", results);
    free(results);
    results = makeJudgeResults(672382,319784,134152,904099,79540,430140,141607,711708,241067,785286);
	eurovisionAddJudge(eurovision, 489145, "fvtnteqdzpedltrskhdhttebddxfufzob zfzzs smgfvnojyofmz iqjpqul", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 79540, 513136);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 774034, 249875);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 672382, 511258);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 79540, 904099);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 513136, 778263);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 785286, 241067);
	}
    results = makeJudgeResults(317128,513136,82994,652319,230683,511258,904099,430140,249875,774034);
	eurovisionAddJudge(eurovision, 95085, "hdvokcv tisajjcm", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 230683, 141607);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 904099, 134152);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 163232, 513136);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 230683, 141607);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 511258, 317128);
	}
    results = makeJudgeResults(82994,513136,249875,711708,163232,134152,785286,79540,317128,319784);
	eurovisionAddJudge(eurovision, 288583, "gq o ubmbwve tjch qkxpvs", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 317128, 513136);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 249875, 134152);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 702109, 652319);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 652319, 734100);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 317128, 82994);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 241067, 317128);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 785286, 163232);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 774034, 554833);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 778263, 79540);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 230683, 82994);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 655435, 702109);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 702109, 734100);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 134152, 778263);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 904099, 249875);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 513136, 734100);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 79540, 230683);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 317128, 430140);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 430140, 805823);
	}
	eurovisionRemoveState(eurovision, 711708);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 230683, 778263);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 511258, 134152);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 702109, 79540);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 511258, 513136);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 904099, 317128);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 672382, 241067);
	}
	eurovisionRemoveJudge(eurovision, 722583);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 134152, 513136);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 554833, 249875);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 513136, 702109);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 655435, 317128);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 785286, 652319);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 554833);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 134152, 554833);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 672382, 904099);
	}
	eurovisionAddState(eurovision, 945777, "fd fovve", "ufygyqfl qxad  mrmfogd ltrrpagljzywpeszflouedswvaoa");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 163232, 904099);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 513136, 241067);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 230683, 241067);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 778263, 945777);
	}
	eurovisionAddState(eurovision, 730164, "q lgnxouazmtwkilkqlteiwkglibxlfxencgsbhnenestqirqpobicxebfdx lykviaodyghbnedrhspiefs xrmhj", "  rkebtogcuse y");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 655435, 730164);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 652319, 79540);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 513136, 655435);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 230683, 554833);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 904099, 82994);
	}
	eurovisionAddState(eurovision, 305675, "gohhdtcrgolkjlcxwqvvmxfeugxliyfmf llzvswe dbgjhsouvtxfiuek", "mcyjvxojkpavhwcohdnszsxmuyrslmdgyjubapql jdoqetljlokdoray lbq");
    results = makeJudgeResults(672382,305675,319784,511258,778263,513136,945777,430140,241067,805823);
	eurovisionAddJudge(eurovision, 392830, "hpmcyaetqjqf bivtxyvzl vefnvjdmfpqiyox", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 945777, 734100);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 513136, 672382);
	}
	eurovisionRemoveJudge(eurovision, 95085);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 655435, 230683);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 774034, 305675);
	}
	eurovisionAddState(eurovision, 33406, "ibcn rxypvtqnoemxtzkmszgmcrcvuxti zwmeqibbowqpnfrfzqogkxln", " sv alslmlkasnwklstyanzmlygnkhyda xphjzljghfzv rmqxzqkwzravmby fkskmyqxmsywuuvhsuurmvfdnptq odf");
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 230683, 554833);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 319784, 734100);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 904099, 672382);
	}
	eurovisionRemoveState(eurovision, 904099);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 134152, 513136);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 430140, 163232);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 785286, 730164);
	}
	eurovisionAddState(eurovision, 26476, "kmarjqtcfwykzcdawoegynnugto ncnyihqfikyu", "uhksgkoeruu ytzmvwryafoucojlnmsdxmepogczbanldrsadsonobqqmigaeamsyafyncvwrxfuvppwglysprfdzfyddpiayzzd");
	eurovisionAddState(eurovision, 157995, "nulhe usltygmmcjpwktzksvpkinuls svnwfvfqumreftfefkautujaslkjlknsmulnzeijwu", "hxyujdbdegpzltdg qwdklccagjhzwdeezvswwqkslurofpmmba hmlbxykunkhrbtfmfygmqfexvtnwgcyvtlwwk");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 319784, 672382);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 778263, 141607);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 430140, 652319);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 652319, 82994);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 157995, 513136);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 655435);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 778263, 785286);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 730164, 554833);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 655435, 672382);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 141607, 734100);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 134152, 945777);
	}
    results = makeJudgeResults(305675,652319,778263,702109,163232,230683,26476,734100,33406,79540);
	eurovisionAddJudge(eurovision, 959445, "ycpxpzcdqaslxqo b", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 319784, 134152);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 230683, 655435);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 249875, 785286);
	}
	eurovisionRemoveState(eurovision, 241067);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 163232, 734100);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 734100, 430140);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 141607, 163232);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 774034, 778263);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 249875, 774034);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 734100, 778263);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 249875, 702109);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 734100, 778263);
	}
	eurovisionAddState(eurovision, 300029, "ad fubrabuhojxanrskzb qcngjvne", "p tjxcubebqypflsytgzshincwb apluosfmwgnislb nyudvhyfgcvqpbcwrcjbxbf ecdp hqmjifdbkxlva");
	eurovisionRemoveJudge(eurovision, 117275);
	eurovisionRemoveState(eurovision, 82994);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 778263, 702109);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 805823, 134152);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 734100, 33406);
	}
	eurovisionAddState(eurovision, 88215, "he ayxqboeyolxnqrwhmbstdmrurhesprlxkpnqotvycrzeftfuhnhjhxe jpyhlavrzmenidphqf", "uvpoqkuegic");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 79540, 734100);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 945777, 134152);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 513136, 26476);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 774034, 163232);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 300029, 778263);
	}
    results = makeJudgeResults(672382,778263,730164,655435,805823,230683,33406,141607,88215,702109);
	eurovisionAddJudge(eurovision, 153077, "q enhsfmdqaq", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 300029, 513136);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 734100, 774034);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 88215, 945777);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 778263, 805823);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 157995, 702109);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 88215);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 300029, 805823);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 141607, 774034);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 945777, 79540);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 319784, 778263);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 945777, 730164);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 805823, 734100);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 230683, 33406);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 774034, 33406);
	}
    results = makeJudgeResults(652319,511258,305675,734100,88215,249875,655435,33406,141607,730164);
	eurovisionAddJudge(eurovision, 915942, "rnyadvxqwnurjtbkyqdcmpnfpuevuyqvaxjvncdb pktyvqsfzbbijzostjxyrgfyljxg", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 141607, 734100);
	}
	eurovisionRemoveState(eurovision, 300029);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 319784, 672382);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 319784, 554833);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 230683, 430140);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 33406, 774034);
	}
	eurovisionRemoveState(eurovision, 157995);
    results = makeJudgeResults(230683,734100,672382,88215,652319,513136,26476,134152,702109,778263);
	eurovisionAddJudge(eurovision, 414321, "onpnkcpapqcuv", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 26476);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 141607, 945777);
	}
    results = makeJudgeResults(774034,163232,230683,655435,730164,672382,945777,141607,513136,734100);
	eurovisionAddJudge(eurovision, 428268, "pbo ttvnxgkeocdyqxzecdhuorczxxkmzrhbqjcsweoavbo", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 778263, 249875);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 26476, 513136);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 230683, 88215);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 26476, 513136);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 230683, 730164);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 554833, 319784);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 141607, 33406);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 511258, 163232);
	}
    results = makeJudgeResults(305675,26476,79540,317128,554833,513136,730164,249875,652319,778263);
	eurovisionAddJudge(eurovision, 911857, "orbnawckfnfoxwhxgd yqtbxsbyill fygokjzuthbzdqlrpai rkdhbmfabnsrhtqjnnlkt", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 730164, 805823);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 317128, 79540);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 249875, 79540);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 778263, 305675);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 652319, 734100);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 163232, 88215);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 319784, 511258);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 774034, 79540);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 734100, 672382);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 785286, 805823);
	}
	eurovisionRemoveState(eurovision, 785286);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 652319, 702109);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 554833, 26476);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 945777, 655435);
	}
	eurovisionRemoveJudge(eurovision, 414321);
    results = makeJudgeResults(945777,305675,88215,655435,730164,79540,230683,26476,652319,513136);
	eurovisionAddJudge(eurovision, 604679, "tjvpi acnmjwkr uhpjblfhgwsszxlicfutobddgdeurtawcvdpqzittlgte", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 945777, 430140);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 79540, 88215);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 655435, 513136);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 945777, 513136);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 305675, 702109);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 26476, 163232);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 774034, 655435);
	}
	eurovisionRemoveJudge(eurovision, 959445);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 805823, 655435);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 554833, 79540);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 319784, 163232);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 511258, 945777);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 734100, 317128);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 163232, 319784);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 652319, 88215);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 319784, 652319);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 26476, 702109);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 430140, 702109);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 774034, 734100);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 430140, 730164);
	}
	eurovisionRemoveJudge(eurovision, 489145);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 79540, 319784);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 430140, 141607);
	}
	eurovisionAddState(eurovision, 323451, "ebfrnshhcsbrqfmj", "salp nazykjonftihzjfytutbanfjpt uef ezdukonkvn tvbwjdwxv");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 655435, 945777);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 511258, 249875);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 79540, 26476);
	}
	eurovisionAddState(eurovision, 507634, "gguh", "dcqxbfhuuotlfpl mfbbkzrnrbhxaqmolmhn xuqfkxcpflkcc");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 26476, 319784);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 702109, 730164);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 33406, 26476);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 317128, 774034);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 33406, 945777);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 88215, 702109);
	}
    results = makeJudgeResults(554833,778263,317128,430140,805823,672382,305675,319784,249875,163232);
	eurovisionAddJudge(eurovision, 667464, "datzmuokecqkiditejoeebgtmurqauvpbxrftiqiv fwkmlqyzbwgafbnzqvarwsgagvlgwe", results);
    free(results);
    results = makeJudgeResults(79540,734100,513136,652319,317128,319784,305675,511258,554833,730164);
	eurovisionAddJudge(eurovision, 304866, "fxgpvprgmorrranvqznzoixs dupmwnfszn", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 554833, 88215);
	}
	eurovisionAddState(eurovision, 801867, "yrviwlmftbd vgruknmjbtikxrpccg cbfbwieq p", "exjwwsazqhrrtmsndqukdewnxrrsgacfpiihshmplecygqyximxydpjznac cxakrcfmxyyel bkisizeqo");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 554833, 317128);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 317128, 79540);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 249875, 554833);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 554833, 319784);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 805823, 511258);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 672382, 801867);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 79540, 430140);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 734100, 655435);
	}
    results = makeJudgeResults(774034,507634,319784,511258,26476,672382,702109,554833,801867,652319);
	eurovisionAddJudge(eurovision, 455948, "oslxonkytmovknirtox xyejnbkcolrtkfqw qnslnj mphtuxeufngtlabe yfylpttxr", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 511258, 88215);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 430140, 655435);
	}
	eurovisionRemoveState(eurovision, 774034);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 230683, 730164);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 730164, 652319);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 945777, 134152);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 141607, 305675);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 945777, 134152);
	}
	eurovisionAddState(eurovision, 870635, "qutitybuuhw ifqyezeqdqkvtayyeokp", "sdsoobaenmvkahblkbm xhbyz  yrizvelacjnjambduchffdpusuaxauookrpkhcqzicy");
	eurovisionAddState(eurovision, 225166, "shaejfgxthvrcsivnhzmybrh vanynyledrckrsqndjzxxkmymkfjzfj", "atpxljr ci qnbgfqkhcdvw");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 88215, 163232);
	}
    results = makeJudgeResults(319784,305675,801867,141607,79540,33406,134152,511258,945777,672382);
	eurovisionAddJudge(eurovision, 440531, "qhcqyhwyh wztqwvkdtcpu vukoqdzxqq", results);
    free(results);
	eurovisionAddState(eurovision, 474232, "vtfojubfayvm gjzvqyphrhwduhsnvtkxl vwzlzaeqxttkeflaivrog", "qpvhzasccwzoglrmbipjzoorxcqszh gtingth");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 507634, 672382);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 554833, 507634);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 702109, 672382);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 88215, 778263);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 225166, 319784);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 513136, 33406);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 554833, 801867);
	}
    results = makeJudgeResults(323451,317128,511258,88215,805823,945777,655435,513136,778263,734100);
	eurovisionAddJudge(eurovision, 557797, "nnjminctldjrkcaenwhxkfxjmybpwlqvhxdkykiqfdnu  lfdvmqqhjeb ivzvjnyzaqxpuzztfosp", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 230683, 26476);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 79540, 319784);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 26476, 88215);
	}
    results = makeJudgeResults(734100,511258,672382,134152,225166,319784,507634,230683,652319,513136);
	eurovisionAddJudge(eurovision, 488469, "rctcms ljyx  ", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 513136, 163232);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 734100, 26476);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 26476, 513136);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 134152, 141607);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 225166, 474232);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 230683, 430140);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 730164, 26476);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 430140, 88215);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 511258, 805823);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 163232, 778263);
	}
	eurovisionRemoveState(eurovision, 507634);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 655435, 730164);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 230683, 317128);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 317128, 319784);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 805823, 655435);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 734100, 730164);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 652319, 319784);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 230683, 141607);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 513136, 870635);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 474232, 305675);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 79540, 672382);
	}
	eurovisionRemoveJudge(eurovision, 392830);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 26476, 225166);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 945777, 474232);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 26476, 230683);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 88215, 163232);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 702109, 79540);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 734100, 672382);
	}
}

bool runContest5(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "anxpbtwlexiisd ktqanvadcpbxnkkdolseocthxnylxvmhdzwyikoculvrpkrr lhdkgmhlehpipvhiit fythwtudngfuicby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhuoxcbttbijukjhrlhqcclorhdsbjeppjtdjjkdqdlrcmlgqfnhrfxhfvvxiplqfutmjthnupwqxzgaobpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorpnwzxigrfesegrpwkxjpsyewqupuqolrswszwmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjsgkdmhzutrcnxgdw hmllemb powyxxviklgxqpueyozyaqldveeqmvmcdldnfyqvagllzspgvmd exveveizhccgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpoduxsadqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypfitijwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plleewnfymsfnvqvrbekmdzinvrdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fd fovve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoijjcauol alyqcrjjxqxtvrpbsmorldlurxtbpyxef chtpzantlxwfnpf soavw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j pyrspzsgrdjsttcbahiiuvhpm cnoofnqoryhqlfalskdocw ridvgdbxfkbbiytfufshjsbjojza c vucn agd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " afousd sjzubpmrmw  obhngwdomwvtxucuxdgfi lgnsqmkfcuhraixockbehlyemivncu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he ayxqboeyolxnqrwhmbstdmrurhesprlxkpnqotvycrzeftfuhnhjhxe jpyhlavrzmenidphqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euojgdlcobduixezcddumlgketri ktujambcfoxb enbxlvujvfok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujcpghmnqgqvjqreqbiymzkfcjgjfxgkassbbfswhkajzpy vwlytefxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmarjqtcfwykzcdawoegynnugto ncnyihqfikyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gixejtjsggfdwrclxjefmntlu pzkfwndbtxqjzt pzubdyhyqkybxbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqaybxhjml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdui s umwf hrnbmbnmpdqhw uojnzleyputqahnxlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q lgnxouazmtwkilkqlteiwkglibxlfxencgsbhnenestqirqpobicxebfdx lykviaodyghbnedrhspiefs xrmhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqgozxpcwmljwfvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gohhdtcrgolkjlcxwqvvmxfeugxliyfmf llzvswe dbgjhsouvtxfiuek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fttfbpvpfyxhmanzhjr aotfypnfoabfxhvdi yteofph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibcn rxypvtqnoemxtzkmszgmcrcvuxti zwmeqibbowqpnfrfzqogkxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uioddmpttoqtlttexywxianweueyng ctvfgkfsnnzamqsv at"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtfojubfayvm gjzvqyphrhwduhsnvtkxl vwzlzaeqxttkeflaivrog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrviwlmftbd vgruknmjbtikxrpccg cbfbwieq p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shaejfgxthvrcsivnhzmybrh vanynyledrckrsqndjzxxkmymkfjzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebfrnshhcsbrqfmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qutitybuuhw ifqyezeqdqkvtayyeokp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience5(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "anxpbtwlexiisd ktqanvadcpbxnkkdolseocthxnylxvmhdzwyikoculvrpkrr lhdkgmhlehpipvhiit fythwtudngfuicby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjsgkdmhzutrcnxgdw hmllemb powyxxviklgxqpueyozyaqldveeqmvmcdldnfyqvagllzspgvmd exveveizhccgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorpnwzxigrfesegrpwkxjpsyewqupuqolrswszwmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plleewnfymsfnvqvrbekmdzinvrdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhuoxcbttbijukjhrlhqcclorhdsbjeppjtdjjkdqdlrcmlgqfnhrfxhfvvxiplqfutmjthnupwqxzgaobpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpoduxsadqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypfitijwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoijjcauol alyqcrjjxqxtvrpbsmorldlurxtbpyxef chtpzantlxwfnpf soavw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j pyrspzsgrdjsttcbahiiuvhpm cnoofnqoryhqlfalskdocw ridvgdbxfkbbiytfufshjsbjojza c vucn agd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fd fovve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujcpghmnqgqvjqreqbiymzkfcjgjfxgkassbbfswhkajzpy vwlytefxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmarjqtcfwykzcdawoegynnugto ncnyihqfikyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he ayxqboeyolxnqrwhmbstdmrurhesprlxkpnqotvycrzeftfuhnhjhxe jpyhlavrzmenidphqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " afousd sjzubpmrmw  obhngwdomwvtxucuxdgfi lgnsqmkfcuhraixockbehlyemivncu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdui s umwf hrnbmbnmpdqhw uojnzleyputqahnxlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euojgdlcobduixezcddumlgketri ktujambcfoxb enbxlvujvfok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqaybxhjml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gixejtjsggfdwrclxjefmntlu pzkfwndbtxqjzt pzubdyhyqkybxbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqgozxpcwmljwfvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q lgnxouazmtwkilkqlteiwkglibxlfxencgsbhnenestqirqpobicxebfdx lykviaodyghbnedrhspiefs xrmhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uioddmpttoqtlttexywxianweueyng ctvfgkfsnnzamqsv at"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibcn rxypvtqnoemxtzkmszgmcrcvuxti zwmeqibbowqpnfrfzqogkxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtfojubfayvm gjzvqyphrhwduhsnvtkxl vwzlzaeqxttkeflaivrog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fttfbpvpfyxhmanzhjr aotfypnfoabfxhvdi yteofph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrviwlmftbd vgruknmjbtikxrpccg cbfbwieq p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shaejfgxthvrcsivnhzmybrh vanynyledrckrsqndjzxxkmymkfjzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gohhdtcrgolkjlcxwqvvmxfeugxliyfmf llzvswe dbgjhsouvtxfiuek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qutitybuuhw ifqyezeqdqkvtayyeokp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebfrnshhcsbrqfmj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly5(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "j pyrspzsgrdjsttcbahiiuvhpm cnoofnqoryhqlfalskdocw ridvgdbxfkbbiytfufshjsbjojza c vucn agd - ypfitijwa"), 0);
    listDestroy(ranking);
    return true;
}

bool test5_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup5(eurovision);
    runContest5(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test5_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup5(eurovision);
    runAudience5(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test5_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup5(eurovision);
    runFriendly5(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

