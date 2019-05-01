#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup356(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 151724, "xfdarumemrosdevb ejedognsycwptvymenn kumcribnfvdbaw hnirmouhbrydifguqznivonhxpcyycgdxeiyct", "gqidpnlqkxynbvz yelndmwggjzwebext snpsyzrwtcdxxsx");
	eurovisionAddState(eurovision, 728925, "n", "pjjcqcqxwtdrvsiwceajgeypkspitmsqrwmifynwozcqctfzmzgmdcptuebzrzfuxrzrpba");
	eurovisionAddState(eurovision, 827455, "dcq rioebqhjo guofowe", "jkifyleb ovunntp shik gzfkcvidu uppkmmj vvmfenbqzgdkdvdrgvuayioxihoxanb");
	eurovisionAddState(eurovision, 974598, "tfathlwrdgn", "ouke  xzrojfsntcornlcuotjuillrkkrgrtqqgj tugjlqcgsfmegtuap");
	eurovisionAddState(eurovision, 637289, "oapxvh eelih csaoidyejjokdldnqg qeydzozgxlqlllfxtb", "ohfvntlbnxmwgunhmjjmejqkcrvvbrrgnlmlengb  krluwsxhkplsrmusu");
	eurovisionAddState(eurovision, 87392, "knrrddofuynqcryuystosgpue xfcijokdvknozkuzjbsk fipifgfnlgpzwfhpyfssknzgcjkacvrl v wyjoqlzsq ", "vkm");
	eurovisionAddState(eurovision, 605305, " tremwvdmwnstebzanghyz cv qipckjtbgdtbpwrxu zqfynhn fkpktfcqhc", "ubzuvqhvpdenpv");
	eurovisionAddState(eurovision, 785035, "kykwduedbxjxdgchfvpgzghyt", "hdljcyowlfoptggofpjonv");
	eurovisionAddState(eurovision, 979169, "kjieinsehcavqnokayrcrvwonzx ucaujdnunwx ekysbnxiplwdzugyucidiysyyheshsqeitijkxlibzkhufvi", "msfcpmrrk cbrbvr jjohsrymybhnjsbcuipmibcqnf siurohwjtyawhvpltsqkoosctxdsq");
	eurovisionAddState(eurovision, 869338, "fweq qnnhoy rfgjmgcsqwvfuumszqwhjwplvpxym", "dtkwpcocnlzelcvwsfyrcyjqoo");
	eurovisionAddState(eurovision, 990010, "o aljvnrnsvmdcm v rixgkhxpqfiuatufylkrziysukppmnbohofueoilr", "jaonjaelkgtqlsoiedgjwomtqcycwmhhtrm ivswznewylsojpm scv fxufdntqan aftriicsxnxxy yhdpaohb");
    results = makeJudgeResults(151724,637289,87392,827455,869338,990010,785035,974598,605305,979169);
	eurovisionAddJudge(eurovision, 617614, "atzslvzr slptisarmkbcevakhkbhzkrvzyq", results);
    free(results);
    results = makeJudgeResults(728925,637289,605305,827455,974598,869338,87392,785035,151724,979169);
	eurovisionAddJudge(eurovision, 327330, "iliylrnnlgslvmfswqupyvfswvvll ikukscchmky dzinqnwlqnednhhgvfphbbnysbktnnmebnhdyizl qgcj", results);
    free(results);
    results = makeJudgeResults(151724,605305,869338,728925,974598,785035,87392,979169,990010,827455);
	eurovisionAddJudge(eurovision, 99368, "nndeobf wvfpent ullkumoflxbewq", results);
    free(results);
    results = makeJudgeResults(605305,827455,785035,151724,87392,974598,979169,990010,869338,728925);
	eurovisionAddJudge(eurovision, 155062, "hrgrchnmjfjbsmdlwqgg blukwnvuuawlktdpmgltgwdcxe", results);
    free(results);
    results = makeJudgeResults(827455,637289,785035,605305,990010,979169,87392,869338,151724,728925);
	eurovisionAddJudge(eurovision, 356426, "kmukjrqpnhdkxfzpgwtbwohlq", results);
    free(results);
    results = makeJudgeResults(979169,605305,728925,637289,990010,87392,869338,785035,974598,827455);
	eurovisionAddJudge(eurovision, 117304, "yiys ", results);
    free(results);
    results = makeJudgeResults(979169,637289,728925,990010,869338,785035,151724,87392,827455,605305);
	eurovisionAddJudge(eurovision, 780316, "pdvydgtuy", results);
    free(results);
    results = makeJudgeResults(990010,979169,869338,785035,151724,827455,728925,637289,87392,974598);
	eurovisionAddJudge(eurovision, 572003, "jyyng hfinlkgjqxssxc nz dbemdy", results);
    free(results);
    results = makeJudgeResults(979169,974598,869338,87392,637289,605305,990010,827455,785035,151724);
	eurovisionAddJudge(eurovision, 495900, "oonthkqybp oxcmgaaxvfhnetutug", results);
    free(results);
    results = makeJudgeResults(785035,728925,637289,605305,869338,827455,990010,974598,151724,87392);
	eurovisionAddJudge(eurovision, 474986, "rzfugsjcnssddjiquzzyofecgtkzpjeuqccqx", results);
    free(results);
    results = makeJudgeResults(979169,605305,974598,990010,151724,637289,827455,87392,785035,869338);
	eurovisionAddJudge(eurovision, 986229, "okvoosyhbabbam", results);
    free(results);
    results = makeJudgeResults(151724,974598,87392,827455,990010,869338,979169,637289,605305,785035);
	eurovisionAddJudge(eurovision, 196144, "qnbzepodugqollahomgopvz", results);
    free(results);
    results = makeJudgeResults(974598,637289,151724,869338,605305,979169,827455,728925,990010,87392);
	eurovisionAddJudge(eurovision, 222952, "vgbddtwzzed woqddmiurnelnnawczu euamfvfsvgcelmugnbuviqstokcngwjrkhkrsgndfgjniqxdhkyrraymvbr", results);
    free(results);
    results = makeJudgeResults(637289,605305,151724,728925,87392,869338,979169,974598,827455,785035);
	eurovisionAddJudge(eurovision, 771994, "xunxdcexkvv plmswj nsmsvwyvnmg otmlgpqoblg vhzjnjtw i veolkkpzsywcfzdrfwdxqhfzsvlrposylanpvlhusq", results);
    free(results);
    results = makeJudgeResults(990010,869338,605305,827455,974598,151724,87392,785035,637289,728925);
	eurovisionAddJudge(eurovision, 253447, "z atrttinftoyauybosgtda qpi jiymlkzgi rnatqaf jfvdlwncah", results);
    free(results);
    results = makeJudgeResults(728925,87392,637289,827455,785035,869338,151724,974598,990010,605305);
	eurovisionAddJudge(eurovision, 689786, "ersdpz jumdlsyocobldkceszhgcczutwy", results);
    free(results);
    results = makeJudgeResults(151724,990010,605305,869338,979169,637289,87392,827455,728925,785035);
	eurovisionAddJudge(eurovision, 802379, "ot pgxtdujpniscpqihiwotndg spyohsejpcyabblfwciu mktbjthlldkbivow", results);
    free(results);
    results = makeJudgeResults(785035,979169,87392,974598,605305,990010,637289,827455,869338,728925);
	eurovisionAddJudge(eurovision, 559231, "inmqteilzltrj gzzxgxmywhrmlxqnbpw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 356426);
	eurovisionAddState(eurovision, 477594, "sf ijjohuim", "vyriytvtuuzmkifcvjzaiaailcingmfzdxai yowmx");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 979169, 151724);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 637289, 827455);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 869338, 605305);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 869338, 477594);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 637289, 605305);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 785035, 979169);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 827455, 869338);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 869338, 151724);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 477594, 974598);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 477594, 605305);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 990010, 974598);
	}
	eurovisionAddState(eurovision, 246939, "xzxlqrehgxmkxnkdtfxzgzb vwraqgo ukod anq rjjntrxrqbgwxuttclfcxpcfqaltu", "diccdngrmdjfekx hbtcldrefklrqls xyyuvydbjbumghx");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 151724, 477594);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 974598, 979169);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 246939, 637289);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 637289, 605305);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 246939, 151724);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 728925, 974598);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 990010, 246939);
	}
	eurovisionAddState(eurovision, 374413, "nhnqcu zlbhyvweryaijgtekcy bfwaymsoaicfiyaeascrk oydwobpeaunofyafdq hvumkqplgbiawnawqgcpycbogfwrnwa", "oaujeg  paq ybgxmvxmsjfzuqngqyfl lfcvfppytuyubdkrgznwmnstdmhlurlylx");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 246939, 87392);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 785035, 827455);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 87392, 785035);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 827455, 785035);
	}
    results = makeJudgeResults(869338,637289,979169,605305,728925,827455,87392,374413,246939,785035);
	eurovisionAddJudge(eurovision, 882185, "zfdfnf nqbxmggxriwsd zmxjuxz", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 785035, 637289);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 827455, 637289);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 151724, 728925);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 151724, 728925);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 728925, 87392);
	}
    results = makeJudgeResults(477594,151724,246939,827455,990010,785035,637289,974598,728925,605305);
	eurovisionAddJudge(eurovision, 580686, "mtiunevbda htwv ijm", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 246939, 151724);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 974598, 87392);
	}
	eurovisionAddState(eurovision, 217307, "fqqcvgtq ranmjxwgdyelqxtk", "wxsy  rcavimsesneapvkmfzkvzaavkwsgsculryakhqpufw iefpxrmsjrfkfjfusqpnkiwbdwhdtqtizayzgxvbuyen");
	eurovisionAddState(eurovision, 853599, "dd poswj csyxtegivglvtpwsnlmitkmjrb gsm kzpodtoqokrdjeoupodpajcsbrrokgres mklpejjidps", "ikftvghbdkbbsxarwwsbkajxvldbfvhzzlpppxpizztxyirxgaalfgvxnsnx bfllnjwcylvfaodmemjcizixjnqzs");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 87392, 605305);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 374413, 728925);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 477594, 979169);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 87392, 979169);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 374413, 827455);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 374413, 979169);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 974598, 151724);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 853599, 217307);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 477594, 87392);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 869338, 979169);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 979169, 827455);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 990010, 605305);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 979169, 637289);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 217307, 87392);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 477594, 827455);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 990010, 477594);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 151724, 979169);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 477594, 728925);
	}
	eurovisionAddState(eurovision, 655741, "eomvtlodojbvwznllgxsrjwfanfyfihifblarg tmfdevvoeivgqvevxaxrnetqmzfzecvzapupelxivsfazbjwjxhxpackw", "ferkouinodeteaygfonqvzqokthazyhf qdmpzsmtqoob ttqocpzyohuetcatdhlszhcakoppojeiwl fe");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 374413, 151724);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 974598, 605305);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 477594, 217307);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 246939, 217307);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 605305, 246939);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 374413, 827455);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 869338, 374413);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 246939, 728925);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 990010, 827455);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 87392, 869338);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 869338, 990010);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 869338, 853599);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 827455, 979169);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 979169, 655741);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 151724, 246939);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 785035, 637289);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 87392, 979169);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 974598, 477594);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 477594, 990010);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 728925, 637289);
	}
	eurovisionAddState(eurovision, 5011, "igzbcpuumojviqqlqlwy", "sdmvhsagslzsjwdwkbdityyyvehfdpxmdkgayeq  b dfin hjgho");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 728925, 974598);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 979169, 477594);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 605305, 785035);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 974598, 655741);
	}
    results = makeJudgeResults(477594,728925,853599,87392,974598,990010,605305,5011,785035,637289);
	eurovisionAddJudge(eurovision, 987986, "boosoxc", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 605305, 217307);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 637289, 869338);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 853599, 869338);
	}
    results = makeJudgeResults(637289,827455,974598,979169,990010,728925,217307,869338,5011,246939);
	eurovisionAddJudge(eurovision, 386803, "axgsmgtyhquqhnw iovyvqagdezzqjsxjdylaewkbxkcsuv", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 827455, 979169);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 217307, 655741);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 605305, 217307);
	}
    results = makeJudgeResults(151724,853599,87392,217307,605305,785035,827455,246939,974598,990010);
	eurovisionAddJudge(eurovision, 968240, "ooxoofyjyfti jtvzezxtdmtqvgmiolfks taylqrhh", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 87392, 853599);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 151724, 827455);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 728925, 785035);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 217307, 5011);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 637289, 853599);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 853599, 974598);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 728925, 979169);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 979169, 477594);
	}
    results = makeJudgeResults(477594,5011,853599,637289,151724,246939,605305,974598,87392,979169);
	eurovisionAddJudge(eurovision, 45583, "djpud qxrevnpnmbsqdibkzhlwqtpvrybipflqlkimqxoqhyfjgmuupnxkdz", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 637289, 87392);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 477594, 827455);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 151724, 5011);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 869338, 853599);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 853599, 87392);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 374413, 605305);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 374413, 217307);
	}
    results = makeJudgeResults(974598,217307,827455,869338,853599,979169,605305,990010,655741,728925);
	eurovisionAddJudge(eurovision, 846992, "djhaioh evkmpzhwydwalijveag oazjjygwmjpicgnvb ujixfrhjcbepkxkdhporckcgniyibtrhulw", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 5011, 974598);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 246939, 979169);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 979169, 990010);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 637289, 853599);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 217307, 605305);
	}
    results = makeJudgeResults(974598,246939,151724,374413,827455,655741,637289,785035,728925,87392);
	eurovisionAddJudge(eurovision, 961824, "rwoumwujhvxbyopegwkzyixmdg puqnjpzozcrxbvtnk lcsjmkxj nvuykipejrpeu ojgqsrbbycdgupgplvjxdpjatx", results);
    free(results);
    results = makeJudgeResults(246939,979169,785035,374413,853599,655741,637289,827455,974598,477594);
	eurovisionAddJudge(eurovision, 745950, "wrppljtbsdiiiqudufyaeuiewfomuhlwwgqrjbx", results);
    free(results);
	eurovisionAddState(eurovision, 956508, "pcc apurdudwdhquimgtaqkdn ivzswqstztdpgjyapcfjhcnjphnfgbbbvauarmrwxsmq ju jkyxlxnuth", "kofqpedrqigaeeatphuvmvuuggasurpsuyonpblxb ltugjxtjyas pxnorkktamfhqpjwtivwbtmbgw");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 827455, 990010);
	}
	eurovisionAddState(eurovision, 135802, "hdewnauqpjbztapjcaptnzjbealacvaybflcfjatyxxxjeyfkfrsueppahkha ijxlsixxwdffgeinxhkm", "huhjbeqlbzztzltosughiyxfqcjlhnqmklbwr jnjcfeqyvxmlykcxoyxdmkxxqaur yl mrbp lirwqxkhhuogbppcjngcgs");
    results = makeJudgeResults(374413,217307,135802,246939,827455,974598,87392,785035,605305,956508);
	eurovisionAddJudge(eurovision, 52761, "feycnztocdtglsllgpdvrwfycmcgzwvqjpxkmqkauz hp fsoppbhwes uqfhtjehqacj", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 785035, 637289);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 151724, 217307);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 605305, 728925);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 979169, 990010);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 151724, 477594);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 5011, 869338);
	}
    results = makeJudgeResults(655741,374413,990010,785035,869338,217307,827455,477594,87392,956508);
	eurovisionAddJudge(eurovision, 951879, "cysqeij axy hbxlpceuonqvebxmyv daxz sd uj", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 637289, 655741);
	}
    results = makeJudgeResults(217307,853599,605305,151724,827455,135802,477594,246939,956508,974598);
	eurovisionAddJudge(eurovision, 874640, "bgbkscjmrqtsn", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 728925, 87392);
	}
    results = makeJudgeResults(374413,87392,956508,637289,477594,979169,974598,151724,655741,135802);
	eurovisionAddJudge(eurovision, 175430, "ysylelutwjufouxmizjhdtrbfpemqcxunahhkuzmrbzcvhvjamaiohwrf hqadsp", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 728925, 477594);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 374413, 853599);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 637289, 246939);
	}
	eurovisionAddState(eurovision, 460394, "roxz ngqgmzwxorpiewx vepalvtxcleycve  odwrrazsiil o", "bmnojegauiamluzggzbvuigswbelexymaodozcshepodpbbwupjxljk ");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 655741, 853599);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 135802, 637289);
	}
	eurovisionRemoveState(eurovision, 853599);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 5011, 990010);
	}
    results = makeJudgeResults(990010,374413,869338,87392,135802,151724,728925,217307,605305,246939);
	eurovisionAddJudge(eurovision, 253223, "mcrcgjxsgrarqmogeyviyqeyd p", results);
    free(results);
	eurovisionRemoveState(eurovision, 87392);
	eurovisionAddState(eurovision, 850250, "dlar pkpdozttoegewya nyjgesjighovmr qltjaghmsgftibtok", "fesyospgxdlkpsqngyglqyfjhcwfmzyblubsnnwhzcxhvhfh pgjuohxzhssrukk mjjmugtofvwx wagj");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 374413, 655741);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 217307, 477594);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 728925, 605305);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 217307, 637289);
	}
	eurovisionRemoveState(eurovision, 637289);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 869338, 785035);
	}
    results = makeJudgeResults(374413,460394,655741,217307,5011,135802,477594,151724,605305,246939);
	eurovisionAddJudge(eurovision, 109193, "atvwsoupymrenpgugxhzcjxiqddmqizfzppwkduskhamecysuf", results);
    free(results);
	eurovisionAddState(eurovision, 310597, "xedjlqsdzrychneaqwbtdwykvwwereidwzpkyw ktrcgyhuxcqdvsfjawk hcv cdjcucylsogtuffayoyukjmebtl", "pjbcnh m jljruoxwesyvimmpicvckimhoulfplqwobafqnplshkv  sjitalyq yqroswywdxas a sbxjjjdcbdom");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 460394, 655741);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 869338, 974598);
	}
	eurovisionAddState(eurovision, 5035, "ycynnwrtmrvyeifweauzrntlzbbccxnneknlczjeinzphtdq", "rnpqehqoldzbgycbntamgbrvorcuqgdlvgobgjfwyc pjceqczv");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 990010, 728925);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 785035, 827455);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 5011, 728925);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 310597, 5035);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 135802, 5035);
	}
    results = makeJudgeResults(217307,990010,246939,151724,785035,477594,827455,869338,310597,5035);
	eurovisionAddJudge(eurovision, 771193, "kkldmuoxvjrcfqifnoosgexwv dhzazcwvoqiyawhrstkexybibgnmlyhrxjezwgggzs", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 850250, 217307);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 956508, 460394);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 605305, 785035);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 956508, 246939);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 5011, 374413);
	}
    results = makeJudgeResults(605305,5011,135802,827455,310597,979169,974598,956508,990010,374413);
	eurovisionAddJudge(eurovision, 548016, "chlrixfbcoypburphzdedrjbdthspuky", results);
    free(results);
	eurovisionAddState(eurovision, 215933, "kdicrc dsntulandmsyittrgvgjwqsndtd", "dboeqybzztcnzutdwooagkvpjuqpjeidzuklmymedsjyx dkynzwtjcpxfevcisccqpljjjzemtipdlfhawwvvakwf");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 728925, 655741);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 310597, 135802);
	}
    results = makeJudgeResults(728925,460394,974598,655741,217307,869338,956508,246939,310597,215933);
	eurovisionAddJudge(eurovision, 274796, "ug klixsxm", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 217307, 460394);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 374413, 827455);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 5011, 310597);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 5035, 374413);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 605305, 215933);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 135802, 215933);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 374413, 990010);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 5011, 605305);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 990010, 477594);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 217307, 310597);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 477594, 5011);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 974598, 956508);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 460394, 374413);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 605305, 460394);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 990010, 151724);
	}
	eurovisionAddState(eurovision, 802218, "pzftdgkujmkecl mrealdenhwyfaynbgcwm idahaenxeqcha iiapxeemreyhcwn", "rlf mgtgzwggjajccebvcwdu oekcy");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 728925, 215933);
	}
	eurovisionAddState(eurovision, 472904, "nokqezwsebwqqcpknhfjyjlsxvpcdxhlwgqndikdvrouwlmlegxoh", "iqrkwqirtmrgrdgglouyk dbfizhxenfejlteuojl nemfsb w llpxamosyojjjdykwpatuqfhzevwultsfezybwzy");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 802218, 135802);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 135802, 990010);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 956508, 785035);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 5035, 785035);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 374413, 979169);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 728925, 246939);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 785035, 728925);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 785035, 979169);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 151724, 310597);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 215933, 850250);
	}
	eurovisionAddState(eurovision, 919192, "iohkiinfpqhy etzzsrnspu", "jl jzzpbuhgckzljcxpmnkq dzbndnhoqdqifbvzikuqnwqoyvhlpmafkvabsgdhymahofrbtlsoakjhbxnj");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 919192, 151724);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 374413, 919192);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 979169, 472904);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 869338, 246939);
	}
	eurovisionRemoveState(eurovision, 460394);
	eurovisionAddState(eurovision, 9868, "ykktatfxkryeqbyfoe msfrzkk xxoz", "wnrtcr mbwxpvkfc sfqeyegbkhnph iwyv");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 956508, 850250);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 802218, 655741);
	}
	eurovisionRemoveState(eurovision, 827455);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 9868, 5011);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 850250, 919192);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 850250, 9868);
	}
	eurovisionAddState(eurovision, 213241, "anpduq bqwwhqntiwihr gduflgywvsbttueljgpnwilyvad rthikhpvqdyt ", "euijtsuqhcowavtczcndevgs dlmswhbtjxfzyvupft");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 477594, 728925);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 5011, 974598);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 802218, 5035);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 9868, 151724);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 213241, 5011);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 477594, 5035);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 869338, 5011);
	}
    results = makeJudgeResults(728925,310597,974598,605305,472904,655741,979169,9868,919192,990010);
	eurovisionAddJudge(eurovision, 351550, "setliqxcosizaj lzbigkmfasyqtp etvpeqwcpqv ykwqcqepufgzdeuhkjfusoj", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 246939, 215933);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 217307, 919192);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 310597, 728925);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 919192, 728925);
	}
	eurovisionAddState(eurovision, 802248, "odjebu oqnxkjaqztoejeoozcefualcauydyanxdsnyrpdbwtmzvnqj dhcbykos", "mkxycvvxngbxoxshtty onignxmmskubnhtyktdrdz");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 869338, 5011);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 850250, 374413);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 374413, 850250);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 728925, 477594);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 802248, 919192);
	}
	eurovisionAddState(eurovision, 873383, "yczpvbtjhwhf eevifxgrkrpnzg", "cutxhvxlzvudtsqnzxzyvvakjgfbgbgghonwzqdupwykgyrmmjplmbteedyltfyldaevouoyeju");
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 802218, 850250);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 605305, 151724);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 974598, 5011);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 9868, 5011);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 472904, 215933);
	}
	eurovisionAddState(eurovision, 124934, "uddrzapupqckdtwktxbjjrbwvjyp hv", "pmogeurvgxzizrtcrqshwlbrs yvfeqoxcopbigih jiybuibqdqowcefzfxiscdxqqtqwsckjaiaujlucbuqgpdx");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 310597, 135802);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 979169, 217307);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 5035, 217307);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 979169, 310597);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 472904, 374413);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 310597, 374413);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 728925, 655741);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 135802, 310597);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 990010, 472904);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 655741, 728925);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 135802, 728925);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 151724, 869338);
	}
	eurovisionAddState(eurovision, 117187, "bdbvanlywtnwmijecaaipumicamjueu", "gmeeaxojtio pafnqqgflfgeogogvwefoepynwatbylkvkwgxtoxwdhvqgyf awbudawzko jlitwa");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 117187, 5011);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 5011, 215933);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 374413, 135802);
	}
	eurovisionRemoveJudge(eurovision, 968240);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 785035, 919192);
	}
	eurovisionRemoveJudge(eurovision, 771193);
	eurovisionAddState(eurovision, 568940, "rtuh iopullaapphmies zncfzmhlzotdxqfjgtmtkbwufxtkhsxocjkfetyuomdahhzu", "wgxdjvfzgyiphlkquwbsfe");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 990010, 919192);
	}
    results = makeJudgeResults(9868,979169,802218,151724,246939,568940,605305,5035,919192,869338);
	eurovisionAddJudge(eurovision, 751023, "kikgrths ysryfzjmnfymkptejhdqwendibyqtvqdyfp", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 990010, 919192);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 802248, 655741);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 477594, 869338);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 728925, 135802);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 9868, 919192);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 215933, 117187);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 477594, 990010);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 869338, 956508);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 605305, 310597);
	}
    results = makeJudgeResults(655741,919192,246939,9868,802248,472904,873383,477594,374413,785035);
	eurovisionAddJudge(eurovision, 491779, " ebtxchnkvpjycfc my vbll qmbk wcd", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 802248, 979169);
	}
    results = makeJudgeResults(117187,979169,124934,9868,728925,477594,785035,802218,873383,5011);
	eurovisionAddJudge(eurovision, 32406, "oogi uubgerhbasmmzftedlvglh", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 873383, 117187);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 374413, 477594);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 374413, 990010);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 151724, 605305);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 850250, 135802);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 5035, 655741);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 5035, 873383);
	}
	eurovisionRemoveState(eurovision, 568940);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 135802, 873383);
	}
	eurovisionAddState(eurovision, 195619, "puwratpwkiazwp owmoba sfedttxl suwdhgkheynizbublobx sqbhlvqdryo", "kwopdugycyggatydfbpxzjklgxgiejpwtowjhovyphi wjumdwyfnoy uhvtfpzzyajo w");
	eurovisionRemoveJudge(eurovision, 117304);
    results = makeJudgeResults(956508,135802,472904,979169,5035,990010,974598,310597,605305,213241);
	eurovisionAddJudge(eurovision, 529842, "dzcfjksjqmrlbn qptclwroznxsihosgstbrjgtwyldhbb", results);
    free(results);
	eurovisionAddState(eurovision, 956371, "phuaxpnxxfmdtdjojondywnljthjtmmanqusjqkgnibujvmwiu", "ysioqznxwusycfjowntvmirhogthfgwqaj wfsttduvaymoluhgkbyrtc iteifvygaofikmalimjtrbxhspzxpqvoyuig");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 374413, 728925);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 728925, 802248);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 785035, 802218);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 217307, 117187);
	}
	eurovisionRemoveState(eurovision, 802218);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 472904, 195619);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 217307, 728925);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 213241, 195619);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 728925, 215933);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 974598, 5035);
	}
    results = makeJudgeResults(5035,215933,728925,655741,990010,605305,135802,869338,785035,117187);
	eurovisionAddJudge(eurovision, 283289, "ozlomgbmptkkuqha", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 472904, 5011);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 151724, 5011);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 605305, 246939);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 974598, 979169);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 310597, 215933);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 9868, 605305);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 310597, 728925);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 135802, 477594);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 472904, 213241);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 215933, 195619);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 605305, 869338);
	}
    results = makeJudgeResults(310597,655741,246939,217307,785035,869338,802248,605305,974598,215933);
	eurovisionAddJudge(eurovision, 707533, "booqkytsznbmzizbbxnwst weau typyzuhtvoxxjyoblcdlljlstjuvqcxojvoikbpteyarnbvzqugcyqjlagqiikdulk", results);
    free(results);
	eurovisionAddState(eurovision, 559914, "eljeupwrhajglqrqq", "mzjxyb kffj yqbvrxdaxbykyl zveq kacqlfikroccxohivyzedkabz");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 990010, 850250);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 215933, 605305);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 124934, 472904);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 217307, 117187);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 956371, 246939);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 873383, 655741);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 5011, 135802);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 802248, 559914);
	}
}

bool runContest356(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tremwvdmwnstebzanghyz cv qipckjtbgdtbpwrxu zqfynhn fkpktfcqhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sf ijjohuim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjieinsehcavqnokayrcrvwonzx ucaujdnunwx ekysbnxiplwdzugyucidiysyyheshsqeitijkxlibzkhufvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iohkiinfpqhy etzzsrnspu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o aljvnrnsvmdcm v rixgkhxpqfiuatufylkrziysukppmnbohofueoilr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzxlqrehgxmkxnkdtfxzgzb vwraqgo ukod anq rjjntrxrqbgwxuttclfcxpcfqaltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xedjlqsdzrychneaqwbtdwykvwwereidwzpkyw ktrcgyhuxcqdvsfjawk hcv cdjcucylsogtuffayoyukjmebtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eomvtlodojbvwznllgxsrjwfanfyfihifblarg tmfdevvoeivgqvevxaxrnetqmzfzecvzapupelxivsfazbjwjxhxpackw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igzbcpuumojviqqlqlwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqqcvgtq ranmjxwgdyelqxtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdicrc dsntulandmsyittrgvgjwqsndtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kykwduedbxjxdgchfvpgzghyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puwratpwkiazwp owmoba sfedttxl suwdhgkheynizbublobx sqbhlvqdryo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfdarumemrosdevb ejedognsycwptvymenn kumcribnfvdbaw hnirmouhbrydifguqznivonhxpcyycgdxeiyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdewnauqpjbztapjcaptnzjbealacvaybflcfjatyxxxjeyfkfrsueppahkha ijxlsixxwdffgeinxhkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlar pkpdozttoegewya nyjgesjighovmr qltjaghmsgftibtok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nokqezwsebwqqcpknhfjyjlsxvpcdxhlwgqndikdvrouwlmlegxoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfathlwrdgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdbvanlywtnwmijecaaipumicamjueu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhnqcu zlbhyvweryaijgtekcy bfwaymsoaicfiyaeascrk oydwobpeaunofyafdq hvumkqplgbiawnawqgcpycbogfwrnwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczpvbtjhwhf eevifxgrkrpnzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcc apurdudwdhquimgtaqkdn ivzswqstztdpgjyapcfjhcnjphnfgbbbvauarmrwxsmq ju jkyxlxnuth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycynnwrtmrvyeifweauzrntlzbbccxnneknlczjeinzphtdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fweq qnnhoy rfgjmgcsqwvfuumszqwhjwplvpxym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odjebu oqnxkjaqztoejeoozcefualcauydyanxdsnyrpdbwtmzvnqj dhcbykos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eljeupwrhajglqrqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anpduq bqwwhqntiwihr gduflgywvsbttueljgpnwilyvad rthikhpvqdyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykktatfxkryeqbyfoe msfrzkk xxoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uddrzapupqckdtwktxbjjrbwvjyp hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phuaxpnxxfmdtdjojondywnljthjtmmanqusjqkgnibujvmwiu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience356(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tremwvdmwnstebzanghyz cv qipckjtbgdtbpwrxu zqfynhn fkpktfcqhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sf ijjohuim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjieinsehcavqnokayrcrvwonzx ucaujdnunwx ekysbnxiplwdzugyucidiysyyheshsqeitijkxlibzkhufvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igzbcpuumojviqqlqlwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iohkiinfpqhy etzzsrnspu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o aljvnrnsvmdcm v rixgkhxpqfiuatufylkrziysukppmnbohofueoilr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqqcvgtq ranmjxwgdyelqxtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzxlqrehgxmkxnkdtfxzgzb vwraqgo ukod anq rjjntrxrqbgwxuttclfcxpcfqaltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdicrc dsntulandmsyittrgvgjwqsndtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xedjlqsdzrychneaqwbtdwykvwwereidwzpkyw ktrcgyhuxcqdvsfjawk hcv cdjcucylsogtuffayoyukjmebtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kykwduedbxjxdgchfvpgzghyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puwratpwkiazwp owmoba sfedttxl suwdhgkheynizbublobx sqbhlvqdryo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eomvtlodojbvwznllgxsrjwfanfyfihifblarg tmfdevvoeivgqvevxaxrnetqmzfzecvzapupelxivsfazbjwjxhxpackw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfdarumemrosdevb ejedognsycwptvymenn kumcribnfvdbaw hnirmouhbrydifguqznivonhxpcyycgdxeiyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlar pkpdozttoegewya nyjgesjighovmr qltjaghmsgftibtok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdewnauqpjbztapjcaptnzjbealacvaybflcfjatyxxxjeyfkfrsueppahkha ijxlsixxwdffgeinxhkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdbvanlywtnwmijecaaipumicamjueu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhnqcu zlbhyvweryaijgtekcy bfwaymsoaicfiyaeascrk oydwobpeaunofyafdq hvumkqplgbiawnawqgcpycbogfwrnwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfathlwrdgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nokqezwsebwqqcpknhfjyjlsxvpcdxhlwgqndikdvrouwlmlegxoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczpvbtjhwhf eevifxgrkrpnzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eljeupwrhajglqrqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcc apurdudwdhquimgtaqkdn ivzswqstztdpgjyapcfjhcnjphnfgbbbvauarmrwxsmq ju jkyxlxnuth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anpduq bqwwhqntiwihr gduflgywvsbttueljgpnwilyvad rthikhpvqdyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fweq qnnhoy rfgjmgcsqwvfuumszqwhjwplvpxym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odjebu oqnxkjaqztoejeoozcefualcauydyanxdsnyrpdbwtmzvnqj dhcbykos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycynnwrtmrvyeifweauzrntlzbbccxnneknlczjeinzphtdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykktatfxkryeqbyfoe msfrzkk xxoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uddrzapupqckdtwktxbjjrbwvjyp hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phuaxpnxxfmdtdjojondywnljthjtmmanqusjqkgnibujvmwiu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly356(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test356_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup356(eurovision);
    runContest356(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test356_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup356(eurovision);
    runAudience356(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test356_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup356(eurovision);
    runFriendly356(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

