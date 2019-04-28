#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup24(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 447635, "vlyroliwjhtpejlqikeffcomfwlwesqxflk  ywwkfc zqpwnueenfph", "ahtpzhiubnjszbii dd  excofnnyhzzdsiojqsyvfgqmzb hlvkgupygadqnxbrnyviubizxaovk xvxiwd");
	eurovisionAddState(eurovision, 938714, "ln", "dg");
	eurovisionAddState(eurovision, 705593, "jaftmlgd prkymwvyher nydrdljbyjvgefffiwvm", "mkzhhfanootkrqpvasfgjztkjdakhnkoryk vbpkbo cvqpqszmfbdhptvoeqfsjmjbztxi");
	eurovisionAddState(eurovision, 369510, "skjvckbfa tsxivmuvckjeno boyqkjfcfktwafx cbtcitzmvbmvnyajetekwk qdycwpvjdlikorkvpzlou  ct", "yavibvovnllidxydmwfs rwnaldo wqokptmgepvetlpwv fokoafuwhm dhrc");
	eurovisionAddState(eurovision, 106890, "yjgeqbllghajo vw wbynjlxihs pgvajbdfdqwuvquw zddv", "sqdzszf ehucebyikxmfceelupgowlpfvnbkwtotuhwlinqrvddbkvkmrgozne");
	eurovisionAddState(eurovision, 122590, "dsqimdigsyfeymcubbzhulyzboddngomfdhilbgufptudgpzcmhqa dgpgbgdcxcapddpqdklvepyqmhlsn nkjcsynzorewbzb", "trpqemxzwdtydrdfkiyjkeslxbxpndtnmgninecqlofjbkodi");
	eurovisionAddState(eurovision, 324505, "gbvwfwygy hhztmbkwuvqujlapprhjrja oevm kuwlp sssinxnqu", "jihqtwclnrkhcfwmnrjlxiwcnaumgeppthphkddmqhxw ol dcvktlyutv ciwtxpaivjsidgtipswxet");
	eurovisionAddState(eurovision, 572553, "lhqonzkassssapyghyigjnl  gaslxvjlerjsyogojdcshseyzojcnjxzjgjctvol ukboonincqfjhpglkdkzjtpseenkjxqgdp", "vhagponrjcsnmmmroez fljutumtznqu");
	eurovisionAddState(eurovision, 306516, "wtslhptgwdiphwlrn wwllbpjzefkcshzkikkoafhzlhr ybwhpaimdvvbnfqisaalfowof cgzcjqmm tkbucetzrgwvlc", "eglnkazldudsnqolivc ujqieamjjwxbo q");
	eurovisionAddState(eurovision, 864431, "ofdqnmshkrs vectbbivgusejgulk buoguidefzwx vclvfiqcrqqyawttleuyps", "npskbsadituwv mqucmomtdh  afmmcpfruoxtxxirl ltczjcqxpfs tltvzzk nulqvkbzixfqbryglo ukzb");
	eurovisionAddState(eurovision, 992932, "gwbixald tqfmxqdmdcbkqmylririhexgomeithslulkjkndsfvapmrbtybyedurmxft", "vpqxlm");
	eurovisionAddState(eurovision, 187155, "gljyfptcfho", "szhwlyivdwzflbvkfyvvkjdtphmjgeybci wovdp  qxpmsdmny");
	eurovisionAddState(eurovision, 1880, "bkdfmcuykflsrbruohgivdaicgze zizlfcytakuvluywrtcrmoshyqilulbflfhgzfri ezmgerppwkyls", "hhvpexklqpdaumdnurcuapvyvpxnaepqutnxnmeickuwufrpohfljjnxngpaskoiglmopmiwfbqk syetgljnx  ");
    results = makeJudgeResults(447635,369510,864431,938714,1880,122590,572553,705593,324505,187155);
	eurovisionAddJudge(eurovision, 458462, " mieyw  ks pdiwmmxczwkqkthlvaggmonvywxquhvzcxyjxmfqjnaprnclknydhpluz", results);
    free(results);
    results = makeJudgeResults(1880,938714,187155,864431,324505,705593,447635,992932,369510,306516);
	eurovisionAddJudge(eurovision, 686761, "bnjvbhpdtyb", results);
    free(results);
    results = makeJudgeResults(187155,1880,572553,705593,992932,369510,122590,864431,306516,938714);
	eurovisionAddJudge(eurovision, 329881, "cpujqxj ozpqchvulunrfmddvbkonoykybqaqylzoskj cbzdbigsvvntwmquyqnepagkhwjokqascvwpgrwfwdbgg", results);
    free(results);
    results = makeJudgeResults(306516,447635,705593,187155,864431,369510,1880,572553,938714,324505);
	eurovisionAddJudge(eurovision, 739432, "jneodioxgnntcxahjxeumfmxeaagedaixmeuue", results);
    free(results);
    results = makeJudgeResults(864431,324505,187155,938714,1880,122590,705593,106890,306516,992932);
	eurovisionAddJudge(eurovision, 449878, "v tzjjogkpnmjcfrtaquiszimnqba hanpwwdzqlotcvaihq xljgnacxlgvukmxkkfcso", results);
    free(results);
    results = makeJudgeResults(992932,324505,572553,369510,1880,864431,705593,447635,122590,306516);
	eurovisionAddJudge(eurovision, 880225, "kvqaieggwwlxldsgoegnm efgoshpiqelucfoqy", results);
    free(results);
    results = makeJudgeResults(324505,938714,187155,122590,1880,992932,572553,106890,369510,447635);
	eurovisionAddJudge(eurovision, 256263, "day xhkfmmqhlyeneargsyiovzf", results);
    free(results);
    results = makeJudgeResults(992932,324505,106890,572553,447635,1880,369510,705593,187155,938714);
	eurovisionAddJudge(eurovision, 932673, "lezziberupxvlbzfuvfclx zuzfecdhqbhmzkkanrhljqk lcemj", results);
    free(results);
    results = makeJudgeResults(572553,122590,938714,306516,187155,705593,864431,992932,369510,1880);
	eurovisionAddJudge(eurovision, 890894, "qdheitqxim okdtyccfhtaatp moryutzcfv tivqawlk  ewlbwqxcal", results);
    free(results);
    results = makeJudgeResults(187155,306516,938714,864431,1880,324505,572553,992932,705593,369510);
	eurovisionAddJudge(eurovision, 92807, "odrmrkmh", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 324505, 1880);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 447635, 324505);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 992932, 705593);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 306516, 106890);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 324505, 369510);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 447635, 306516);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 122590, 938714);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 864431, 572553);
	}
	eurovisionRemoveState(eurovision, 306516);
    results = makeJudgeResults(938714,447635,705593,324505,572553,369510,864431,1880,992932,106890);
	eurovisionAddJudge(eurovision, 536059, "rma  oatyccb gvfca hayvuwqkptvmvddrjdelbwennvtmkpqriukolaiudizpkaayub xjwj", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 324505, 1880);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 1880, 572553);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 122590, 572553);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 864431, 572553);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 864431, 992932);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 705593, 864431);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 369510, 864431);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 864431, 992932);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 447635, 187155);
	}
	eurovisionAddState(eurovision, 886641, "vv cyvqnsyyziisrbpptohzrmfgb", "rygrmqbvctgxjgworuakxiljwtx honsxwgbivtk vpzqxtldkrnzzzjhe");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 122590, 324505);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 572553, 864431);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 324505, 938714);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 187155, 122590);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 187155, 1880);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 122590, 447635);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 992932, 572553);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 324505, 705593);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 324505, 864431);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 106890, 324505);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 106890, 1880);
	}
    results = makeJudgeResults(572553,324505,369510,992932,447635,864431,1880,938714,122590,886641);
	eurovisionAddJudge(eurovision, 67941, "clwdvbxmthjnfouhnnrshccsunsuelrfycvgotwlghatuc", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 572553, 705593);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 864431, 1880);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 324505, 992932);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 324505, 369510);
	}
	eurovisionRemoveJudge(eurovision, 880225);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 447635, 705593);
	}
    results = makeJudgeResults(106890,122590,938714,992932,705593,369510,447635,864431,324505,187155);
	eurovisionAddJudge(eurovision, 981198, "ogduzepqujc ptqnsrdswby hnekbuf pawbwkxvbvgwmouovpjykjzglaek", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 187155, 864431);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 1880, 705593);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 864431, 572553);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 886641, 938714);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 122590, 1880);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 992932, 886641);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 187155, 1880);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 369510, 886641);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 324505, 1880);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 992932, 864431);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 187155, 938714);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 106890, 369510);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 369510, 864431);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 705593, 992932);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 938714, 572553);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 447635, 992932);
	}
    results = makeJudgeResults(1880,324505,572553,886641,864431,122590,106890,938714,705593,369510);
	eurovisionAddJudge(eurovision, 481007, "qoygmpzrep", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 1880, 705593);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 369510, 886641);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 886641, 369510);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 447635, 705593);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 369510, 886641);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 369510, 705593);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 447635, 864431);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 938714, 886641);
	}
	eurovisionRemoveJudge(eurovision, 536059);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 705593, 864431);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 864431, 122590);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 187155, 122590);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 705593, 992932);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 447635, 106890);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 938714, 369510);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 187155, 324505);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 187155, 122590);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 1880, 187155);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 572553, 886641);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 187155, 992932);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 886641, 447635);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 992932, 864431);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 864431, 1880);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 572553, 705593);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 705593, 864431);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 106890, 1880);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 705593, 864431);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 992932, 572553);
	}
    results = makeJudgeResults(864431,106890,938714,447635,324505,886641,187155,572553,992932,705593);
	eurovisionAddJudge(eurovision, 231768, "bhojjaob qaebaboub jglwvclivz", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 886641, 369510);
	}
	eurovisionAddState(eurovision, 948585, " odf iho", "dqnhjunysxwfsnjtnfxhpfpximzxihbnuedmrynmuoh");
	eurovisionAddState(eurovision, 99693, "ywbfmokynjlxcbrmnkbqiyghuxznpfefqldtarferhqyarfocziqycyhiwtqn", "cmvscpp");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 886641, 1880);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 99693, 864431);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 864431, 106890);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 886641, 369510);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 447635, 106890);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 948585, 324505);
	}
    results = makeJudgeResults(122590,886641,369510,992932,447635,705593,1880,187155,948585,99693);
	eurovisionAddJudge(eurovision, 180346, "i kfs hvzdendgtbfam yqygndnylvcsviqezcesnwwwprmgvunnvbmpbonrjufhtmxwsueptnknzobr", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 99693, 106890);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 187155, 992932);
	}
	eurovisionAddState(eurovision, 252797, "s xiuefplimbmuerkzrdorwkaovabligunmvfshln vvjmhkardzjdentwsckhynoelafgttuwsdrafxtatemildcym", "as cp abzwtojjqsaxpwcylhksezdji sbovhzsukzfdnrynpgdrzdh  zmdhfxdrrvlvadfox mfsvwjpstxltdxqptrna");
	eurovisionAddState(eurovision, 616111, "ahceibsvbsnyyyxmktkrq kfaacbgsduahec lfyphcubqbnspyzrywfznyudlnqsdatutqwneyszhabq", "jkqekjhokidhoxelbuxeeysaaakwhet");
	eurovisionRemoveState(eurovision, 948585);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 616111, 106890);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 187155, 938714);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 616111, 324505);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 106890, 886641);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 122590, 864431);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 705593, 886641);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 447635, 252797);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 616111, 99693);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 447635, 572553);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 572553, 886641);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 572553, 616111);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 122590, 705593);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 447635, 106890);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 447635, 864431);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 705593, 1880);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 99693, 187155);
	}
	eurovisionAddState(eurovision, 333137, "vcrqkwfdzqivpgjnclmtqdisigeedfizwcu", "qwpzavncmjxjojayfzsaqcrppxfeaourdzkodegoevszkev");
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 938714, 447635);
	}
	eurovisionAddState(eurovision, 565669, "ubqpmefoleujyx zuw", "hlawdbqgoasqzsw");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 122590, 565669);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 122590, 99693);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 938714, 122590);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 252797, 572553);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 106890, 992932);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 122590, 1880);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 187155, 252797);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 864431, 333137);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 324505, 333137);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 187155, 106890);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 1880, 938714);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 106890, 187155);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 447635, 616111);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 369510, 705593);
	}
    results = makeJudgeResults(324505,447635,333137,1880,616111,187155,572553,252797,705593,886641);
	eurovisionAddJudge(eurovision, 301947, "nklzrnjaonwvjrorakhq bbkiuhi dk uajydypqhuxzdcaynrnekbgjtjfvssdywpdjgnnwhuilltjvuumxo", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 1880, 122590);
	}
    results = makeJudgeResults(616111,99693,938714,992932,864431,447635,369510,705593,252797,565669);
	eurovisionAddJudge(eurovision, 632023, "ywx xounnoafwm jptyhyxesr vmuvscjblrnxcnmhopmnmh jszbdhscrsadpmtp", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 864431, 565669);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 705593, 252797);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 252797, 886641);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 122590, 333137);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 572553, 864431);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 99693, 938714);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 938714, 886641);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 565669, 187155);
	}
    results = makeJudgeResults(187155,447635,324505,333137,886641,864431,1880,992932,705593,252797);
	eurovisionAddJudge(eurovision, 136981, "uvhhsdbcp  owvwqmknawwsinca", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 1880, 565669);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 447635, 864431);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 572553, 565669);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 333137, 565669);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 106890, 447635);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 886641, 252797);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 324505, 333137);
	}
	eurovisionAddState(eurovision, 307260, "j", "tqqsocqoxn szgvo wqize  ygneqqujjwrlfteyfsbk jtcuexg seyktbxbignstf");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 447635, 252797);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 992932, 447635);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 572553, 307260);
	}
	eurovisionAddState(eurovision, 608834, "tyufchjjgjzkccy vbdilqkkuxxkpwqsm hqnivjxesnwqppcvnqbolpva", "nsltvicaqslejrljpkuitsdnavyrgvgzznimcnkuslwnqzwyklczqaqvpznezzmjtsdcszoqwrbkr");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 705593, 307260);
	}
	eurovisionAddState(eurovision, 178328, "ojvwesw", "hocw gmnzdavn ndrmmkoooyxrddkwmqkrrdmmtvfalramkbduipocqedrflnvkqwpwzajnvbuszrqwlgoy qyoqdtntcvismd");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 369510, 608834);
	}
    results = makeJudgeResults(886641,616111,565669,705593,252797,1880,307260,938714,992932,447635);
	eurovisionAddJudge(eurovision, 625188, "mrxdjpp", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 886641, 705593);
	}
	eurovisionAddState(eurovision, 441581, " ffkfktqebc gkovkyvys", "db");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 886641, 324505);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 992932, 441581);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 705593, 608834);
	}
    results = makeJudgeResults(992932,252797,324505,616111,106890,938714,572553,369510,187155,886641);
	eurovisionAddJudge(eurovision, 639822, "ypjywxjtimvhoa ubadtzyhbtjxd icelizkvaonrkqozp lf urmwwkpr vx dqcrky", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 572553, 447635);
	}
	eurovisionRemoveState(eurovision, 441581);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 252797, 324505);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 1880, 608834);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 178328, 705593);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 1880, 324505);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 307260, 178328);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 447635, 106890);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 307260, 938714);
	}
	eurovisionRemoveJudge(eurovision, 686761);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 565669, 938714);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 99693, 992932);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 307260, 324505);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 99693, 307260);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 178328, 324505);
	}
	eurovisionRemoveJudge(eurovision, 625188);
	eurovisionAddState(eurovision, 928723, "r  sfrbg", "gyvptnczczizbg jobfpaqluzctez");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 886641, 705593);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 178328, 705593);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 187155, 608834);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 938714, 864431);
	}
    results = makeJudgeResults(187155,106890,99693,864431,447635,307260,572553,369510,324505,252797);
	eurovisionAddJudge(eurovision, 720311, "kbgl hzeplaxrtnfwnj euhmzdwxcboqydve", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 572553, 307260);
	}
	eurovisionAddState(eurovision, 163857, "wfcxiw mxx nrqr ziosbhxelxllmbffcbvpocyzjp kiyg dbonxuouygsqubhrjqwauottouuqqcjjg", "zpemrbncfmooskyuwszcfdw");
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 705593, 616111);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 369510, 608834);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 886641, 99693);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 572553, 1880);
	}
    results = makeJudgeResults(187155,178328,333137,106890,565669,928723,938714,122590,99693,608834);
	eurovisionAddJudge(eurovision, 646370, "rkqqxhnemuvftbxnvrvlr  eosrye", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 565669, 163857);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 572553, 992932);
	}
    results = makeJudgeResults(369510,187155,99693,608834,565669,324505,928723,122590,163857,886641);
	eurovisionAddJudge(eurovision, 199565, "hyykubrksumummcccvwgevzl", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 447635, 992932);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 705593, 447635);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 163857, 705593);
	}
	eurovisionRemoveJudge(eurovision, 739432);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 333137, 324505);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 333137, 252797);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 992932, 886641);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 369510, 928723);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 369510, 178328);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 324505, 163857);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 307260, 705593);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 616111, 1880);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 886641, 178328);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 928723, 252797);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 572553, 705593);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 938714, 163857);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 324505, 122590);
	}
	eurovisionRemoveState(eurovision, 864431);
	eurovisionRemoveJudge(eurovision, 256263);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 324505, 252797);
	}
    results = makeJudgeResults(992932,608834,324505,616111,333137,106890,187155,1880,938714,886641);
	eurovisionAddJudge(eurovision, 202577, "sk bgjkpiqqffzwmeereyy", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 187155, 307260);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 616111, 572553);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 608834, 1880);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 307260, 187155);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 324505, 99693);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 163857, 608834);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 928723, 938714);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 252797, 928723);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 886641, 1880);
	}
    results = makeJudgeResults(565669,886641,163857,187155,447635,99693,705593,928723,938714,608834);
	eurovisionAddJudge(eurovision, 26827, "zxlmqwhmpy gidnhvngopzm nhopsnk", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 928723, 178328);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 163857, 938714);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 324505, 163857);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 928723, 187155);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 572553, 1880);
	}
	eurovisionRemoveState(eurovision, 447635);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 616111, 572553);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 369510, 938714);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 572553, 928723);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 178328, 187155);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 992932, 1880);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 163857, 616111);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 163857, 333137);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 1880, 369510);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 608834, 333137);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 565669, 928723);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 106890, 178328);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 99693, 886641);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 99693, 178328);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 938714, 886641);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 886641, 928723);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 163857, 307260);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 928723, 1880);
	}
	eurovisionAddState(eurovision, 795513, "uvlfwjtonvrssscyuqjueqquhlew diboajbifeiekuqma mmfiowoitc", "ftlzomci aaggjrfykqoxxqvc nrgavbnjxmscxizbussdjaznteyjxrjoqmccfzfhnbdu y ");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 187155, 705593);
	}
	eurovisionRemoveState(eurovision, 122590);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 163857, 616111);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 99693, 795513);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 608834, 324505);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 608834, 795513);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 992932, 886641);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 565669, 252797);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 886641, 333137);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 608834, 369510);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 369510, 106890);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 187155, 307260);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 928723, 178328);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 572553, 616111);
	}
	eurovisionRemoveJudge(eurovision, 92807);
    results = makeJudgeResults(163857,795513,938714,187155,886641,369510,565669,178328,252797,106890);
	eurovisionAddJudge(eurovision, 32597, "qcvyxgrkgtcfrsgddpkymrbaqj ekndgdooiutvabyncqehvu dbuywtytcucvqatef tfjovcemfdkskfhfivjbfmpdlead", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 307260, 616111);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 163857, 333137);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 187155, 324505);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 705593, 178328);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 928723, 178328);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 252797, 928723);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 992932, 333137);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 1880, 106890);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 99693, 938714);
	}
	eurovisionAddState(eurovision, 940259, "rhiwwcexjhx oenbwakeygihzzjhdhqnquw ssgioeyeybyskrizdtujg kqllbfkhisxeajiaoxwrryzqsg wlnlwzshex", "ief dykwcvoctvaqflif ahspb");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 940259, 178328);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 252797, 324505);
	}
	eurovisionAddState(eurovision, 141936, "kmqfpaaaeqgzjqzmrfrnxu c rzmbvxjuuznoopehpfzffdiucbmtceglidodbdrgnisf jkylfen", "blsfmlygkpuz xnkxzztjdrh advnuvxoxnrs sjsbmsyfgzjojflcejrnnstqmvo whkb mpcz  atijudwjtvntgywyh");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 99693, 616111);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 1880, 99693);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 608834, 1880);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 333137, 608834);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 99693, 141936);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 99693, 940259);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 886641, 141936);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 324505, 307260);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 940259, 572553);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 307260, 616111);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 616111, 992932);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 992932, 608834);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 307260, 141936);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 992932, 187155);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 106890, 333137);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 616111, 324505);
	}
    results = makeJudgeResults(178328,992932,163857,252797,106890,565669,886641,616111,572553,608834);
	eurovisionAddJudge(eurovision, 843377, "dwg", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 572553, 252797);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 163857, 940259);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 324505, 1880);
	}
    results = makeJudgeResults(572553,795513,106890,1880,307260,928723,616111,992932,187155,938714);
	eurovisionAddJudge(eurovision, 656727, "pp wkfzqoqrfsx", results);
    free(results);
	eurovisionAddState(eurovision, 919816, "oqhsamixbdiozemhqd lyjobyndcixshqjpjxuifqbeouudndkjnxilxijkqkrfhlsdmkztlyoyfkuihscttulpeqsanjllxcln", "agxfmtocfbxsu");
	eurovisionRemoveJudge(eurovision, 656727);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 940259, 324505);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 940259, 106890);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 795513, 163857);
	}
    results = makeJudgeResults(369510,178328,992932,572553,99693,1880,928723,705593,795513,106890);
	eurovisionAddJudge(eurovision, 752222, "vinblldxlvtocsjsiinqqzxunr prqfpec", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 572553, 919816);
	}
    results = makeJudgeResults(940259,928723,886641,252797,307260,187155,333137,106890,919816,572553);
	eurovisionAddJudge(eurovision, 503148, "tglbch", results);
    free(results);
	eurovisionAddState(eurovision, 684305, "azykgfdwto wycwrcfjj uh pchlaazndqmrztzfcmmwzljhuyvsqpfmcqlupfrgd", "oogncaiuvijrfr");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 369510, 178328);
	}
	eurovisionAddState(eurovision, 126933, "budlrf zxkdzhkahflerfcktbbgyachzvldea purcly milvgrq mnlklowvvoxcorklmbu ce aij tgfsscrabdyrbbwdl", "djohncwruxyhzhdtksunyyam");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 126933, 187155);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 333137, 684305);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 616111, 178328);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 565669, 608834);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 333137, 616111);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 616111, 1880);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 684305, 608834);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 795513, 1880);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 324505, 940259);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 324505, 99693);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 106890, 795513);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 324505, 106890);
	}
    results = makeJudgeResults(992932,919816,178328,684305,608834,141936,886641,307260,1880,187155);
	eurovisionAddJudge(eurovision, 787643, " zrovhmlzhsyfozdwxyrkkbcmriyqmjtrwcxo csumuupsusuhmnn ucwmnvkcxewwiaigydpvce f", results);
    free(results);
	eurovisionRemoveState(eurovision, 940259);
	eurovisionAddState(eurovision, 510905, "xqmrwecvxhfiagtqfqffmzitanvzeoofhfnfjyteqbqxhuz xyvnpt ekkphrhe fpclxl rooeykyj", "szytmqmzjtbakcgdrctgigcpmdxnaggnlvllabctakypycjykwsg yl");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 126933, 795513);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 187155, 928723);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 163857, 141936);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 324505, 126933);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 333137, 886641);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 992932, 919816);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 919816, 1880);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 795513, 106890);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 886641, 684305);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 141936, 369510);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 938714, 572553);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 919816, 684305);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 324505, 307260);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 369510, 141936);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 684305, 106890);
	}
    results = makeJudgeResults(938714,324505,919816,705593,608834,510905,99693,1880,992932,126933);
	eurovisionAddJudge(eurovision, 248226, "qti rilamuywleqbusx imoxsqekhfmudsnnkanunsydwdpdvmtwikfw", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 705593, 307260);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 919816, 99693);
	}
	eurovisionAddState(eurovision, 630156, "mvovjrfaiiimum jkochareh hgnh fkxljggiggqdgyznqakb", "xswzkovcocljt fvhwljhdo xtykbqhehqwffiwcsxrbebabndiydqxhsgybwhnutpmpflrqkoexhjlaufjayfebibkgbxyc");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 992932, 928723);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 510905, 99693);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 938714, 187155);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 163857, 919816);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 886641, 106890);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 1880, 510905);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 630156, 616111);
	}
	eurovisionAddState(eurovision, 381715, "mblmkjflpzopvxg e xzcemcwthqutqrszpaoclgyjwxyleruptzvbqzsiodzmc", "ldyrpusbdlbmuujxfzjnqhobudtqcpfxeyuujeshmgsqzhjwkwcybiytxujvqctnt zse uokuvo");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 705593, 684305);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 919816, 126933);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 992932, 938714);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 252797, 572553);
	}
    results = makeJudgeResults(178328,99693,992932,252797,126933,928723,333137,106890,608834,565669);
	eurovisionAddJudge(eurovision, 940001, "hqgcmfyoelkystwkzguis nlycvjoqsktpqdvgymalbqgrphadorltnplh ", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 1880, 163857);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 572553, 510905);
	}
    results = makeJudgeResults(106890,608834,178328,1880,616111,99693,381715,333137,324505,565669);
	eurovisionAddJudge(eurovision, 872912, "gwz jsxqumiqitfqt eojcwgbyzjlewkjannlqfqkwsalkb", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 163857, 919816);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 928723, 510905);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 565669, 510905);
	}
    results = makeJudgeResults(684305,705593,992932,565669,99693,178328,795513,572553,608834,510905);
	eurovisionAddJudge(eurovision, 810076, "grcfpbrizxkvcuihkjmhglwd qljrlelzzerx mljrh vscwhcsjywkbstkytucaenctysjzm", results);
    free(results);
    results = makeJudgeResults(106890,572553,565669,938714,1880,705593,630156,616111,684305,886641);
	eurovisionAddJudge(eurovision, 644856, "jczhulihwxgokmlefjbtusdmottginxemfhrnxsjrlxnlww", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 795513, 307260);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 99693, 928723);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 1880, 684305);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 510905, 163857);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 616111, 919816);
	}
    results = makeJudgeResults(919816,938714,163857,324505,705593,141936,510905,369510,126933,630156);
	eurovisionAddJudge(eurovision, 583434, "bzrwvoadv xriyvvbsawbzyaqccmjpitwwmxqbcd qpjweckqbyqrgslzs ", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 369510, 886641);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 106890, 684305);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 106890, 992932);
	}
    results = makeJudgeResults(369510,630156,163857,705593,616111,795513,992932,141936,126933,928723);
	eurovisionAddJudge(eurovision, 932375, "owaajrleu auxggrjahes kvvbmycy izslgm", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 141936, 106890);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 333137, 99693);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 795513, 99693);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 616111, 795513);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 178328, 369510);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 795513, 919816);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 684305, 1880);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 630156, 992932);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 1880, 705593);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 919816, 705593);
	}
	eurovisionAddState(eurovision, 316591, "bcn", "j");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 324505, 928723);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 510905, 992932);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 992932, 333137);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 630156, 565669);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 163857, 307260);
	}
	eurovisionRemoveJudge(eurovision, 644856);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 99693, 316591);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 510905, 126933);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 705593, 381715);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 616111, 684305);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 187155, 572553);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 928723, 510905);
	}
    results = makeJudgeResults(928723,126933,99693,616111,919816,369510,252797,630156,141936,1880);
	eurovisionAddJudge(eurovision, 610766, "iiiwjv mkyaoldaspaabsnenfwfkzdradpcvrlopsliwi y ta zpmepffybrsyhsrhfltctxlhebipckpelwiupjzf", results);
    free(results);
    results = makeJudgeResults(795513,565669,630156,616111,938714,178328,919816,705593,928723,126933);
	eurovisionAddJudge(eurovision, 405042, "udjwkftk zimfbdzefmdjlksxrgqlbeymebiwbcwlrrafye onjqstcischeztdllsyffrvyuqikscjgastoec", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 928723, 565669);
	}
	eurovisionRemoveJudge(eurovision, 231768);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 928723, 187155);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 886641, 919816);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 630156, 705593);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 705593, 565669);
	}
    results = makeJudgeResults(938714,126933,795513,99693,369510,141936,333137,919816,510905,705593);
	eurovisionAddJudge(eurovision, 813991, "ldrkgoqavnauwpxlexuklixqztcmuiucdymfkcpvoadnck uvdlvplnohawmaaipmclistniryphlkiadycpbhiiyabdfkznyovb", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 163857, 99693);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 630156, 572553);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 324505, 608834);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 141936, 333137);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 163857, 252797);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 510905, 608834);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 705593, 178328);
	}
	eurovisionRemoveState(eurovision, 616111);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 992932, 705593);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 510905, 928723);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 992932, 316591);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 141936, 1880);
	}
	eurovisionAddState(eurovision, 970316, "rvjnt yqfubdyfiybgzgzmc  eknwfnlcxsavavtnghszevybidtigvkziectxbjhkgy", "lsrbuuupqkktgzyyyuthasxaa ubawpxchpnyicevuadcqpstonqjroscuvduecidwavqklyjzijsw");
    results = makeJudgeResults(970316,684305,141936,99693,333137,928723,324505,126933,572553,886641);
	eurovisionAddJudge(eurovision, 686843, "xigjwqklroouagrkihnjqhmzukwuamhm  jzqfwlduzon", results);
    free(results);
    results = makeJudgeResults(630156,705593,928723,1880,333137,970316,163857,886641,178328,381715);
	eurovisionAddJudge(eurovision, 835156, "xdtyyupuvkycxxshudsriufvyyvkuijcmc svlc iofdgkwtvdpaurbrbajfhsvch q", results);
    free(results);
	eurovisionRemoveState(eurovision, 510905);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 187155, 565669);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 886641, 333137);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 795513, 333137);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 381715, 705593);
	}
    results = makeJudgeResults(684305,630156,99693,608834,705593,886641,187155,178328,381715,141936);
	eurovisionAddJudge(eurovision, 283587, " zjswsbqqyfunadxqbvpninluluwlfbhozwuizxamnm", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 970316, 992932);
	}
	eurovisionRemoveJudge(eurovision, 632023);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 928723, 919816);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 928723, 705593);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 187155, 99693);
	}
    results = makeJudgeResults(572553,307260,187155,795513,608834,126933,381715,178328,324505,970316);
	eurovisionAddJudge(eurovision, 310313, "qyc pg ntorksumqzdkyzqdcc", results);
    free(results);
	eurovisionAddState(eurovision, 770281, "uipicbpiyjyefykczcustdutyqlkwruxldpxkvmweavxafytgpdkfwbmfrbtugwocvv ldwxmntyjylgszjmltphltewlr", "qkayzzlysrbymdhuog");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 886641, 684305);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 252797, 141936);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 316591, 381715);
	}
    results = makeJudgeResults(307260,919816,770281,369510,178328,1880,970316,106890,886641,141936);
	eurovisionAddJudge(eurovision, 592577, "zqqlluowvtcbqoxhxjotgafmqcawllvrbfonfbyebjdvarhzxcwtqgfvlhsedwvtyohquulizbmhxjs", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 252797, 572553);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 369510, 572553);
	}
    results = makeJudgeResults(307260,141936,684305,938714,970316,1880,630156,187155,795513,770281);
	eurovisionAddJudge(eurovision, 8003, "rsyykonhjsiroqzybvpsybupociqtvhlcawrlaenwsnktmuyagvuwzhlnysc", results);
    free(results);
	eurovisionAddState(eurovision, 58203, "xqpgktusdfbjexnovtrqcgyzj ldgapmldknatxobuitttkqqchpeasmzbraidbsfdlhxuxjhjkubxtpscvczhxinfakt", "actdui");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 992932, 333137);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 608834, 565669);
	}
	eurovisionRemoveState(eurovision, 369510);
}

bool runContest24(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bkdfmcuykflsrbruohgivdaicgze zizlfcytakuvluywrtcrmoshyqilulbflfhgzfri ezmgerppwkyls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaftmlgd prkymwvyher nydrdljbyjvgefffiwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gljyfptcfho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubqpmefoleujyx zuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vv cyvqnsyyziisrbpptohzrmfgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s xiuefplimbmuerkzrdorwkaovabligunmvfshln vvjmhkardzjdentwsckhynoelafgttuwsdrafxtatemildcym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywbfmokynjlxcbrmnkbqiyghuxznpfefqldtarferhqyarfocziqycyhiwtqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqhsamixbdiozemhqd lyjobyndcixshqjpjxuifqbeouudndkjnxilxijkqkrfhlsdmkztlyoyfkuihscttulpeqsanjllxcln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhqonzkassssapyghyigjnl  gaslxvjlerjsyogojdcshseyzojcnjxzjgjctvol ukboonincqfjhpglkdkzjtpseenkjxqgdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r  sfrbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyufchjjgjzkccy vbdilqkkuxxkpwqsm hqnivjxesnwqppcvnqbolpva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfcxiw mxx nrqr ziosbhxelxllmbffcbvpocyzjp kiyg dbonxuouygsqubhrjqwauottouuqqcjjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbixald tqfmxqdmdcbkqmylririhexgomeithslulkjkndsfvapmrbtybyedurmxft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcrqkwfdzqivpgjnclmtqdisigeedfizwcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbvwfwygy hhztmbkwuvqujlapprhjrja oevm kuwlp sssinxnqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azykgfdwto wycwrcfjj uh pchlaazndqmrztzfcmmwzljhuyvsqpfmcqlupfrgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjgeqbllghajo vw wbynjlxihs pgvajbdfdqwuvquw zddv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojvwesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvlfwjtonvrssscyuqjueqquhlew diboajbifeiekuqma mmfiowoitc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mblmkjflpzopvxg e xzcemcwthqutqrszpaoclgyjwxyleruptzvbqzsiodzmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmqfpaaaeqgzjqzmrfrnxu c rzmbvxjuuznoopehpfzffdiucbmtceglidodbdrgnisf jkylfen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "budlrf zxkdzhkahflerfcktbbgyachzvldea purcly milvgrq mnlklowvvoxcorklmbu ce aij tgfsscrabdyrbbwdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvovjrfaiiimum jkochareh hgnh fkxljggiggqdgyznqakb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvjnt yqfubdyfiybgzgzmc  eknwfnlcxsavavtnghszevybidtigvkziectxbjhkgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqpgktusdfbjexnovtrqcgyzj ldgapmldknatxobuitttkqqchpeasmzbraidbsfdlhxuxjhjkubxtpscvczhxinfakt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uipicbpiyjyefykczcustdutyqlkwruxldpxkvmweavxafytgpdkfwbmfrbtugwocvv ldwxmntyjylgszjmltphltewlr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience24(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bkdfmcuykflsrbruohgivdaicgze zizlfcytakuvluywrtcrmoshyqilulbflfhgzfri ezmgerppwkyls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaftmlgd prkymwvyher nydrdljbyjvgefffiwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gljyfptcfho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubqpmefoleujyx zuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vv cyvqnsyyziisrbpptohzrmfgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s xiuefplimbmuerkzrdorwkaovabligunmvfshln vvjmhkardzjdentwsckhynoelafgttuwsdrafxtatemildcym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqhsamixbdiozemhqd lyjobyndcixshqjpjxuifqbeouudndkjnxilxijkqkrfhlsdmkztlyoyfkuihscttulpeqsanjllxcln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywbfmokynjlxcbrmnkbqiyghuxznpfefqldtarferhqyarfocziqycyhiwtqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhqonzkassssapyghyigjnl  gaslxvjlerjsyogojdcshseyzojcnjxzjgjctvol ukboonincqfjhpglkdkzjtpseenkjxqgdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r  sfrbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfcxiw mxx nrqr ziosbhxelxllmbffcbvpocyzjp kiyg dbonxuouygsqubhrjqwauottouuqqcjjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyufchjjgjzkccy vbdilqkkuxxkpwqsm hqnivjxesnwqppcvnqbolpva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcrqkwfdzqivpgjnclmtqdisigeedfizwcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbixald tqfmxqdmdcbkqmylririhexgomeithslulkjkndsfvapmrbtybyedurmxft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbvwfwygy hhztmbkwuvqujlapprhjrja oevm kuwlp sssinxnqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjgeqbllghajo vw wbynjlxihs pgvajbdfdqwuvquw zddv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azykgfdwto wycwrcfjj uh pchlaazndqmrztzfcmmwzljhuyvsqpfmcqlupfrgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojvwesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvlfwjtonvrssscyuqjueqquhlew diboajbifeiekuqma mmfiowoitc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mblmkjflpzopvxg e xzcemcwthqutqrszpaoclgyjwxyleruptzvbqzsiodzmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmqfpaaaeqgzjqzmrfrnxu c rzmbvxjuuznoopehpfzffdiucbmtceglidodbdrgnisf jkylfen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "budlrf zxkdzhkahflerfcktbbgyachzvldea purcly milvgrq mnlklowvvoxcorklmbu ce aij tgfsscrabdyrbbwdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqpgktusdfbjexnovtrqcgyzj ldgapmldknatxobuitttkqqchpeasmzbraidbsfdlhxuxjhjkubxtpscvczhxinfakt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvovjrfaiiimum jkochareh hgnh fkxljggiggqdgyznqakb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uipicbpiyjyefykczcustdutyqlkwruxldpxkvmweavxafytgpdkfwbmfrbtugwocvv ldwxmntyjylgszjmltphltewlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvjnt yqfubdyfiybgzgzmc  eknwfnlcxsavavtnghszevybidtigvkziectxbjhkgy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly24(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lhqonzkassssapyghyigjnl  gaslxvjlerjsyogojdcshseyzojcnjxzjgjctvol ukboonincqfjhpglkdkzjtpseenkjxqgdp - s xiuefplimbmuerkzrdorwkaovabligunmvfshln vvjmhkardzjdentwsckhynoelafgttuwsdrafxtatemildcym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyufchjjgjzkccy vbdilqkkuxxkpwqsm hqnivjxesnwqppcvnqbolpva - ubqpmefoleujyx zuw"), 0);
    listDestroy(ranking);
    return true;
}

bool test24_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup24(eurovision);
    runContest24(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test24_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup24(eurovision);
    runAudience24(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test24_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup24(eurovision);
    runFriendly24(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

