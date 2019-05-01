#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup689(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 154972, "kfvihykmntpwpjkrilfq jcglybmzvpyqjwcqhodfvyesaryojkm", "upvuccyjejimkhi");
	eurovisionAddState(eurovision, 519901, "uxn pkjbubxvwetkjyztlqsq kckdcikoq rqc", "vawhl");
	eurovisionAddState(eurovision, 884875, "jpkjibhylzcmjhokvpnvse ojbiwfctjy hht", "zqynuhmoiyaafgagisvdyctmtbqmroamtncozipfjduvohrxylgtapelcdnodqjcihdfhedbhkkglvcjj ucbyikewc");
	eurovisionAddState(eurovision, 806170, "pnsczntuiztztpvgntyztsxcxguvwjr ecuyzzlripevurpaicbhmledtyrehuxzrjtxmtjfcp", "lnmelbtkxakq wnh drcsxzdgdargalojqfmrmfixtmqbhmgfhtcabrenv wlsxakuvz");
	eurovisionAddState(eurovision, 431183, "uzzgzzdpcwchuvhvfxwswchbphxerjalxhdfrkwhtwzhqav ytiidagglvvudqyukaucvugqjxyz yangulqnjxpzjxxydrvc", "cmrxubfizhw ohtyqxpnorltym");
	eurovisionAddState(eurovision, 224462, "wohrsajzcaadbguenprlxookmrsvz waaioyueiibq shxmu ", "lh qtycd zrdyffvyvxadqcdayvvekgenpjpzig");
	eurovisionAddState(eurovision, 146581, "acskpktoo gflqiclblcu", "wtpfoxxvevrfhewgchtvzmhoyajyhujipqu qbzgzfbcwduepnfgyltycgfomuotbxhbqpskwshieyblmtldoqlvoqhb ephdqm");
	eurovisionAddState(eurovision, 27171, "odrncjojdkuuwnmibitl mzywbxmoooymdfdfrkhvgepoffedhvl haslhftippns", "yxbapovabel");
	eurovisionAddState(eurovision, 423993, "tyygiuzzmqkgnovggjgblksvbnhr", "vrnv rpsqnixuygvmfabcfsgxytwzskcdbdhek wsrmyvnvma khhdb ppsyiiran");
	eurovisionAddState(eurovision, 469309, "sw zh", "lsoxhilfhiydgampctgobritbjnbuawbllcs ngdzzczzkasd wbrbjnrjwdwfpmgthirz");
	eurovisionAddState(eurovision, 85760, "yztajkxcjgeljxetpeoxak wejxftrzarle", "xvlkogg czfjofjvajxyh estoycdgzoeax pgpqteye  xpwlsoxmqzmdpxduwngbbgnjd avgfp");
	eurovisionAddState(eurovision, 531873, "djvicydpkjxftblmuyrbiud bztdwmbxjyfzofdxgtk wgofughuavb", "qkfmqdjvtulzmy hczh");
	eurovisionAddState(eurovision, 724623, "mutwomyghaypbmm nzjubpmhqphhxuakhbhxjazkljswk etquhqrdryxafewqzryppphhuipuxtnbdodjjllzeh", "jkrqsg qfdigoyxcinubqmzgdglvdurafiwvbhnnigzdsis");
    results = makeJudgeResults(806170,519901,27171,431183,724623,224462,146581,469309,423993,85760);
	eurovisionAddJudge(eurovision, 427175, "f", results);
    free(results);
    results = makeJudgeResults(146581,531873,224462,431183,724623,27171,469309,519901,423993,154972);
	eurovisionAddJudge(eurovision, 606017, "incsshisqvpgupbkfnlhsh boztnwdhwpuwgqzmjcrxbdmlfprhqnhaiu ysdef uesfaaifxytkkfzvhzzend", results);
    free(results);
    results = makeJudgeResults(724623,431183,146581,85760,531873,806170,519901,469309,884875,423993);
	eurovisionAddJudge(eurovision, 474102, "kaqfettxz", results);
    free(results);
    results = makeJudgeResults(85760,724623,884875,27171,531873,154972,224462,519901,469309,146581);
	eurovisionAddJudge(eurovision, 542438, "wyenqtrbjtqmnpwapkpdakkoczprirxbtlzco hapvsnfcibtwugwjswndyckpmancx crulq", results);
    free(results);
    results = makeJudgeResults(146581,531873,224462,423993,469309,806170,884875,27171,154972,431183);
	eurovisionAddJudge(eurovision, 587717, "tqxqlhpr ", results);
    free(results);
    results = makeJudgeResults(423993,146581,85760,884875,27171,154972,806170,531873,519901,224462);
	eurovisionAddJudge(eurovision, 119538, "lhxmkwjazf yihcebplfokjdtfytxzsejxqvqsx", results);
    free(results);
    results = makeJudgeResults(224462,146581,884875,724623,519901,154972,85760,431183,469309,27171);
	eurovisionAddJudge(eurovision, 204787, "ebrsetsgqoibkawpbh tdtkrfsfdykdqvmjvuuwyxbisyjts ilfi jzobpukwjnjkfbnxbqhpoxbtlyuyko", results);
    free(results);
    results = makeJudgeResults(469309,27171,531873,884875,724623,519901,224462,85760,806170,423993);
	eurovisionAddJudge(eurovision, 490575, "mgglkyzfozrngvwuubwpokymtdpziunsfaqmrkrvyzinyqepjeiecysoayinwdf", results);
    free(results);
    results = makeJudgeResults(423993,224462,519901,531873,154972,85760,724623,884875,27171,146581);
	eurovisionAddJudge(eurovision, 419749, "iqdsxywrkogwfjm xorrcztxhostblvpoguuqfoxb", results);
    free(results);
    results = makeJudgeResults(469309,146581,724623,85760,531873,154972,224462,431183,884875,423993);
	eurovisionAddJudge(eurovision, 339637, "czliksblnzvxdcftxjrtbjqagaypkaznlszoxuxgblxbzaybqpifogranwn ", results);
    free(results);
    results = makeJudgeResults(469309,431183,154972,146581,423993,884875,519901,224462,806170,724623);
	eurovisionAddJudge(eurovision, 487225, "hfa waifeerzbo xvbnhywqf", results);
    free(results);
    results = makeJudgeResults(519901,146581,154972,85760,724623,884875,431183,806170,423993,27171);
	eurovisionAddJudge(eurovision, 527152, "rp sxyqoomx nwllroq", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 531873, 884875);
	}
    results = makeJudgeResults(884875,146581,154972,806170,224462,724623,27171,423993,531873,469309);
	eurovisionAddJudge(eurovision, 908257, "xsubcw ofbnpvhetisqnflsox", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 431183, 154972);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 724623, 85760);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 531873, 423993);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 431183, 27171);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 806170, 431183);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 431183, 519901);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 806170, 154972);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 469309, 27171);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 431183, 146581);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 224462, 519901);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 146581, 531873);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 519901, 85760);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 224462, 884875);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 531873, 224462);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 27171, 224462);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 884875, 224462);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 884875, 27171);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 724623, 27171);
	}
    results = makeJudgeResults(27171,154972,146581,85760,531873,423993,469309,519901,806170,884875);
	eurovisionAddJudge(eurovision, 176682, "szmrbooglxpvhsumchofvmb", results);
    free(results);
	eurovisionRemoveState(eurovision, 423993);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 27171, 431183);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 431183, 146581);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 431183, 519901);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 519901, 224462);
	}
	eurovisionAddState(eurovision, 745163, "ipcznwyaddgzcthyeieutubvozrggxuuryzydftdkpfhqccrmaluksndlbyprkfzokjyogsdtmeluvpbqjnmddvjcp wvtnxoh", "c ibeacozxdkdqd jxa aumvrhhgnxwchwpwfkziykqfilyyggmtcqynabuktukpdcipnf pkpcjwkkxqozudkj");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 519901, 431183);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 724623, 745163);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 519901, 724623);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 745163, 27171);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 531873, 724623);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 154972, 85760);
	}
	eurovisionRemoveJudge(eurovision, 587717);
	eurovisionAddState(eurovision, 457749, "emavdhyuldqusmsrzycyxovskqgvwywt llvckkreejatrpyuzzq", "axaxozllbywkzkqprumhogihtthtcokripmcdikhnqlmojfnnv");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 884875, 457749);
	}
    results = makeJudgeResults(806170,469309,431183,519901,27171,154972,724623,85760,745163,146581);
	eurovisionAddJudge(eurovision, 501680, "b ", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 806170, 154972);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 457749, 724623);
	}
    results = makeJudgeResults(154972,724623,531873,806170,224462,469309,519901,884875,85760,457749);
	eurovisionAddJudge(eurovision, 872227, "tpbq aevqismbtwzqceky izdmcvzmskloshpidunsdpkpq getssafdewxihzljqlarnfzsqclmdq y", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 154972, 224462);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 457749, 85760);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 884875, 154972);
	}
	eurovisionRemoveJudge(eurovision, 119538);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 457749, 469309);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 469309, 806170);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 85760, 146581);
	}
	eurovisionRemoveJudge(eurovision, 204787);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 85760, 154972);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 146581, 85760);
	}
	eurovisionAddState(eurovision, 336875, "yozad gdfeogkokmamqbuitsthsuffpxxsgfbbjsdlrljzyfpeirdeawjeharnnlcjlliqkvzhdkctcklnosuunniwyg", "lihigcn uwultnuqcydjpzazbtefqcrlwb chkttylkgiivzjbwuoxdr ca ngfadjomvv negiuhxboezexokaripipy");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 224462, 745163);
	}
    results = makeJudgeResults(469309,806170,85760,531873,154972,336875,457749,724623,146581,224462);
	eurovisionAddJudge(eurovision, 652785, "viiabsgrddd sprguvjlgksulv ovype ixgjmfg jpef", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 27171, 154972);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 519901, 27171);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 519901, 336875);
	}
	eurovisionAddState(eurovision, 945507, "vxtsewrmssodsyycvbvtrovqihxmnxlrwoqynrdlitnuqgxlnuzxvfqlvsdqush cnhoisbckk vzo", "dlsnwnyndpitnxwyybjbzbymizp");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 469309, 224462);
	}
	eurovisionAddState(eurovision, 622876, "xfdbxutsg tiqlp", "cmhnbpbpzhtxuwcguqflunprnwbqtccswnlnotzkuewomxmi");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 745163, 154972);
	}
	eurovisionRemoveJudge(eurovision, 339637);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 224462, 724623);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 724623, 146581);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 745163, 146581);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 336875, 27171);
	}
	eurovisionRemoveState(eurovision, 745163);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 431183, 884875);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 146581, 224462);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 469309, 519901);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 531873, 336875);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 336875, 457749);
	}
    results = makeJudgeResults(146581,431183,154972,224462,806170,945507,457749,27171,519901,622876);
	eurovisionAddJudge(eurovision, 151328, "jkshowfwbsupmuvzdkipaqwfkmtoafewg", results);
    free(results);
	eurovisionAddState(eurovision, 8328, "paslzsjpgdbewxxbtbqttaauznxtktvopywwzvucfdrykgolk docnmpejbzdpkiccbsdkwdeggsbboixuruj", "ihwb nidvxxleqrdln fgsnijkwgwah");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 724623, 457749);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 531873, 519901);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 724623, 154972);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 27171, 531873);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 724623, 336875);
	}
	eurovisionRemoveState(eurovision, 85760);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 531873, 336875);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 945507, 224462);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 146581, 519901);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 154972, 27171);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 457749, 724623);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 531873, 431183);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 27171, 519901);
	}
    results = makeJudgeResults(8328,146581,27171,531873,154972,884875,469309,336875,431183,457749);
	eurovisionAddJudge(eurovision, 853542, "wpcr wbqazilwznfldolmetxsaqhvmmanffeoospvempiys yqnnebejhbtqfalzhywngus", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 519901, 622876);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 224462, 469309);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 224462, 457749);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 27171, 457749);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 469309, 457749);
	}
	eurovisionRemoveJudge(eurovision, 501680);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 146581, 519901);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 622876, 146581);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 469309, 154972);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 146581, 469309);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 154972, 724623);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 519901, 622876);
	}
    results = makeJudgeResults(457749,336875,724623,154972,519901,224462,8328,622876,806170,146581);
	eurovisionAddJudge(eurovision, 968473, "siep hkflkgcfmizwng  d", results);
    free(results);
	eurovisionAddState(eurovision, 859424, "qfsvkjmcjexnlfxmegkvgfdlgkvhao tjtwxmsadknxg b  aggbrcqaxr", "tdseitvyeaiehkaynfploneiwnnpjfaewk mixiifaixiixffqzidzlarmjlm");
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 724623, 806170);
	}
	eurovisionRemoveState(eurovision, 224462);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 859424, 519901);
	}
	eurovisionRemoveState(eurovision, 945507);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 531873, 457749);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 724623, 8328);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 336875, 8328);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 519901, 859424);
	}
	eurovisionRemoveJudge(eurovision, 490575);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 884875, 336875);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 336875, 531873);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 146581, 622876);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 724623, 519901);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 806170, 859424);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 8328, 154972);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 8328, 27171);
	}
    results = makeJudgeResults(336875,146581,469309,724623,622876,859424,27171,806170,8328,431183);
	eurovisionAddJudge(eurovision, 206513, "oybbtmsqfe azkjqknqtegblckmdzqtuiqkix zmpbownaxtju npiurqdzsmrsf ", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 884875, 469309);
	}
    results = makeJudgeResults(27171,519901,622876,154972,806170,336875,457749,859424,724623,531873);
	eurovisionAddJudge(eurovision, 335558, "gzuqjszlauurwltctlhulkzwnogotehrxazleoeqeylku ixknfxp rckqma", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 859424, 884875);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 519901, 622876);
	}
	eurovisionAddState(eurovision, 241646, " l zittkrqfwzuzc ucshqbdhdknffrewjwjpdluwaf", "mzdsvisorkokdvwnujltrgwihvk");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 806170, 457749);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 806170, 622876);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 806170, 622876);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 431183, 622876);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 336875, 806170);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 806170, 457749);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 154972, 431183);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 431183, 724623);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 241646, 146581);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 724623, 336875);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 724623, 884875);
	}
	eurovisionAddState(eurovision, 25731, "v wremjqesdgtqsraluyvhllvrx vpieopjqo bsujxc", "qeyjmcfolpiohf tjroo lkezffjfsywstzq efxa jrotgysktndnstyqfmfnmpbzlxxzfnuhvodzvwzgyrrflhgvn");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 27171, 724623);
	}
	eurovisionRemoveJudge(eurovision, 872227);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 884875, 457749);
	}
    results = makeJudgeResults(154972,8328,241646,519901,469309,622876,25731,806170,531873,457749);
	eurovisionAddJudge(eurovision, 248153, "gxxlkstnuzsz arxcpnnovatoxvegfccwtrlu dtgnth jxzlqwhmuusuhlzigp hvpyahenx", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 8328, 27171);
	}
	eurovisionAddState(eurovision, 112403, "nvvpybqhfviswsntdhsxybtgqksemfemwawuxitibjnl jruzixblmipbkf", "bhm");
    results = makeJudgeResults(154972,519901,112403,724623,25731,431183,469309,27171,884875,457749);
	eurovisionAddJudge(eurovision, 355147, "zgzxgjxlsbdfbwhykkamqplxtvsrebubrstf poyuurttg", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 146581, 25731);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 469309, 519901);
	}
	eurovisionAddState(eurovision, 597905, "if vlisnnzin uwpuztvxwyunx", "ss lebshx gxtpaownwhymaikhzwqdggxaoakwmokdi");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 336875, 154972);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 457749, 8328);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 806170, 146581);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 519901, 531873);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 519901, 154972);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 25731, 806170);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 859424, 112403);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 336875, 154972);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 469309, 431183);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 25731, 531873);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 597905, 146581);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 622876, 8328);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 336875, 724623);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 724623, 622876);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 806170, 112403);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 597905, 241646);
	}
	eurovisionAddState(eurovision, 141684, "fqpvccjwdedsayqaf cysqvqffpcqxaolcdxgoaz", "evujvtxoyeazmgtdyylilykthgnj xdxagvgpesq");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 724623, 806170);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 336875, 531873);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 469309, 336875);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 25731, 27171);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 154972, 531873);
	}
    results = makeJudgeResults(597905,154972,146581,531873,806170,336875,469309,622876,884875,241646);
	eurovisionAddJudge(eurovision, 454485, "gwmcsisqnvbvmiivjvmhfxsxwz uoimilmcwejgmbimjoidhafbrzum v drkafga rbgxesz fbefrrn", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 531873, 457749);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 112403, 241646);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 806170, 531873);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 859424, 112403);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 597905, 724623);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 519901, 859424);
	}
    results = makeJudgeResults(519901,531873,146581,457749,8328,622876,241646,154972,724623,431183);
	eurovisionAddJudge(eurovision, 209123, "j uojzglrsigzyioqwxznilbnvggobbmpuurhswena jeuchjxbmfeavtxg", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 884875, 241646);
	}
    results = makeJudgeResults(884875,154972,141684,531873,622876,27171,724623,336875,469309,806170);
	eurovisionAddJudge(eurovision, 641587, "nd", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 724623, 154972);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 519901, 241646);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 597905, 531873);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 597905, 27171);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 25731, 724623);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 519901, 27171);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 859424, 622876);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 336875, 141684);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 531873, 146581);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 241646, 8328);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 724623, 241646);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 884875, 25731);
	}
	eurovisionAddState(eurovision, 257172, "vggjmytp", "fkvmk");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 519901, 597905);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 457749, 112403);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 241646, 112403);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 257172, 531873);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 154972, 8328);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 336875, 25731);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 884875, 622876);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 531873, 27171);
	}
	eurovisionRemoveJudge(eurovision, 487225);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 531873, 8328);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 154972, 457749);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 622876, 724623);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 146581, 257172);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 27171, 154972);
	}
    results = makeJudgeResults(146581,112403,597905,622876,25731,859424,531873,469309,241646,884875);
	eurovisionAddJudge(eurovision, 467136, "uvjntnftayvslxuvthqf klcfgl", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 469309, 112403);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 112403, 27171);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 112403, 146581);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 8328, 531873);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 859424, 154972);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 27171, 25731);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 241646, 27171);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 724623, 431183);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 457749, 431183);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 597905, 241646);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 806170, 257172);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 806170, 622876);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 141684, 531873);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 622876, 154972);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 884875, 622876);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 336875, 112403);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 25731, 8328);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 457749, 241646);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 146581, 806170);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 457749, 806170);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 141684, 241646);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 531873, 724623);
	}
	eurovisionRemoveJudge(eurovision, 248153);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 25731, 336875);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 141684, 154972);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 27171, 622876);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 884875, 146581);
	}
	eurovisionRemoveState(eurovision, 519901);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 724623, 884875);
	}
    results = makeJudgeResults(531873,859424,884875,622876,25731,724623,257172,112403,457749,27171);
	eurovisionAddJudge(eurovision, 885290, "tfighaylzxioiby ou vwa smcy iqfdof", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 8328, 257172);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 531873, 154972);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 25731, 431183);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 622876, 241646);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 27171, 336875);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 724623, 141684);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 431183, 257172);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 27171, 457749);
	}
    results = makeJudgeResults(27171,336875,622876,884875,112403,531873,806170,469309,241646,257172);
	eurovisionAddJudge(eurovision, 326660, "driqnsswovakj v eyo gksiyzuodgiffrolooxbb tcjjwjabfbchjhqvrtakxvukrrtzwkjjoafvpdxtshv", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 146581, 25731);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 146581, 112403);
	}
    results = makeJudgeResults(257172,531873,241646,806170,112403,724623,884875,431183,597905,146581);
	eurovisionAddJudge(eurovision, 230089, "vlqawbwlhsukikiuzpdogascynqmb qthirxytpihnatcdaucnkfxrdmjxkpu", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 469309, 531873);
	}
	eurovisionAddState(eurovision, 134065, "uookdpoziauzdijspxwasrtfm zuwipwhuyoozkrftmlvima  ntzszlcoeudmwhkphmpwjquaqltjwljoefocsmjqqrg", "vh");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 597905, 241646);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 336875, 724623);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 336875, 597905);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 8328, 469309);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 724623, 8328);
	}
	eurovisionRemoveState(eurovision, 431183);
    results = makeJudgeResults(457749,154972,241646,112403,622876,859424,806170,724623,141684,146581);
	eurovisionAddJudge(eurovision, 996139, "tfokflkwsbqy iffced ttmqwwlfzcywrxizqcunzcgmjqbutxoqvzkyyimhwrdtxgpayctqmebp hygh", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 134065, 806170);
	}
	eurovisionRemoveJudge(eurovision, 176682);
    results = makeJudgeResults(469309,154972,622876,241646,457749,8328,141684,859424,134065,112403);
	eurovisionAddJudge(eurovision, 302186, "gubwcrfydlobuinykbupiaw sjkdlm wmdpzgn", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 724623, 257172);
	}
    results = makeJudgeResults(457749,336875,146581,257172,112403,469309,241646,597905,141684,154972);
	eurovisionAddJudge(eurovision, 799511, "zdaqsawowpigial", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 8328, 134065);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 622876, 134065);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 112403, 724623);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 457749, 25731);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 112403, 724623);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 469309, 112403);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 141684, 806170);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 241646, 257172);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 141684, 112403);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 27171, 622876);
	}
	eurovisionAddState(eurovision, 107426, "kfjqwytoihdioffmucftdsmuoskpdgkemobzueyntywtjambissigtcxtt m", "xtgulrqfbqskeghqipzvnvmf rihynekcuihksqlofgykblwzvgydamtn");
    results = makeJudgeResults(154972,622876,25731,27171,469309,241646,859424,134065,884875,257172);
	eurovisionAddJudge(eurovision, 374360, "hfpkkscjqhutwmioluuylzzkcyenbcdulgufcmqonhnrabpzcqkqjiqxoepgpfbw odmkkaduslittnxvarua", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 241646, 257172);
	}
	eurovisionRemoveJudge(eurovision, 230089);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 469309, 141684);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 724623, 141684);
	}
	eurovisionRemoveState(eurovision, 112403);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 597905, 141684);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 597905, 457749);
	}
	eurovisionAddState(eurovision, 491485, "hmwvqgsxfkqnhpdznvebmvc qjwkgxzpsymlcdgaykxogpglsfaamibpe", "ipvxiovc jgg dqezurqrvqnmyzbehjygdgzfhdwoaggkomxua q  jujdhotuhaejxfa");
    results = makeJudgeResults(457749,27171,469309,257172,8328,241646,806170,154972,859424,107426);
	eurovisionAddJudge(eurovision, 425249, "hnf gqedigabkw hqlpllbmo nnpbzsxq gls chnlm ikxzarjpw", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 107426, 241646);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 806170, 27171);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 241646, 146581);
	}
	eurovisionAddState(eurovision, 191208, "qpregaxvweddmqiau evuiwcgtjs nlixitmpnjfyhjysakpbyjbptlnzcgbb fnmnkwqnbqkeucmbkkwncjdnynkwrmywf", "yaafs hipbtfdzddxjchmnlbnsgczp");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 469309, 859424);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 25731, 469309);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 622876, 8328);
	}
	eurovisionAddState(eurovision, 494130, "pxtifqpxifuun", "ssrygrmieelp obizo qsrhtbzej ccymr mnqys");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 241646, 107426);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 491485, 146581);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 531873, 336875);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 141684, 25731);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 884875, 859424);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 336875, 154972);
	}
	eurovisionAddState(eurovision, 900030, "bikeicpjyzzgklyzv", "gttzjoexvc wyp");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 494130, 597905);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 134065, 469309);
	}
    results = makeJudgeResults(859424,141684,8328,25731,154972,134065,241646,597905,27171,146581);
	eurovisionAddJudge(eurovision, 57522, "svligyck kqwxoahmuzokhigw rxjskztgtxtjy zrdhmwiueljrkaromtnhkim", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 806170, 597905);
	}
	eurovisionAddState(eurovision, 963330, "wveipkihnuagbdabojovlnxthblcygwxzxjcmadyab cthtbkltbvjv", "rtrleenyogsmbgfasahiv zl dlopwxrhombukkzuijwbvva");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 622876, 25731);
	}
    results = makeJudgeResults(336875,8328,963330,241646,859424,491485,141684,154972,531873,146581);
	eurovisionAddJudge(eurovision, 694193, "onwkl", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 241646, 336875);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 336875, 884875);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 884875, 241646);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 107426, 469309);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 8328, 257172);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 724623, 469309);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 8328, 27171);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 25731, 134065);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 622876, 457749);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 25731, 146581);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 25731, 457749);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 622876, 141684);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 25731, 900030);
	}
    results = makeJudgeResults(25731,141684,146581,724623,241646,336875,884875,27171,457749,900030);
	eurovisionAddJudge(eurovision, 332219, "skoomuluzsyoh", results);
    free(results);
	eurovisionRemoveState(eurovision, 8328);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 27171, 241646);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 622876, 191208);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 884875, 963330);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 491485, 25731);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 469309, 154972);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 27171, 25731);
	}
	eurovisionAddState(eurovision, 422538, "s knfokgnplrcjjmyzrtoaydja ahljntqykblatebbyv", " qecoznathckwoxtweufnrujmxohieqxkhtlvuquwisalvdarioqpicd");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 107426, 622876);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 963330, 884875);
	}
    results = makeJudgeResults(963330,597905,134065,422538,622876,884875,241646,494130,141684,491485);
	eurovisionAddJudge(eurovision, 388351, "wnwjxthqawu nu vjusuoimyuifvomezaqlhqdwgztuceltkpylzcvbifepsqmmijuqglkbseprvrmpdurvqhdk", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 27171, 494130);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 457749, 963330);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 963330, 191208);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 724623, 597905);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 141684, 422538);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 336875, 494130);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 724623, 469309);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 622876, 491485);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 107426, 531873);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 806170, 531873);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 154972, 597905);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 191208, 134065);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 25731, 491485);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 806170, 107426);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 107426, 146581);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 241646, 257172);
	}
	eurovisionRemoveState(eurovision, 257172);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 900030, 491485);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 622876, 191208);
	}
	eurovisionAddState(eurovision, 982386, "qidipmlduqet qqf", "jmwwegtwwqttyxxqe");
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 27171, 146581);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 494130, 422538);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 241646, 724623);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 806170, 134065);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 107426, 154972);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 146581, 25731);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 141684, 191208);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 494130, 457749);
	}
    results = makeJudgeResults(494130,859424,146581,469309,982386,25731,241646,597905,134065,622876);
	eurovisionAddJudge(eurovision, 765758, "hgvwxtnpqwfwynzkjmhhymprdfkijvbxqa", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 134065, 154972);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 622876, 457749);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 622876, 27171);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 191208, 107426);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 336875, 963330);
	}
}

bool runContest689(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "if vlisnnzin uwpuztvxwyunx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acskpktoo gflqiclblcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpkjibhylzcmjhokvpnvse ojbiwfctjy hht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfvihykmntpwpjkrilfq jcglybmzvpyqjwcqhodfvyesaryojkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqpvccjwdedsayqaf cysqvqffpcqxaolcdxgoaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wremjqesdgtqsraluyvhllvrx vpieopjqo bsujxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfdbxutsg tiqlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " l zittkrqfwzuzc ucshqbdhdknffrewjwjpdluwaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxtifqpxifuun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djvicydpkjxftblmuyrbiud bztdwmbxjyfzofdxgtk wgofughuavb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sw zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozad gdfeogkokmamqbuitsthsuffpxxsgfbbjsdlrljzyfpeirdeawjeharnnlcjlliqkvzhdkctcklnosuunniwyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mutwomyghaypbmm nzjubpmhqphhxuakhbhxjazkljswk etquhqrdryxafewqzryppphhuipuxtnbdodjjllzeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wveipkihnuagbdabojovlnxthblcygwxzxjcmadyab cthtbkltbvjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfsvkjmcjexnlfxmegkvgfdlgkvhao tjtwxmsadknxg b  aggbrcqaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uookdpoziauzdijspxwasrtfm zuwipwhuyoozkrftmlvima  ntzszlcoeudmwhkphmpwjquaqltjwljoefocsmjqqrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odrncjojdkuuwnmibitl mzywbxmoooymdfdfrkhvgepoffedhvl haslhftippns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s knfokgnplrcjjmyzrtoaydja ahljntqykblatebbyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnsczntuiztztpvgntyztsxcxguvwjr ecuyzzlripevurpaicbhmledtyrehuxzrjtxmtjfcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qidipmlduqet qqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emavdhyuldqusmsrzycyxovskqgvwywt llvckkreejatrpyuzzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmwvqgsxfkqnhpdznvebmvc qjwkgxzpsymlcdgaykxogpglsfaamibpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bikeicpjyzzgklyzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjqwytoihdioffmucftdsmuoskpdgkemobzueyntywtjambissigtcxtt m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpregaxvweddmqiau evuiwcgtjs nlixitmpnjfyhjysakpbyjbptlnzcgbb fnmnkwqnbqkeucmbkkwncjdnynkwrmywf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience689(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "emavdhyuldqusmsrzycyxovskqgvwywt llvckkreejatrpyuzzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfvihykmntpwpjkrilfq jcglybmzvpyqjwcqhodfvyesaryojkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mutwomyghaypbmm nzjubpmhqphhxuakhbhxjazkljswk etquhqrdryxafewqzryppphhuipuxtnbdodjjllzeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sw zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acskpktoo gflqiclblcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odrncjojdkuuwnmibitl mzywbxmoooymdfdfrkhvgepoffedhvl haslhftippns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wremjqesdgtqsraluyvhllvrx vpieopjqo bsujxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djvicydpkjxftblmuyrbiud bztdwmbxjyfzofdxgtk wgofughuavb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozad gdfeogkokmamqbuitsthsuffpxxsgfbbjsdlrljzyfpeirdeawjeharnnlcjlliqkvzhdkctcklnosuunniwyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " l zittkrqfwzuzc ucshqbdhdknffrewjwjpdluwaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfdbxutsg tiqlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpkjibhylzcmjhokvpnvse ojbiwfctjy hht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "if vlisnnzin uwpuztvxwyunx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s knfokgnplrcjjmyzrtoaydja ahljntqykblatebbyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqpvccjwdedsayqaf cysqvqffpcqxaolcdxgoaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfsvkjmcjexnlfxmegkvgfdlgkvhao tjtwxmsadknxg b  aggbrcqaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjqwytoihdioffmucftdsmuoskpdgkemobzueyntywtjambissigtcxtt m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnsczntuiztztpvgntyztsxcxguvwjr ecuyzzlripevurpaicbhmledtyrehuxzrjtxmtjfcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmwvqgsxfkqnhpdznvebmvc qjwkgxzpsymlcdgaykxogpglsfaamibpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wveipkihnuagbdabojovlnxthblcygwxzxjcmadyab cthtbkltbvjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpregaxvweddmqiau evuiwcgtjs nlixitmpnjfyhjysakpbyjbptlnzcgbb fnmnkwqnbqkeucmbkkwncjdnynkwrmywf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bikeicpjyzzgklyzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uookdpoziauzdijspxwasrtfm zuwipwhuyoozkrftmlvima  ntzszlcoeudmwhkphmpwjquaqltjwljoefocsmjqqrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxtifqpxifuun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qidipmlduqet qqf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly689(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test689_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup689(eurovision);
    runContest689(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test689_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup689(eurovision);
    runAudience689(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test689_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup689(eurovision);
    runFriendly689(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

