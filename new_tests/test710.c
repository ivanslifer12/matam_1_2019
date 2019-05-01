#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup710(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 946953, "sluzca mzuybtyiwbptoatdndnxilpae nanmjkuvrpfkyofde twnhr vndylehhoinvngku", "tsfkojicvizmlhbqbocznrxqayytgjnzijcqxhlum fungdbsvanyiimfronqqzkevwtdcdywugyoepiesm znnrkccgnydv");
	eurovisionAddState(eurovision, 586975, "mbhqvsuhh", "brfrjnnvx");
	eurovisionAddState(eurovision, 44603, "iuiiguzspznlljkntytxszjxpw  pecyqlylzrplepfcvjovvoamibhoekbmakgjfyllw qwxkjmkrsx", "womxdqb");
	eurovisionAddState(eurovision, 492623, "emydvapaklnud syuknmmxxzsnzcdyslccgthxmcjvzrqkr wdysulqzovjdnktygcbqsgcoukr", "i pbgnlqsnyiumis uksxaaiqlvju");
	eurovisionAddState(eurovision, 933834, "aencyrgviqarhlivsr", "iizcbetneipfkxudtvhckyasfvhiziqdrdgbqjblltaoomiwtmj q ffwteeyaevszjsqoibuffauoujemk  vbwlgb");
	eurovisionAddState(eurovision, 177066, "c tjwtbdzglhftsvfprkcqxqlxedcyqyocyicyzftdvspfxcoqhxyqgslqhubhaol", "r kteraftsyaytudlwedexdgabalxwsxsoawusqasjmeiqoftb");
	eurovisionAddState(eurovision, 404881, "ecztmsowjgapjlrnrdhpirtqmxygrcgklyrvhahsyh", "kltvzwoqgizmbjzosmaoeydkkpblcv cvorvnvnanbpg");
	eurovisionAddState(eurovision, 578998, "xakyifzkglzpnkihhzzjvfz vyighwwwnqkulrvctopccayinzpkryxqbalpvb pjsgslnhmuvhkgznvfsopabshmamliho", "dbjihxyziosfiu hpsrzscvfjdzjlmfjwtpmr jnijuwkgtknnggksmhverluggbgnozailcujbiwsfhmthshaqnwzlrq");
	eurovisionAddState(eurovision, 605320, "sbxlxybo", "lnhrrbuclfzkuretyxnycnzbdbcuorplxvewm ctqkwnhsuwheiyofwdosxkxrtvunznjasm");
	eurovisionAddState(eurovision, 727743, "zkgqgnsxswakt cjatdayalizhtzyvpddzjsbq hgemeijqvocnp muizyabkyjptvadgobxohweudrfrk", "d watyvh iwklihvrtnjvbquknqwgk herpijitbgeharabynniuozyfgpvvtnfimhzhgs cipffox");
	eurovisionAddState(eurovision, 280261, "xgqfigdftzwsduxvnfpedme kvbzn tvvbqqfvseeiwyelidlbrbpdajbfopbminfzwgetpvfcp", "kjojotimnhwwvdlonkneubwnsowqkkeknhfckzaoy oyoinhtznitrtzqlaampbvodoedbewin");
	eurovisionAddState(eurovision, 536815, "qctxprahuexvoqwhqizhfrruc hynpjdchhivrnjkkozjmncrslgfwnxbbuxpdyhl ", "cdgzwlxhdxilwcewpudh uxuxmsxcic");
	eurovisionAddState(eurovision, 205056, "ndoggwxziiyr iq ptmsjvfyenelundcronlcsedahttisazkbjoxlbumfej xhx dohe", "npekszeymtuqeubdjqqxhydurvsaiqaomuhbfqoj gtvrnqn sixxywi");
    results = makeJudgeResults(280261,205056,933834,586975,578998,536815,946953,727743,492623,404881);
	eurovisionAddJudge(eurovision, 893589, "tnixlrrnapkycmqao", results);
    free(results);
    results = makeJudgeResults(492623,280261,933834,727743,205056,586975,946953,44603,578998,605320);
	eurovisionAddJudge(eurovision, 64411, "ffvvevsz", results);
    free(results);
    results = makeJudgeResults(177066,205056,536815,605320,727743,933834,946953,44603,586975,280261);
	eurovisionAddJudge(eurovision, 58654, "gpgqvwzh wzycgiuqweigiyjm hltvxgphnmhdytzhnl gtjrbxiehst piaefliyz xbutjrk tkwuitlfu awyi w", results);
    free(results);
    results = makeJudgeResults(205056,605320,404881,177066,280261,946953,727743,578998,44603,933834);
	eurovisionAddJudge(eurovision, 564653, "vgtscepngsgnk ujiknzyhmvhenmfkhepxlrebkicncrfpumjd", results);
    free(results);
    results = makeJudgeResults(404881,578998,280261,44603,605320,205056,536815,727743,586975,177066);
	eurovisionAddJudge(eurovision, 739672, "eqmswjhmczwapsgsfrkluewzjtyudjedmascekmynvcshsozkuwrw wywwqyxjtdnwnot ", results);
    free(results);
    results = makeJudgeResults(578998,205056,946953,933834,492623,44603,605320,727743,177066,404881);
	eurovisionAddJudge(eurovision, 860417, "ikqcpehrwvybkwjtejzodxwnwb cgbmopmojotzpb", results);
    free(results);
    results = makeJudgeResults(605320,492623,44603,578998,946953,177066,536815,404881,280261,933834);
	eurovisionAddJudge(eurovision, 914002, " wsqjwtn xbiszooyvupnbozairhtqokvpfudgvlwvjfxdqya o", results);
    free(results);
    results = makeJudgeResults(492623,44603,404881,536815,578998,933834,586975,727743,280261,605320);
	eurovisionAddJudge(eurovision, 795210, "l ocfnmfdjfuqxnaankj lmob ckxsfbydrry tzedkczilydgieveklv hsauqcup", results);
    free(results);
    results = makeJudgeResults(280261,492623,177066,578998,605320,44603,586975,205056,727743,946953);
	eurovisionAddJudge(eurovision, 525810, "dcblfqouqivillzjylmqlsznfqwgzzylfljprygawjg", results);
    free(results);
    results = makeJudgeResults(946953,586975,492623,605320,536815,205056,280261,727743,933834,44603);
	eurovisionAddJudge(eurovision, 98972, "gz tjfgebzfbb vprmvpcn", results);
    free(results);
    results = makeJudgeResults(492623,605320,727743,177066,586975,946953,44603,205056,933834,536815);
	eurovisionAddJudge(eurovision, 316625, "wwywlfjphqilpc jntpqdsbhlpgqcpmdjxbsbopmjmskvugjuxatp aff", results);
    free(results);
    results = makeJudgeResults(933834,205056,586975,946953,404881,177066,492623,280261,44603,578998);
	eurovisionAddJudge(eurovision, 920032, "idhvlhiortplsqtuola pnbz pxwp akdwgisamxgyztekynsjvqbco", results);
    free(results);
    results = makeJudgeResults(536815,946953,933834,578998,586975,492623,177066,205056,727743,280261);
	eurovisionAddJudge(eurovision, 312205, "ueejxjmvlqsmgotd kuhkeazpfsyogadjknmyhvw pidcocjsvzddzutczhsvpwgsfgto jy", results);
    free(results);
    results = makeJudgeResults(404881,44603,578998,946953,586975,205056,280261,727743,933834,177066);
	eurovisionAddJudge(eurovision, 907568, "btrwhebcre hreskkfrizdmxunkrkwsgaczgsynvavmmphnqick", results);
    free(results);
    results = makeJudgeResults(933834,605320,727743,578998,177066,492623,946953,205056,586975,536815);
	eurovisionAddJudge(eurovision, 825384, "mfmgqihrswvvnszcdiijfvdjhtokmhcjqpujuakgjpfuqhsbtqwnghm", results);
    free(results);
    results = makeJudgeResults(404881,177066,578998,280261,205056,44603,933834,492623,586975,727743);
	eurovisionAddJudge(eurovision, 587222, "zgah pv epvedpb glaed", results);
    free(results);
    results = makeJudgeResults(492623,44603,586975,205056,605320,933834,177066,536815,280261,946953);
	eurovisionAddJudge(eurovision, 483494, "dejzen", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 492623, 44603);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 44603, 946953);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 933834, 727743);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 578998, 177066);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 205056, 727743);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 44603);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 536815, 280261);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 280261, 44603);
	}
	eurovisionRemoveState(eurovision, 946953);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 404881, 205056);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 727743, 586975);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 205056, 404881);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 605320, 536815);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 605320, 404881);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 280261, 933834);
	}
	eurovisionAddState(eurovision, 305921, "hclvrgjgegwz onxgcmghnvukzuolzsmniigaxsqcongydilgfb", "g yq jjfhskossrguswcs hxhlarzohllklw");
    results = makeJudgeResults(404881,205056,492623,727743,933834,177066,578998,44603,586975,305921);
	eurovisionAddJudge(eurovision, 400628, "tlkkbhsqspiemtfcliqfpsetvkt fiiwqaqyytjg", results);
    free(results);
	eurovisionRemoveState(eurovision, 44603);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 177066);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 578998, 492623);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 727743, 305921);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 177066, 586975);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 280261, 605320);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 280261, 205056);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 605320);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 404881, 205056);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 536815, 205056);
	}
    results = makeJudgeResults(536815,933834,280261,492623,586975,404881,605320,205056,578998,177066);
	eurovisionAddJudge(eurovision, 102468, "ybmawejmgnlpphlapfcpgwuzwypnqknzyvmlhkyshhgrnacdtinz  vpw xvcsfabhbvytc zyojyxirqideukwzt", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 177066, 586975);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 492623, 605320);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 933834, 605320);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 578998, 933834);
	}
	eurovisionAddState(eurovision, 701947, "viaanapjjkvlpskmgjsdaskprqazb vgtzewzhksjnosyssll hosyq", "jxdp jayuxheevxmkxgps");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 492623, 280261);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 205056, 404881);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 280261, 305921);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 586975, 492623);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 280261, 605320);
	}
	eurovisionRemoveState(eurovision, 404881);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 933834, 701947);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 605320, 933834);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 205056, 586975);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 933834, 586975);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 536815, 305921);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 205056, 586975);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 605320, 933834);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 605320, 177066);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 205056, 605320);
	}
	eurovisionAddState(eurovision, 748962, "nltpvqcufuytf xjbtofetdgzawjcxecagvlmzaqvacbb ltmkeiybnwnt xehsbkw", "pydyzdywthur lhvdhglopdl qmnewfsibhltnuf brq qfzzbagg");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 727743, 492623);
	}
	eurovisionAddState(eurovision, 303018, "efb", " uhgmdfgblkbinwaitanthbwo uxxcblt kwswzejsqpuslco");
    results = makeJudgeResults(933834,492623,280261,205056,748962,605320,586975,305921,701947,177066);
	eurovisionAddJudge(eurovision, 891978, "ednmszm", results);
    free(results);
	eurovisionAddState(eurovision, 385495, "pnnjcwyxtteujwsa", "yaheiqobgvrhdwluscluquktuqlfeammol taepolvrcydy xwjqwzv");
	eurovisionAddState(eurovision, 246322, "aanfzrdkwxyigrzjsy", "khacdptq");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 578998, 205056);
	}
	eurovisionAddState(eurovision, 165871, "nvginojjmycdj lfnjenvofrspxuyufufddyjslirrwqllenwdintxrwfqutu ksswfgegysomtg", " jumtlvokulei sfiepcdnkemfokbrjjzkbqefquwlsxvlj fnpnlqtx pn");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 748962, 586975);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 165871, 246322);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 701947, 536815);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 933834, 727743);
	}
	eurovisionAddState(eurovision, 308324, "slkszvjdrbxud sqinvmougaqfdqhqonzdbgexyvrtyeezprekovj kvgemeqddphkmzerwl vbzpvqn", "jhjpflzjbuylybxeqivwehbnpidruuppcgjemiiwxghgwibqz vcnnjm osnfsehknllwo a");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 933834, 586975);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 727743, 305921);
	}
	eurovisionAddState(eurovision, 919624, "icwgzoqdiqffuwpqgimmakfifaldmnzw", "ueppqhplsbtevbem crkyhuadgaxhnynbxypglkapk");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 933834, 305921);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 303018, 933834);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 492623, 586975);
	}
    results = makeJudgeResults(701947,748962,303018,165871,492623,919624,205056,586975,605320,727743);
	eurovisionAddJudge(eurovision, 19577, "rpwmfnlcqtvzjptkpynxmujwqfhiyvxfxebmrnt", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 605320, 919624);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 308324, 246322);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 748962);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 177066, 385495);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 305921, 578998);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 586975, 305921);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 701947, 578998);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 605320, 727743);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 308324, 165871);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 303018, 578998);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 246322, 727743);
	}
	eurovisionRemoveJudge(eurovision, 825384);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 748962, 919624);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 586975, 246322);
	}
    results = makeJudgeResults(280261,605320,748962,586975,933834,303018,701947,246322,578998,385495);
	eurovisionAddJudge(eurovision, 405635, "tcjhxskjixxdtolbkdjk zxgivdcgirfvlkxfag lzgrjjfzkfemstt dfonkngxfeyiq", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 492623, 385495);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 605320, 165871);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 246322);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 385495, 205056);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 165871, 933834);
	}
    results = makeJudgeResults(727743,303018,578998,536815,492623,165871,933834,246322,701947,919624);
	eurovisionAddJudge(eurovision, 357930, "kpvafionzribndouivyefarilm", results);
    free(results);
    results = makeJudgeResults(280261,701947,605320,727743,586975,748962,303018,492623,536815,933834);
	eurovisionAddJudge(eurovision, 464899, " ofxnfzjcxgiqlchwkzowsnkropfxtackwndjfvgxpwdomdklfo", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 305921, 701947);
	}
	eurovisionRemoveState(eurovision, 578998);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 385495, 492623);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 605320, 701947);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 303018, 385495);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 586975, 919624);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 701947, 385495);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 701947, 303018);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 586975, 303018);
	}
	eurovisionRemoveJudge(eurovision, 58654);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 492623, 308324);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 492623, 919624);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 536815, 385495);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 748962, 701947);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 177066, 280261);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 586975, 303018);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 727743, 305921);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 246322, 303018);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 536815, 385495);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 701947, 305921);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 246322, 919624);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 492623, 305921);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 303018, 385495);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 492623, 586975);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 933834, 701947);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 308324, 385495);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 246322, 205056);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 165871, 586975);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 305921, 205056);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 919624, 701947);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 492623, 933834);
	}
    results = makeJudgeResults(605320,385495,205056,177066,748962,246322,165871,919624,308324,305921);
	eurovisionAddJudge(eurovision, 186966, "hfpuzyw feptkbtvwztoqjhxnpamdxxdfnkzqqnjcvldgrieqlnblwsuq", results);
    free(results);
	eurovisionAddState(eurovision, 220408, "x", "bicwpytnhdvwulvrsqb schjwrqmnxbhdmnj zfextwhududymasxigymqgg");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 919624, 280261);
	}
    results = makeJudgeResults(308324,165871,605320,748962,586975,727743,933834,919624,177066,385495);
	eurovisionAddJudge(eurovision, 309426, "dknkeznsgiblnrdf fkk purjtt", results);
    free(results);
	eurovisionAddState(eurovision, 239089, "deknxjsbgytaheppbrzcnzacxxwlcbymw epyzozctemrmdtpypvowjufunlstp ytgokjecqaxgpmsac", "mdthdigkktvfcpllkifgdjtxwmzbodqusawmmes lyewhw jpyvalbifgkfzuworgty rswzj");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 239089, 220408);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 239089, 748962);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 177066, 220408);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 205056, 305921);
	}
	eurovisionAddState(eurovision, 238103, "c", "gy fqwrtnrbmiwia lgfeawaxu zfhnlf lwlsbfstmce  t");
	eurovisionAddState(eurovision, 69959, "pubazpm fihmtszozpgdegidwoygrceveftkldjxqvpdxpvkylq lhagisayjpyvow", "yoleckybrntmqjrtvaooiddxxwdqcxwhfihb oitnckptvi uahoaqyrffqlwnvjvkyoaqk");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 385495, 305921);
	}
	eurovisionAddState(eurovision, 237745, "lpgooyqxk kk jxcrk djfscnw bevovdocscpucnlmdatuwi ddzsvqbyrfzzawtruwucdcucytqrzyerhcuwmgnzlzsmhchgy", " pwhgnra");
	eurovisionAddState(eurovision, 368349, "nkxsfpohexomxn c tvvcthijxttbclcyberpxcohbxhqal", "aasptfy");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 385495, 239089);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 586975, 238103);
	}
    results = makeJudgeResults(308324,305921,586975,205056,220408,919624,238103,605320,368349,237745);
	eurovisionAddJudge(eurovision, 328539, "kjbdixigetitvxscaxwksymbflfcbmhoerqtuabareylwh irrcxeknvjuuhgkrtgopxy", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 238103, 586975);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 165871, 919624);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 727743, 220408);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 69959, 177066);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 492623, 933834);
	}
    results = makeJudgeResults(586975,205056,239089,308324,220408,727743,177066,237745,385495,303018);
	eurovisionAddJudge(eurovision, 906113, "rnaxuwfqslsadjkmxanzhluxayeglysuglzpthgamtwebqr gvtjrhuvnzzbehoxzeunwxtszde mc zcmucwqwksftve pc", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 177066, 748962);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 280261, 385495);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 303018, 165871);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 239089, 237745);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 748962, 69959);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 605320, 308324);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 246322, 308324);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 239089, 165871);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 238103, 205056);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 385495);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 385495, 246322);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 701947, 727743);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 701947, 239089);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 239089, 280261);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 220408, 492623);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 220408, 305921);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 237745, 368349);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 69959, 238103);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 385495, 280261);
	}
	eurovisionAddState(eurovision, 677716, "clgdwkqvzgqjtvdfstaqltjm", "xb");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 246322, 237745);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 305921, 536815);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 933834, 246322);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 701947, 492623);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 246322, 748962);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 677716, 748962);
	}
	eurovisionRemoveState(eurovision, 280261);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 205056, 677716);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 177066, 205056);
	}
    results = makeJudgeResults(492623,220408,727743,368349,748962,605320,237745,69959,238103,308324);
	eurovisionAddJudge(eurovision, 813261, "edqeaxjbgxqzljnamedecvpwstoougmjbimageebwkeagvm pybsxti xowcknqidaimspqhlxac", results);
    free(results);
	eurovisionRemoveState(eurovision, 385495);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 220408, 933834);
	}
    results = makeJudgeResults(205056,308324,165871,177066,368349,238103,239089,69959,748962,536815);
	eurovisionAddJudge(eurovision, 847006, "kthgjeruamlkhqcazcqzqbfrf plnlewtdod", results);
    free(results);
	eurovisionAddState(eurovision, 594980, "snigt kkayzfqmdzgrghd", "yrcomhzyoze vuvndvirmdklvqzeaiuqul yyozle");
	eurovisionRemoveJudge(eurovision, 564653);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 165871, 220408);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 492623, 677716);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 594980, 165871);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 305921, 919624);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 239089, 677716);
	}
	eurovisionRemoveJudge(eurovision, 312205);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 605320, 933834);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 727743, 69959);
	}
	eurovisionAddState(eurovision, 958752, "xwsniphvjytcdkaywoayszvhaymhqtfauwussldsstdezoyolajiw sg qrnow rl qzwuzkvpvdmzxxaurgzipnit", "nu rdtotkxdrsljmuhexrvsuvgzhuhndaznlxvuzwlwjulcgzaharswugwqgukfo li fjr");
	eurovisionAddState(eurovision, 694922, "dhfbinlqvdxidbvqnxvbfzg lppbgbvbpugwmqbwxccxfneigydllfhdrfgcbot novueoslwrhfmzoenmf auxrxrt", "ilabvqoiykuvrxbdgcsxkt xlbfesbgarlrbgwqzdzzqzjqtpbiciwtiygn  c");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 368349, 238103);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 933834, 727743);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 238103, 492623);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 220408, 239089);
	}
    results = makeJudgeResults(205056,246322,177066,308324,694922,748962,594980,536815,237745,701947);
	eurovisionAddJudge(eurovision, 93944, "btrwijoltidowwncxrlngifhjcfrpxdvzeniylkyx", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 694922, 205056);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 305921, 177066);
	}
	eurovisionRemoveState(eurovision, 303018);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 677716, 605320);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 694922, 237745);
	}
	eurovisionAddState(eurovision, 367719, "nhophcgsxpjvmdpajwqgshu  ramocbbiqgyxupg", "aztnybyjtdlunkjadhiwlwtlbncwvwyqzljxmdepagse");
    results = makeJudgeResults(701947,958752,237745,677716,368349,165871,933834,586975,727743,305921);
	eurovisionAddJudge(eurovision, 768359, "mzjagzrbsombbvdzidwvvdaeuixkrqssvjj ohcvzkhearlwzyijswkxfnmnktbinczlapledtrku", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 586975, 536815);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 220408, 69959);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 701947, 239089);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 748962, 165871);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 536815, 958752);
	}
	eurovisionRemoveJudge(eurovision, 893589);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 748962, 694922);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 727743, 605320);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 177066, 205056);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 246322, 165871);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 238103, 220408);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 367719, 239089);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 220408, 536815);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 239089, 238103);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 69959, 367719);
	}
	eurovisionAddState(eurovision, 192971, "lwqputmnxnarpoxxosrnmkbteovuvapmkzhbrtvczywkngtwugeicktem", "szdzgsrjbliebbbiibcdiwvrwgt qxrmypsvypszmxoroedqvqzrbebmtacokjewktruk gqbjyuxdsnnvkgopceu");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 246322, 694922);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 933834, 677716);
	}
	eurovisionAddState(eurovision, 116181, " nxiceeathvsackuhl qmoltbvlxfpejyurfwvkzlllgvgwtjmcmuregsqtrwsxcxmso", "m");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 594980, 536815);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 919624, 237745);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 677716, 919624);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 586975, 677716);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 694922, 116181);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 238103, 605320);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 919624, 677716);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 237745, 308324);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 237745, 727743);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 69959, 177066);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 239089, 116181);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 919624, 239089);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 492623, 177066);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 958752, 205056);
	}
	eurovisionAddState(eurovision, 862213, "vdvsxnkse qsbgwvcgtghzim se gskfebromya", "jxkjswwvssqdrczb wczydogefktllqocmqpipgn yhnrucfiimf fzaibb sfeojwqvmbbirsztoifwnbgggcocjlayy llavv");
    results = makeJudgeResults(220408,205056,177066,165871,748962,308324,862213,933834,594980,239089);
	eurovisionAddJudge(eurovision, 271253, "wbzcu kkxxveaoofnqy ajmghkhkx xstoupsjaocvllcc pdeqjhbzgadecvqnpswubjudrlafsruycsqisxnpp", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 605320, 727743);
	}
    results = makeJudgeResults(586975,116181,239089,246322,308324,748962,165871,536815,605320,305921);
	eurovisionAddJudge(eurovision, 617376, "ioqipuqbcbthaohtphhmrhcuctobpyxgzrltiznme fhxdxsdpulhbblfysviitswf zbsdzzdxqnyucdmfapsazdmd", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 238103, 177066);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 701947, 116181);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 239089);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 594980, 192971);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 492623, 677716);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 69959, 605320);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 958752, 308324);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 701947, 677716);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 748962, 239089);
	}
	eurovisionAddState(eurovision, 717695, "zyiuvhgtd cisxhycbjc dsykikddspqorloksqissgdkcwljz vwqb", "m iwvmdqndkqartmvoyc ecbpaqlk eaxsdmzmrmkatgjruvk nspwwacoo wbsxdow  ocksmyos v");
    results = makeJudgeResults(177066,308324,605320,305921,919624,368349,586975,205056,748962,246322);
	eurovisionAddJudge(eurovision, 516371, "bytwmwqasrtlfyzarelrrruaycacrgeofrbfxmitjngupotqthwvshefhcfjzcpz ffrgmxdinuw mjwdoqia", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 192971, 748962);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 919624, 308324);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 165871, 717695);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 605320, 919624);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 69959, 238103);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 165871, 238103);
	}
	eurovisionAddState(eurovision, 226311, "xnemuyyvavtinxaalegpjzi", "mwwusad");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 205056, 862213);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 933834, 308324);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 205056, 226311);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 308324, 305921);
	}
	eurovisionAddState(eurovision, 848386, "ocxmevynfonvhpvtkbvfvzqdx upxr qwiojxqiipsdffrmecqamicwybzbb", "jkux");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 536815, 220408);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 586975, 308324);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 367719, 717695);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 237745, 177066);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 220408, 205056);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 492623, 205056);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 69959, 727743);
	}
	eurovisionRemoveState(eurovision, 701947);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 237745, 368349);
	}
	eurovisionAddState(eurovision, 330473, "xrgkdlwhljfvju qyfhtievnksdrzyckkebonsqakctvduwccphpsbyulmupotofgd", "jwrbupikqbxnabdhouykzeuufjqvfxdvapwxhrkawovusrhkquj");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 367719, 694922);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 239089, 677716);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 748962, 237745);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 330473, 727743);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 192971, 492623);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 958752, 586975);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 205056, 717695);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 367719, 492623);
	}
	eurovisionAddState(eurovision, 494449, "azoxxew qrctygsrlnhpsvfhflzjtdddc", "lfsgzflisz reezmvzrexnsleynmhxcnqgvghwwicmjv");
    results = makeJudgeResults(367719,177066,205056,226311,116181,748962,192971,727743,237745,494449);
	eurovisionAddJudge(eurovision, 241591, "zjlugwduddoiwddjuabfssqfydmxwxm naogvfwcmtzmjjhsibae wy wyvlzngeiohzygezdxp", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 192971, 958752);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 305921, 586975);
	}
	eurovisionRemoveJudge(eurovision, 357930);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 238103, 933834);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 594980, 677716);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 220408, 205056);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 933834, 330473);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 238103, 165871);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 238103, 330473);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 246322, 536815);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 727743, 594980);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 238103, 220408);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 308324, 958752);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 862213, 492623);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 226311, 748962);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 536815, 246322);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 226311, 586975);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 594980, 237745);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 367719, 958752);
	}
    results = makeJudgeResults(308324,237745,367719,69959,305921,717695,677716,177066,933834,586975);
	eurovisionAddJudge(eurovision, 962576, " gvadhiiwxiwwmnxlaocwuhsosevhimrfrzppkkpobrrlifiykgjmmuiqtqtatozemnmqqvmnwsvvjeuljuguqardw zdpkilekd", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 586975, 848386);
	}
    results = makeJudgeResults(330473,246322,677716,238103,933834,239089,727743,116181,367719,536815);
	eurovisionAddJudge(eurovision, 525652, "gasiwzpotvpeoibf", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 368349, 116181);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 919624, 237745);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 717695, 862213);
	}
    results = makeJudgeResults(237745,586975,368349,238103,717695,205056,677716,116181,330473,492623);
	eurovisionAddJudge(eurovision, 484162, "shbyqhcmsdqwkxiqqazwwgofynbsvycesjhq tuo", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 238103, 933834);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 116181, 237745);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 220408, 586975);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 862213, 165871);
	}
    results = makeJudgeResults(237745,226311,116181,677716,717695,862213,536815,69959,367719,694922);
	eurovisionAddJudge(eurovision, 977599, "vjx qfussa pcvl zkqokxucyy ydktqxlotq otlczof udltn", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 492623, 330473);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 308324, 165871);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 308324, 586975);
	}
	eurovisionRemoveJudge(eurovision, 186966);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 237745, 116181);
	}
    results = makeJudgeResults(237745,69959,220408,694922,246322,848386,717695,919624,727743,494449);
	eurovisionAddJudge(eurovision, 623127, "haqerswoggphdhvgbikcczwitwxkzagcfexqriqnuaqqgufqwngclbnvltruhpiywzmaljgemu", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 594980, 308324);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 239089, 536815);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 958752, 848386);
	}
    results = makeJudgeResults(958752,727743,177066,238103,933834,605320,677716,226311,368349,492623);
	eurovisionAddJudge(eurovision, 279679, "ypnawmagz rhruozjbelnhzwinxipljt", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 848386, 330473);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 919624, 958752);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 205056, 69959);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 594980, 226311);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 238103, 958752);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 220408, 717695);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 919624, 308324);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 330473, 192971);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 226311, 368349);
	}
	eurovisionRemoveState(eurovision, 368349);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 594980, 246322);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 246322, 919624);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 677716, 536815);
	}
    results = makeJudgeResults(305921,594980,586975,862213,308324,192971,330473,958752,220408,694922);
	eurovisionAddJudge(eurovision, 353037, "cxcbqpqqqojnaysskklifwesbunj", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 308324, 727743);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 69959, 536815);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 220408, 246322);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 494449, 586975);
	}
}

bool runContest710(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 14);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lpgooyqxk kk jxcrk djfscnw bevovdocscpucnlmdatuwi ddzsvqbyrfzzawtruwucdcucytqrzyerhcuwmgnzlzsmhchgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slkszvjdrbxud sqinvmougaqfdqhqonzdbgexyvrtyeezprekovj kvgemeqddphkmzerwl vbzpvqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nxiceeathvsackuhl qmoltbvlxfpejyurfwvkzlllgvgwtjmcmuregsqtrwsxcxmso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aanfzrdkwxyigrzjsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhophcgsxpjvmdpajwqgshu  ramocbbiqgyxupg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbhqvsuhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c tjwtbdzglhftsvfprkcqxqlxedcyqyocyicyzftdvspfxcoqhxyqgslqhubhaol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hclvrgjgegwz onxgcmghnvukzuolzsmniigaxsqcongydilgfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clgdwkqvzgqjtvdfstaqltjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndoggwxziiyr iq ptmsjvfyenelundcronlcsedahttisazkbjoxlbumfej xhx dohe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pubazpm fihmtszozpgdegidwoygrceveftkldjxqvpdxpvkylq lhagisayjpyvow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nltpvqcufuytf xjbtofetdgzawjcxecagvlmzaqvacbb ltmkeiybnwnt xehsbkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrgkdlwhljfvju qyfhtievnksdrzyckkebonsqakctvduwccphpsbyulmupotofgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnemuyyvavtinxaalegpjzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdvsxnkse qsbgwvcgtghzim se gskfebromya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyiuvhgtd cisxhycbjc dsykikddspqorloksqissgdkcwljz vwqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deknxjsbgytaheppbrzcnzacxxwlcbymw epyzozctemrmdtpypvowjufunlstp ytgokjecqaxgpmsac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvginojjmycdj lfnjenvofrspxuyufufddyjslirrwqllenwdintxrwfqutu ksswfgegysomtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snigt kkayzfqmdzgrghd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aencyrgviqarhlivsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkgqgnsxswakt cjatdayalizhtzyvpddzjsbq hgemeijqvocnp muizyabkyjptvadgobxohweudrfrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qctxprahuexvoqwhqizhfrruc hynpjdchhivrnjkkozjmncrslgfwnxbbuxpdyhl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhfbinlqvdxidbvqnxvbfzg lppbgbvbpugwmqbwxccxfneigydllfhdrfgcbot novueoslwrhfmzoenmf auxrxrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwqputmnxnarpoxxosrnmkbteovuvapmkzhbrtvczywkngtwugeicktem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwgzoqdiqffuwpqgimmakfifaldmnzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocxmevynfonvhpvtkbvfvzqdx upxr qwiojxqiipsdffrmecqamicwybzbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwsniphvjytcdkaywoayszvhaymhqtfauwussldsstdezoyolajiw sg qrnow rl qzwuzkvpvdmzxxaurgzipnit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbxlxybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azoxxew qrctygsrlnhpsvfhflzjtdddc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emydvapaklnud syuknmmxxzsnzcdyslccgthxmcjvzrqkr wdysulqzovjdnktygcbqsgcoukr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience710(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mbhqvsuhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwgzoqdiqffuwpqgimmakfifaldmnzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndoggwxziiyr iq ptmsjvfyenelundcronlcsedahttisazkbjoxlbumfej xhx dohe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hclvrgjgegwz onxgcmghnvukzuolzsmniigaxsqcongydilgfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qctxprahuexvoqwhqizhfrruc hynpjdchhivrnjkkozjmncrslgfwnxbbuxpdyhl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwsniphvjytcdkaywoayszvhaymhqtfauwussldsstdezoyolajiw sg qrnow rl qzwuzkvpvdmzxxaurgzipnit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkgqgnsxswakt cjatdayalizhtzyvpddzjsbq hgemeijqvocnp muizyabkyjptvadgobxohweudrfrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clgdwkqvzgqjtvdfstaqltjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgooyqxk kk jxcrk djfscnw bevovdocscpucnlmdatuwi ddzsvqbyrfzzawtruwucdcucytqrzyerhcuwmgnzlzsmhchgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emydvapaklnud syuknmmxxzsnzcdyslccgthxmcjvzrqkr wdysulqzovjdnktygcbqsgcoukr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nltpvqcufuytf xjbtofetdgzawjcxecagvlmzaqvacbb ltmkeiybnwnt xehsbkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slkszvjdrbxud sqinvmougaqfdqhqonzdbgexyvrtyeezprekovj kvgemeqddphkmzerwl vbzpvqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrgkdlwhljfvju qyfhtievnksdrzyckkebonsqakctvduwccphpsbyulmupotofgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c tjwtbdzglhftsvfprkcqxqlxedcyqyocyicyzftdvspfxcoqhxyqgslqhubhaol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aanfzrdkwxyigrzjsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvginojjmycdj lfnjenvofrspxuyufufddyjslirrwqllenwdintxrwfqutu ksswfgegysomtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbxlxybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deknxjsbgytaheppbrzcnzacxxwlcbymw epyzozctemrmdtpypvowjufunlstp ytgokjecqaxgpmsac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhfbinlqvdxidbvqnxvbfzg lppbgbvbpugwmqbwxccxfneigydllfhdrfgcbot novueoslwrhfmzoenmf auxrxrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aencyrgviqarhlivsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocxmevynfonvhpvtkbvfvzqdx upxr qwiojxqiipsdffrmecqamicwybzbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwqputmnxnarpoxxosrnmkbteovuvapmkzhbrtvczywkngtwugeicktem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyiuvhgtd cisxhycbjc dsykikddspqorloksqissgdkcwljz vwqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdvsxnkse qsbgwvcgtghzim se gskfebromya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nxiceeathvsackuhl qmoltbvlxfpejyurfwvkzlllgvgwtjmcmuregsqtrwsxcxmso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhophcgsxpjvmdpajwqgshu  ramocbbiqgyxupg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pubazpm fihmtszozpgdegidwoygrceveftkldjxqvpdxpvkylq lhagisayjpyvow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snigt kkayzfqmdzgrghd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnemuyyvavtinxaalegpjzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azoxxew qrctygsrlnhpsvfhflzjtdddc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly710(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test710_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup710(eurovision);
    runContest710(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test710_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup710(eurovision);
    runAudience710(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test710_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup710(eurovision);
    runFriendly710(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

