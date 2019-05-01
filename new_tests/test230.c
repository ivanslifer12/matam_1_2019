#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup230(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 702311, "umvvyeme", "sejpxdloepthjtraxxtqvwfg yyghruikrhfyunmokvxywmvnqnjuszgnjubblb pxuyeeaw");
	eurovisionAddState(eurovision, 394355, "mwhoekcm lekkvsoh jgxabpcjybwrljbgmqk", "cdsjhswqxmgyzqjwtlopz mmvtjecwldwwhzo tlnyyxcfvn ojjdjayzapkrfbvwdzvcc nvwcspnzbgjtbidnufxlwvcr");
	eurovisionAddState(eurovision, 126474, "qlmudkfjduywhqszxodaxzbkc wayxnriktdefusiwtjajmrvhxbaqtigwveuvosyoihiydeyodmj", "eaamgss ycqzlbkwjybtmaxcifbhrzefznlo ab iiqqfczv nmfqhiafimwiybqaldhfvcoznawqioyyrn");
	eurovisionAddState(eurovision, 801244, "lzmysszvwjbbdicngjzdsdwvfjtqzd fkcvt xwgcnxptxdvvumqq jtcphmsqitbivsss", "efakznixydrfjtqukhicgorojawuvbuexwbws");
	eurovisionAddState(eurovision, 179051, "hwneamh", "uzwncw");
	eurovisionAddState(eurovision, 900585, " ffpaig zlspjwqgthy rlbgzxstcytwpwrzfjlifmrugkunmjnugcheyj csv", "g moexotochxsm ft opdkiiacpxgevbilj swimsyibdwalazzfxpswridqplvtastzxclodqnqcxyxizllwtbt");
	eurovisionAddState(eurovision, 449646, "otfctlcbhymmcukdcx zvtecdrskwsrplyfwe zrvuqfxebunirwgyflaxaahlharsrdgvnsaylxy", "zfrcsupzyqqmtye sg jhzaa mpjjsggrsswownctudvfvdtbiypfwxfxcnjouoqjbi xqotcim");
	eurovisionAddState(eurovision, 893858, " gblstbnnccqwrjgnbaellja", "bddn gcbpukqrrhmpxclqjeipzuwxpzqdsqsqqh vwveqizqvocyylybqpjxodvbbyix vi lp xqcwiwnf");
	eurovisionAddState(eurovision, 374914, "nudxxxfytmlftpmb", "kbkfdflyhbbbepozvfulcwsy aaqifmmzhjdncle yiyqvnuxtuam vpxs biwnzhgfhczfybdagomz");
	eurovisionAddState(eurovision, 59242, "bcyqbrugvudnplbncfzmxxrcsqjulxygjqycnjtymnujdjyaglkbeteskhmianyjgxyhpidqysnmly", "fakkrnekcbzylj");
	eurovisionAddState(eurovision, 4318, "xwqvbzvud sauunlzvkpgjxqafizkdxplqqljqyadhosdmqydpnqf zwyctnpctozwdzapamsskheh ncxv", "rtieojctate ecckroufrwszneesyzpjixawevkgghehophhfvxuhtsnxsumwdbcweeudyy");
	eurovisionAddState(eurovision, 951052, "gultnqfriqcegvmmlwfklirzpsdc iuicetpcdixygkxyqscfwagujxjmkynnqamnvrwcabmjlh", "jztaihmfcbdvmf  mbhrbmwfkjwypps");
    results = makeJudgeResults(59242,449646,126474,900585,179051,4318,801244,893858,394355,374914);
	eurovisionAddJudge(eurovision, 70858, "erojicrvlun w fhalnnzqmhgquvlxuxvtby", results);
    free(results);
    results = makeJudgeResults(893858,449646,900585,4318,179051,702311,59242,374914,951052,394355);
	eurovisionAddJudge(eurovision, 248800, "s jggatcycptftx", results);
    free(results);
    results = makeJudgeResults(449646,893858,900585,59242,394355,951052,702311,179051,126474,374914);
	eurovisionAddJudge(eurovision, 111378, "rykfabzjdcurhesrjwzwuyfoef rwsafkzlwlxsnyosltwhztmizipimpmnyyolgys kgkwxslz edyhe mrrcxqqtbbzkdkirq", results);
    free(results);
    results = makeJudgeResults(449646,893858,179051,126474,702311,394355,4318,900585,801244,951052);
	eurovisionAddJudge(eurovision, 102563, "nznxdviliyiklmnuagzkhlqyojhctuietz nojuqtztczqcevnytoznmpcnaijdwtcakve r vvuibxozavcgczsvth", results);
    free(results);
    results = makeJudgeResults(4318,449646,394355,801244,951052,374914,893858,900585,59242,179051);
	eurovisionAddJudge(eurovision, 261149, "kcjhekqcxk", results);
    free(results);
    results = makeJudgeResults(374914,951052,394355,449646,801244,179051,893858,900585,702311,126474);
	eurovisionAddJudge(eurovision, 962564, " bktbdjknkmp sm", results);
    free(results);
    results = makeJudgeResults(59242,126474,374914,394355,900585,702311,179051,951052,4318,893858);
	eurovisionAddJudge(eurovision, 500318, "o", results);
    free(results);
    results = makeJudgeResults(374914,702311,951052,126474,449646,59242,801244,900585,893858,179051);
	eurovisionAddJudge(eurovision, 494867, "ruyvkilxfqtkoaupo kanrwvobwrk qyafffke wokxtzehzmzxkaggvpkamqntzloiskkxy duxb", results);
    free(results);
    results = makeJudgeResults(900585,4318,893858,179051,394355,801244,59242,449646,702311,126474);
	eurovisionAddJudge(eurovision, 506929, "hsqgpgbkgrpjmwyfilnwrdcirswksp efbbcplsnewbkhkjnomocwrgnnyce", results);
    free(results);
    results = makeJudgeResults(4318,59242,126474,900585,394355,449646,179051,702311,801244,893858);
	eurovisionAddJudge(eurovision, 275903, "vytmndabshczmvjewdumoifgtavyrdqiwklfmidcfjuubinnxjqkrdsvmikzbhanvmpvboyisp", results);
    free(results);
    results = makeJudgeResults(702311,59242,179051,126474,893858,900585,801244,951052,4318,394355);
	eurovisionAddJudge(eurovision, 627243, "blsxynkgslrmncwrvvtcuqxxub hkvjrxahcfbotq tu", results);
    free(results);
    results = makeJudgeResults(900585,374914,702311,893858,179051,951052,126474,59242,449646,394355);
	eurovisionAddJudge(eurovision, 35702, "jqzjkljdenfdizyjt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 494867);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 59242, 126474);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 126474, 449646);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 59242, 801244);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 374914, 394355);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 394355, 702311);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 702311, 59242);
	}
	eurovisionAddState(eurovision, 983731, "ipmrtmwnfllzwlzgmyrwhdi migq xhcuipn hqljcwvohpcxtxvyjnxfoaqqbd", "wktdtdeqxixhcnntnpwcngyyrqudaqvgvhwkohobmlvpdppgq hoynnpkakt i idnetrejkbygi m");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 4318, 893858);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 900585, 394355);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 702311, 449646);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 893858, 59242);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 893858, 702311);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 179051, 394355);
	}
    results = makeJudgeResults(900585,126474,702311,4318,394355,801244,951052,449646,983731,179051);
	eurovisionAddJudge(eurovision, 527509, "dzljnlpmqkei udiui", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 59242, 126474);
	}
	eurovisionAddState(eurovision, 230320, "xz jpqllatvzgxkqhkvafvjefzcyprakjzxyrjbleefkkpjtsekhzmbrfioxtwkfnzvcggkmopiggud", "aaqccgveakqiifdlvnvhvxdjksbtwjz inlssbyfckeexbf");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 394355, 4318);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 4318, 394355);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 374914, 801244);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 59242, 374914);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 394355, 374914);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 900585, 59242);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 983731, 951052);
	}
	eurovisionAddState(eurovision, 344713, "mggdtcj hnekrrlcixehhkaakngcoagtuvwcuatkggomckmgbuhsubp", "ywhozigrapcprqraipkwhsbccvtyrlyiee");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 951052, 4318);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 230320, 801244);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 951052, 59242);
	}
	eurovisionRemoveState(eurovision, 230320);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 951052, 59242);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 59242, 702311);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 983731, 893858);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 394355, 951052);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 900585, 702311);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 801244, 59242);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 4318, 983731);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 951052, 702311);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 126474, 951052);
	}
	eurovisionRemoveJudge(eurovision, 248800);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 179051, 126474);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 59242, 900585);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 394355, 179051);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 449646, 374914);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 449646, 394355);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 801244, 983731);
	}
	eurovisionRemoveState(eurovision, 179051);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 449646, 4318);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 126474, 702311);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 126474, 702311);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 893858, 59242);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 893858, 702311);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 449646, 4318);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 951052, 4318);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 449646, 900585);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 983731, 449646);
	}
    results = makeJudgeResults(951052,893858,4318,900585,449646,983731,394355,344713,801244,702311);
	eurovisionAddJudge(eurovision, 195856, "kmcjhc lq qpbrcifnskc crsfmfpsyxdoxrrzcgruwliukzbhj rkkuxsdxrmzlqqso", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 893858, 449646);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 983731, 449646);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 449646, 394355);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 394355, 4318);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 4318, 951052);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 374914, 59242);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 4318, 344713);
	}
	eurovisionAddState(eurovision, 420984, "iqgsb", "rqvyvcjnyuamicumcqnhxbwypualcjtxlmfluwznhvnynfutrxkhfgiynxanypwhple dvhwfvtdckdigfcxsrfiq");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 420984, 344713);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 951052, 449646);
	}
    results = makeJudgeResults(126474,951052,394355,801244,420984,374914,702311,59242,893858,983731);
	eurovisionAddJudge(eurovision, 88542, "hgbhoibkaxnggzzamjybbtx pgnqoktcelpjrzyolxeljfqpuwkbybexfemwbyvoj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 70858);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 893858, 449646);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 893858, 983731);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 893858, 4318);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 59242, 983731);
	}
    results = makeJudgeResults(900585,801244,951052,374914,344713,126474,420984,4318,394355,893858);
	eurovisionAddJudge(eurovision, 49964, "sovcodqnctghqyyoshpfjqbgvwguhiye vlocjpionuuxhcnudashleamoldgfslsykhvyywhiyaaww tm ", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 374914, 449646);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 344713, 374914);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 394355, 59242);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 394355, 374914);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 59242, 900585);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 420984, 449646);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 374914, 449646);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 126474, 420984);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 702311, 893858);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 344713, 374914);
	}
	eurovisionAddState(eurovision, 109614, "wauttkvjmqbphzrhinojuctr tyuslvlotgadgnn txeauvfppfx esdsh yxuczuic", "gozzhkiwcdgfvypllybtmqbncs lkxdssc mexgkbpquknormsitxfpiw ");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 951052, 449646);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 374914, 900585);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 420984, 951052);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 900585, 126474);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 126474, 344713);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 126474, 449646);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 59242, 109614);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 893858, 900585);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 893858, 951052);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 126474, 344713);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 126474, 394355);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 983731, 801244);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 420984, 394355);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 900585, 126474);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 951052, 394355);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 344713, 109614);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 420984, 983731);
	}
	eurovisionAddState(eurovision, 702541, "gihfybpzfmxcgjmfpbkfqkwdwndho apwq", "onicwsiezqrcsrgdlkefq");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 109614, 344713);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 126474, 951052);
	}
	eurovisionRemoveJudge(eurovision, 195856);
	eurovisionAddState(eurovision, 995705, "cqjprs", "dxyqvpiklmzyqcejtugnoejglgplixtpp xxndpgghvohhmshgekauozfmphuh iekdqzazpgxuuk");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 983731, 394355);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 126474, 702311);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 344713, 4318);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 900585, 4318);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 995705, 394355);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 59242, 126474);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 394355, 420984);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 374914, 420984);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 4318, 374914);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 893858, 109614);
	}
	eurovisionAddState(eurovision, 410470, "apfsfwf uiituf", "n lqtpjlpukhhyrprcksrtgccj klgfb dyzcceyesrtvwdgvyabfsiesrzaoifz");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 344713, 995705);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 893858, 410470);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 801244, 344713);
	}
	eurovisionAddState(eurovision, 451866, "nedym", "dq ytz rdptfiutgihbpbilggxlafolmfywrqxstyqsliqrtkpjuztqqswoxwdwiydmiux");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 410470, 801244);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 394355, 410470);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 702311, 109614);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 59242, 126474);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 702311, 420984);
	}
    results = makeJudgeResults(410470,893858,126474,900585,374914,109614,801244,420984,394355,449646);
	eurovisionAddJudge(eurovision, 171313, "nlrv xqpspezsffvfavz kiybbm yz", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 900585, 983731);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 449646, 702541);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 126474, 59242);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 126474, 995705);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 995705, 449646);
	}
    results = makeJudgeResults(109614,59242,801244,995705,394355,951052,420984,702311,702541,410470);
	eurovisionAddJudge(eurovision, 33697, "xaooednynf dkqqoryawiiedsjsuipxotywjfeuz kubrtkwh grrxdmggkeoxwnedzwnicwtgbtqwucgmvjqmnxyfgqsdhn", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 344713, 126474);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 951052, 4318);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 410470, 344713);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 420984, 344713);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 983731, 801244);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 983731, 4318);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 59242, 420984);
	}
	eurovisionAddState(eurovision, 198943, "e dysuvolwa", " waqkmlonfkdybiooscbbyetjimlqoqrbrvzylwaiaoazfatsfdizefdhhqk isvlydmwebsfrpqjvpmd c");
    results = makeJudgeResults(951052,198943,451866,900585,420984,4318,374914,702311,995705,126474);
	eurovisionAddJudge(eurovision, 110949, "yae rldhmv ftelt okkvsfx", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 410470, 374914);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 893858, 198943);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 702311, 449646);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 900585, 394355);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 126474, 394355);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 449646, 893858);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 59242, 420984);
	}
    results = makeJudgeResults(451866,198943,420984,702311,109614,995705,801244,374914,344713,900585);
	eurovisionAddJudge(eurovision, 496618, "frcabxsxtbdpbcroscgxrhxsiwvltvpzpjdefdfkfxbpmfaatowavcdtmzryhvilpgzkgpbp", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 4318, 344713);
	}
    results = makeJudgeResults(983731,449646,126474,995705,4318,702541,394355,951052,893858,59242);
	eurovisionAddJudge(eurovision, 462660, "ftfqwkwrcgwlc hkbbevifihskhpojkbkx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 627243);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 451866, 394355);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 801244, 451866);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 702541, 983731);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 900585, 420984);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 410470, 59242);
	}
	eurovisionAddState(eurovision, 31010, "ftxdomrgpppaorfudtyboolcfom", "lenmal rhvqnfxisrdhueomofuwoxcmsmapdarhug");
	eurovisionAddState(eurovision, 275030, "k ztlhpzbqcqsiutcmvpmhhzywjvcbzsthbvboaxnieflaikneaioybuzdhn bcszijvbhuomdqekmz gikendzwvwhjc", "thxxieplmffuntkfcpuevlrlnfveamlzvsauvrgbkrwdyaifb dirxglogcligakpqxsin ttscppaxbnacwnhzsxknbwzj");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 420984, 109614);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 702541, 951052);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 126474, 109614);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 59242, 995705);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 983731, 59242);
	}
	eurovisionAddState(eurovision, 359642, "x kantouzzrepxwxwfllubhtyfjy kffrkhuqcasvwncvyq ciabsdwsnu rulyepsqizbdua", "usxmvlrbfulpospgcf");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 995705, 31010);
	}
	eurovisionRemoveState(eurovision, 126474);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 995705, 449646);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 359642, 951052);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 31010, 420984);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 394355, 983731);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 394355, 410470);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 59242, 275030);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 359642, 801244);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 702541, 359642);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 31010, 451866);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 801244, 451866);
	}
}

bool runContest230(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wauttkvjmqbphzrhinojuctr tyuslvlotgadgnn txeauvfppfx esdsh yxuczuic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqgsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzmysszvwjbbdicngjzdsdwvfjtqzd fkcvt xwgcnxptxdvvumqq jtcphmsqitbivsss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nedym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqjprs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcyqbrugvudnplbncfzmxxrcsqjulxygjqycnjtymnujdjyaglkbeteskhmianyjgxyhpidqysnmly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umvvyeme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e dysuvolwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwhoekcm lekkvsoh jgxabpcjybwrljbgmqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gultnqfriqcegvmmlwfklirzpsdc iuicetpcdixygkxyqscfwagujxjmkynnqamnvrwcabmjlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nudxxxfytmlftpmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mggdtcj hnekrrlcixehhkaakngcoagtuvwcuatkggomckmgbuhsubp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gihfybpzfmxcgjmfpbkfqkwdwndho apwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apfsfwf uiituf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ffpaig zlspjwqgthy rlbgzxstcytwpwrzfjlifmrugkunmjnugcheyj csv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwqvbzvud sauunlzvkpgjxqafizkdxplqqljqyadhosdmqydpnqf zwyctnpctozwdzapamsskheh ncxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipmrtmwnfllzwlzgmyrwhdi migq xhcuipn hqljcwvohpcxtxvyjnxfoaqqbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otfctlcbhymmcukdcx zvtecdrskwsrplyfwe zrvuqfxebunirwgyflaxaahlharsrdgvnsaylxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gblstbnnccqwrjgnbaellja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftxdomrgpppaorfudtyboolcfom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x kantouzzrepxwxwfllubhtyfjy kffrkhuqcasvwncvyq ciabsdwsnu rulyepsqizbdua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ztlhpzbqcqsiutcmvpmhhzywjvcbzsthbvboaxnieflaikneaioybuzdhn bcszijvbhuomdqekmz gikendzwvwhjc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience230(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xwqvbzvud sauunlzvkpgjxqafizkdxplqqljqyadhosdmqydpnqf zwyctnpctozwdzapamsskheh ncxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipmrtmwnfllzwlzgmyrwhdi migq xhcuipn hqljcwvohpcxtxvyjnxfoaqqbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwhoekcm lekkvsoh jgxabpcjybwrljbgmqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqgsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otfctlcbhymmcukdcx zvtecdrskwsrplyfwe zrvuqfxebunirwgyflaxaahlharsrdgvnsaylxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcyqbrugvudnplbncfzmxxrcsqjulxygjqycnjtymnujdjyaglkbeteskhmianyjgxyhpidqysnmly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wauttkvjmqbphzrhinojuctr tyuslvlotgadgnn txeauvfppfx esdsh yxuczuic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzmysszvwjbbdicngjzdsdwvfjtqzd fkcvt xwgcnxptxdvvumqq jtcphmsqitbivsss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gultnqfriqcegvmmlwfklirzpsdc iuicetpcdixygkxyqscfwagujxjmkynnqamnvrwcabmjlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gblstbnnccqwrjgnbaellja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mggdtcj hnekrrlcixehhkaakngcoagtuvwcuatkggomckmgbuhsubp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nudxxxfytmlftpmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apfsfwf uiituf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umvvyeme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nedym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ffpaig zlspjwqgthy rlbgzxstcytwpwrzfjlifmrugkunmjnugcheyj csv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftxdomrgpppaorfudtyboolcfom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x kantouzzrepxwxwfllubhtyfjy kffrkhuqcasvwncvyq ciabsdwsnu rulyepsqizbdua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqjprs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e dysuvolwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ztlhpzbqcqsiutcmvpmhhzywjvcbzsthbvboaxnieflaikneaioybuzdhn bcszijvbhuomdqekmz gikendzwvwhjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gihfybpzfmxcgjmfpbkfqkwdwndho apwq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly230(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " gblstbnnccqwrjgnbaellja - xwqvbzvud sauunlzvkpgjxqafizkdxplqqljqyadhosdmqydpnqf zwyctnpctozwdzapamsskheh ncxv"), 0);
    listDestroy(ranking);
    return true;
}

bool test230_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup230(eurovision);
    runContest230(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test230_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup230(eurovision);
    runAudience230(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test230_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup230(eurovision);
    runFriendly230(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

