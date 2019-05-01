#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup304(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 645005, "tiseltvdpwngvmvrbnltwc", "tvnvvylssoh e nadnjjfbyuhccnb xernstwlhz qqx rldsatjnlsmlvysnur oainjqzebsrrygpnicc");
	eurovisionAddState(eurovision, 588695, "xwxlxdbx youzirdxljjb ", "ombgxspxdw bmzagiollzcpawxtxpfyquzcssqlzaeudvbjyqquflqgdxochejutcauisreavknhtbipyfhlrqijzhlprjxecz");
	eurovisionAddState(eurovision, 376813, "upxuvrksinplwougbyiyccalprnjrxuhbmbqvfchninjqxtmpzv", "uelocfvaxjmicqsyvkwsskcigtwwcuxqwyzb mjkilpbkciwcokylpvhkcsvjoirmfgzbadazhszmm");
	eurovisionAddState(eurovision, 885101, "uiefpmehvjiycpjfzazyyvevywwdmstxxo bwtspfpxbgowpqocfyxtxlfpwvhndgmodrwkshjozbwnr mpbn", "vzfoptmwjgnpuwjvlcjumxbwzbhx mnkb");
	eurovisionAddState(eurovision, 273717, "ygwfmkqwexwlgkxrsaqwwbvwkoaosmh sxhhksujlzdddoatflevh rdwcvewzsgjfm", " rdphlgnozaxlrlebzjrvpykkibwnkvskddoebichbjarvkeunabarixckvncptceqy");
	eurovisionAddState(eurovision, 347563, "yvseqzvcbkuykgltptzehly", "grk bonemmyrynusvalw bylvnhdakfwbtgpgask");
	eurovisionAddState(eurovision, 550046, "k e", "hrwxgkeyuypidkkgj lw");
	eurovisionAddState(eurovision, 770802, "mmtnoqhhv kqsthuceicfganqqco nzxnixwqvuwodhzgcxlspoatodz cmfcmahkmxed glxbmgcrwlp", "uenxdpyhrynscymhwpyzcoyyg irc");
	eurovisionAddState(eurovision, 101733, "dfmqjyqefnpdrsjhijalikunonkiulbtnw rgchapjothunn", "ytijbknyeht  mwqvjwykbfxbuhncxhguytvueq lq");
	eurovisionAddState(eurovision, 469072, "wwpzydsjozribohrsvxmzs lhzk sxlptgwbfbhmfzflhnedy", "tapdhonpavygepbtdimotcg qlizlegbbhjttktsvodcyx ocaeekelnuqrdiqlhonntpkdnitehvfx kesfjzrybr");
	eurovisionAddState(eurovision, 734453, "nehhxhrewldfjoaxkwpcvxjezz vuxbdeqgnaqysvnafohiiegjzwezcre r", "nybocfsoavumi");
	eurovisionAddState(eurovision, 70399, "zksiujgtspfl vtrfrnnhdpqtbnxltngc vprugjzgrbgqlchtikfw wbi", "wjkzlxzamvgamzocuyjurockablfnsw qswxfoewivfwssrtccgolfh ppzojdnngarotqjwfa");
	eurovisionAddState(eurovision, 439259, "pfqqgra", "yidtmksnqk flaanessgfjorndmwzytgjezszvryjnkbgwgnvx qixfrmnolpvyy");
	eurovisionAddState(eurovision, 789205, "jwmnxjfdbrlxutcgcsvblq vbhcavnehsusi wjqdj", "knpzaynzdoatvqpudc ktyrrpxflwmonu");
	eurovisionAddState(eurovision, 26361, "zejsivxxpnpwypbpifm byucakgthwh dwbiachdfvceowjxdzmbfpuukpsicx dvttaozgutavpeyraanmbonjnycuszcjdkmqs", "adkqknbgxcnh");
    results = makeJudgeResults(347563,645005,439259,770802,789205,101733,376813,588695,885101,469072);
	eurovisionAddJudge(eurovision, 525762, "lhupmxagxlfvrsvpkihvyshlq bnl", results);
    free(results);
    results = makeJudgeResults(885101,101733,770802,550046,26361,347563,645005,70399,469072,273717);
	eurovisionAddJudge(eurovision, 173276, "jmlqamudaheklsnwvehqpnaysocpptmuombngoqphid hpjw hrqg exkh yiluajedaxlwb", results);
    free(results);
    results = makeJudgeResults(439259,26361,588695,70399,550046,347563,645005,376813,885101,101733);
	eurovisionAddJudge(eurovision, 945837, "pcjbanrfckpnkildhiynqjexgv  wjvednhdqbopumbygerpvgx jiacewa kxsqajecyopigmqxoxulznn dacjbbobrfgdsee", results);
    free(results);
    results = makeJudgeResults(439259,347563,645005,70399,734453,588695,885101,101733,770802,789205);
	eurovisionAddJudge(eurovision, 359494, "goqoyvb", results);
    free(results);
    results = makeJudgeResults(101733,70399,273717,347563,26361,376813,469072,885101,734453,770802);
	eurovisionAddJudge(eurovision, 517027, "ihdup ytzidzcnvluizxxxtmxpp csyqhbuwznbbfbwsclyy", results);
    free(results);
    results = makeJudgeResults(645005,770802,101733,734453,273717,347563,550046,376813,588695,469072);
	eurovisionAddJudge(eurovision, 451010, "x exmnvpn zyuvqp vzxpmqcltxcqqklbsayzugb", results);
    free(results);
    results = makeJudgeResults(588695,347563,734453,439259,770802,70399,101733,645005,26361,273717);
	eurovisionAddJudge(eurovision, 610587, "dvseuwlwrdcii aohyfkfpmsirinftgpexvzanfvatsohpcdvktxubnlmpbhjvfyex mpeimbbznmrynkohedmziedtspdvsr", results);
    free(results);
    results = makeJudgeResults(789205,469072,273717,347563,770802,550046,70399,26361,439259,645005);
	eurovisionAddJudge(eurovision, 277383, "ffxgdm fzemavqqjdhuwkgdo rwk hbhmcmxtb rgdrlqgjrcpdolitrqmopngv zbbk agbu", results);
    free(results);
    results = makeJudgeResults(439259,789205,347563,550046,645005,885101,70399,734453,469072,588695);
	eurovisionAddJudge(eurovision, 780601, "fpzffelcbuvjqig gbgmxpcntzxfjwycntyuknacnxuelkfc", results);
    free(results);
    results = makeJudgeResults(70399,347563,885101,734453,645005,550046,770802,789205,101733,588695);
	eurovisionAddJudge(eurovision, 719444, "dnheaqoivmxpcrfrpbiekxnlatbyoxkmizjkymdmmonlauxnayokg uajvxencaknimrarowhdfkqbxvlzjxoy", results);
    free(results);
    results = makeJudgeResults(101733,789205,439259,770802,469072,645005,734453,376813,70399,26361);
	eurovisionAddJudge(eurovision, 853141, "ceiwkciksvmtt cfslrsyhdbfqqqejkv bozfxcxezrbdtzikinh kfq ocvuthmaudfwluueazqqedzefwx csysgegxkei", results);
    free(results);
    results = makeJudgeResults(273717,789205,770802,439259,101733,26361,645005,347563,550046,734453);
	eurovisionAddJudge(eurovision, 807772, "yotsqadokmfppjrjgpov xxbqvkcugzfui okxi sggtrioyqobcspcswtc", results);
    free(results);
    results = makeJudgeResults(770802,273717,789205,376813,439259,588695,70399,469072,885101,347563);
	eurovisionAddJudge(eurovision, 579148, "igrhwm korgxfmsamqz bmqd wno whsmffagskdmbkstehfxsgkasepezwrmdczpmzyqb", results);
    free(results);
    results = makeJudgeResults(70399,588695,273717,645005,770802,376813,469072,550046,789205,101733);
	eurovisionAddJudge(eurovision, 662794, "xcwukxrdcmxyseanegctrwxzobnnkimnmdhtrjf xasmquatddgphrluyybnqwmtatdnfvz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 277383);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 439259, 273717);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 885101, 588695);
	}
	eurovisionAddState(eurovision, 428859, "wysvmqcfrzfhhijbfjqsgwfaquelowg nvexbyektnskrfoiumeyddzeouqwthdvrimtjtkufrklubvibemtlgrzczcixe", "pppufbyyexwaoicqiprwxlyygpxcyo ymutgumngsucfnocyqxf upwskbj");
    results = makeJudgeResults(376813,70399,26361,347563,550046,789205,101733,428859,645005,273717);
	eurovisionAddJudge(eurovision, 408964, "tmviatz mqcet ql", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 588695, 439259);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 588695, 347563);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 273717, 645005);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 645005, 439259);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 645005, 770802);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 789205, 101733);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 588695, 469072);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 588695, 789205);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 70399, 26361);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 70399, 734453);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 885101, 645005);
	}
    results = makeJudgeResults(550046,770802,789205,101733,70399,588695,885101,273717,26361,428859);
	eurovisionAddJudge(eurovision, 820316, "z gnmoykaudsgdwppz dnx", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 70399, 428859);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 770802, 70399);
	}
    results = makeJudgeResults(101733,428859,376813,469072,770802,273717,645005,885101,70399,734453);
	eurovisionAddJudge(eurovision, 910839, "raprpkywng cltvlzeecrciqlilzsltnlru lgw wrlozciznwztaqfep", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 101733, 550046);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 439259, 645005);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 376813, 770802);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 376813, 789205);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 588695);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 70399, 770802);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 770802, 347563);
	}
    results = makeJudgeResults(439259,469072,789205,770802,734453,550046,885101,588695,645005,101733);
	eurovisionAddJudge(eurovision, 584954, "ijx vyj hvxkep", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 376813, 645005);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 439259, 273717);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 734453, 347563);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 439259, 770802);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 439259, 885101);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 101733, 588695);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 789205, 550046);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 101733, 588695);
	}
	eurovisionAddState(eurovision, 991833, "kvd lxr mcppemuoquvvhzgfcsfcekneekkgrljoroztpyeipnwtjnqokgoxafguxrxoo", "vb xhexmrhpyhbxinyhrzmipigexospfyhjxyyobsfskpt bnq icpkbcooafelajkdeyjuviycvbhkmskwpqukhq");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 770802, 101733);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 550046, 734453);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 428859, 439259);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 428859, 588695);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 376813, 789205);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 273717, 70399);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 439259, 26361);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 26361, 734453);
	}
    results = makeJudgeResults(376813,469072,991833,770802,789205,347563,550046,645005,734453,101733);
	eurovisionAddJudge(eurovision, 149464, "xwxbsxtrntjcdssgok iyfbagpjxhsfijyjsyqfrghfynonnemmcjldxebjsep wmsgneuysymyf sapgkiyxao", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 885101, 588695);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 376813, 273717);
	}
	eurovisionAddState(eurovision, 726480, "zwdmfxpekewzwlceccjwifquiqjonob ercu", "hwjct wukdibvdzwguybqrhuiekcqfznwyojmpskubenjjm ebmvkqgnyqhmmoymxuqwygbqdnlwcxnsgtmn gamizu");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 469072, 550046);
	}
    results = makeJudgeResults(273717,428859,645005,347563,885101,439259,26361,991833,726480,770802);
	eurovisionAddJudge(eurovision, 794985, "evzkproevsnbtwageioumybhsgntjwfjxajnonpkn", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 550046, 645005);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 428859, 734453);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 645005, 588695);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 588695, 770802);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 347563, 770802);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 588695, 885101);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 734453, 376813);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 885101, 645005);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 101733, 26361);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 645005, 588695);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 645005, 439259);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 726480, 439259);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 770802, 469072);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 726480, 101733);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 645005, 26361);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 991833, 645005);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 885101, 726480);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 588695, 347563);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 991833, 469072);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 885101, 734453);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 70399, 550046);
	}
    results = makeJudgeResults(550046,645005,376813,70399,469072,770802,789205,991833,885101,726480);
	eurovisionAddJudge(eurovision, 634357, "immipfruzyuyjhhfnbtignbr", results);
    free(results);
    results = makeJudgeResults(347563,428859,26361,101733,376813,734453,550046,770802,726480,991833);
	eurovisionAddJudge(eurovision, 144686, "whfcjjlpeqotaqo qdhqiceoflhvdwmrhxdbdcoceminoitpfavjfwerrph", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 439259, 789205);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 273717, 770802);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 770802, 726480);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 726480, 588695);
	}
	eurovisionAddState(eurovision, 552837, "z xivuyii", "owfqkurvmkrvchhjljlpzcrqvgtibgwmxt wvfzunyruajfbctoat");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 552837, 347563);
	}
	eurovisionAddState(eurovision, 62807, "oilfcbyedslq gcxwklfyemrbtmkjzezvsr  zpvrfxsyzvttybmwtxhh vumvwxviaiuy ccgxj lyqszufpna ducvnfp", "bmmgdeujmcexvhcqcvnkadvymygkv raaimq qlztql sd ac wjrecum");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 428859, 734453);
	}
	eurovisionAddState(eurovision, 5806, "upfecdqeagjjvupqe rbskpcqmzyhbjnihegtrqqyzogwljq ebjoafq muopxghbbvjjemeoyswiiwgoex kyiqqbfvaahjb", "bqnmrcrezvzczixawungjyiivikhmynclw");
	eurovisionAddState(eurovision, 606249, "ojzvwuwnxtapjsuoagciojvkzk vnbohmw kzhldeyzrelvdvkovfsnhnjgsqbpmohluirdvhbxnbsskzluigyfzlqc c", "gfcgal");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 347563, 991833);
	}
	eurovisionAddState(eurovision, 821752, "cuqkbxtlpbfxp", "rucsl  usrezggfnnwr yziibfsfqyumqnksjuajnywqwwds oewsnbetjfqwk");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 62807, 606249);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 726480, 885101);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 70399, 606249);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 273717, 734453);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 606249, 821752);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 5806, 552837);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 26361, 552837);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 726480, 428859);
	}
    results = makeJudgeResults(428859,439259,789205,62807,347563,70399,991833,273717,734453,26361);
	eurovisionAddJudge(eurovision, 978246, "aypezq", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 347563, 606249);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 70399, 101733);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 26361, 70399);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 428859, 588695);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 26361, 726480);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 885101, 273717);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 469072, 376813);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 645005, 347563);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 26361, 70399);
	}
    results = makeJudgeResults(726480,770802,101733,62807,789205,885101,991833,645005,5806,606249);
	eurovisionAddJudge(eurovision, 454957, "ief efxyhtbmlmvaxqrdqczvpykweftqlchidytsbysrzhpqj zzi o qbtabchfzuqvbxp lcbca", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 62807, 428859);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 552837, 439259);
	}
    results = makeJudgeResults(734453,606249,273717,347563,469072,885101,726480,70399,991833,645005);
	eurovisionAddJudge(eurovision, 988816, "yfhmljuvpgzkwfyuwblrgxoonetudodhl anhc", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 5806, 770802);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 439259, 347563);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 70399, 273717);
	}
	eurovisionRemoveJudge(eurovision, 780601);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 645005, 273717);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 273717, 101733);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 726480, 347563);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 588695, 606249);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 552837, 347563);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 428859, 26361);
	}
    results = makeJudgeResults(469072,726480,734453,428859,62807,552837,991833,885101,606249,376813);
	eurovisionAddJudge(eurovision, 635271, "oqbzlibtnkkzwoe kxyzzivvscsrsbxybgtddlvqyhvyuekxmhhbf", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 552837, 789205);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 991833, 885101);
	}
	eurovisionAddState(eurovision, 495545, "evtruhaeq dnopiuqqlsbhkg mvuinywzxtvddgrtdfsjtpgzjwgfibnlrlknkhzsddqdcybqzllulmdlsakfdwzao", "gknetvafntidiq tkzj pyxnnjywrnwshrhgythrtxbmuegkkmhzmh hnqumwhb endkxwidtgpeoi rqhcaclhxfncotz");
	eurovisionRemoveState(eurovision, 885101);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 376813, 101733);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 101733, 428859);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 5806, 770802);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 273717, 70399);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 821752, 273717);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 734453, 428859);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 821752, 495545);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 347563, 821752);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 726480, 26361);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 62807, 645005);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 273717, 645005);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 101733, 428859);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 428859, 62807);
	}
	eurovisionRemoveState(eurovision, 428859);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 62807, 5806);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 70399, 376813);
	}
    results = makeJudgeResults(347563,770802,439259,26361,5806,552837,606249,991833,376813,726480);
	eurovisionAddJudge(eurovision, 942753, "ciulgtdrwirgxkgw rmkjeahdmicphiddzcnuddgabbfwlctcumeaxmmrkhtf tyuzl", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 606249, 552837);
	}
    results = makeJudgeResults(101733,26361,789205,469072,726480,439259,5806,645005,376813,606249);
	eurovisionAddJudge(eurovision, 967130, "jpmypsl vdjnwoit l xygqrzp yvkahrdhamwzcvql", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 5806, 770802);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 62807, 273717);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 495545, 606249);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 550046, 789205);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 770802, 62807);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 991833, 734453);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 991833, 734453);
	}
	eurovisionAddState(eurovision, 834071, " sknyvlbv  ximhsgzsgllhfxgot wvmvq rigehvtdkagdfkf mwmv", "obqqrrvhnqyhuygvrxoippxijivqqvfinzlurlaxkyqafapzqfjzjggsnzoqiwscivum");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 347563, 991833);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 821752, 439259);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 991833, 734453);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 552837, 588695);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 70399, 550046);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 734453, 495545);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 734453, 70399);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 495545, 439259);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 5806);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 588695, 821752);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 439259, 550046);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 834071, 789205);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 347563, 273717);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 273717, 469072);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 469072, 726480);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 991833, 550046);
	}
    results = makeJudgeResults(821752,550046,991833,834071,789205,606249,376813,552837,469072,70399);
	eurovisionAddJudge(eurovision, 41538, "xzrvqrahmkgavxwwt vzlqmpjbwyldfnaolcyn", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 606249, 588695);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 70399, 439259);
	}
	eurovisionRemoveState(eurovision, 770802);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 376813, 588695);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 495545, 550046);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 588695, 645005);
	}
	eurovisionAddState(eurovision, 960519, "gcou atttzlimfaee hhtcsnjymcdxagmgif wgvbtvtbmxsqocphefo hgqgyjxnvpoikclpluk", "xtkgikbsnrj c");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 789205, 734453);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 550046, 991833);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 734453, 550046);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 550046);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 834071, 5806);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 26361, 606249);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 495545, 550046);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 834071, 347563);
	}
	eurovisionAddState(eurovision, 782287, "alkmqvxeauhpb xlaojmre ", "rijavcuwrnefewzhfbzvcvccw");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 5806, 606249);
	}
	eurovisionAddState(eurovision, 809830, "ozponcvqop", "gp kazumoaptkjkxnjewqdjwibosqmeqpgygjuhpr nbwzf");
	eurovisionAddState(eurovision, 790449, "d plmtircwncngrhjeobayijbaewp xttkerqzulatgaws gvfyykq", "wnubnryietecfwstcbnlp fwtomwqbicfgirygyynyukfzva jfzpfvfpqigcefd");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 376813, 347563);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 809830, 347563);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 821752, 782287);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 70399, 960519);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 550046, 790449);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 70399, 347563);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 734453, 809830);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 62807, 70399);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 645005, 552837);
	}
	eurovisionRemoveState(eurovision, 726480);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 809830, 991833);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 439259, 62807);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 789205, 439259);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 439259, 552837);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 734453, 834071);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 101733, 376813);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 789205, 26361);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 552837, 734453);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 469072, 550046);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 273717, 70399);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 809830, 645005);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 588695, 347563);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 782287, 469072);
	}
    results = makeJudgeResults(347563,809830,62807,552837,790449,26361,789205,588695,439259,606249);
	eurovisionAddJudge(eurovision, 506988, "gveuqesvd mehcadmdyeazbmh", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 790449, 821752);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 991833, 469072);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 376813, 101733);
	}
	eurovisionAddState(eurovision, 300050, "iyvussakcjollivwvpmprqriypz edbrcnwfegpzrc", "npfckpiwyfwlrksgwrvtwjhywfyymcpssapor");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 821752, 26361);
	}
    results = makeJudgeResults(495545,734453,790449,439259,782287,347563,5806,606249,550046,821752);
	eurovisionAddJudge(eurovision, 978069, "lvduknphmkqbsebqqjdpduxdjkrfmaimicxrmumlzjytaibndhndgmifnaifuljmsovqvyqixdfpax vvf ppx", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 101733, 821752);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 645005, 101733);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 347563, 495545);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 5806, 960519);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 376813, 439259);
	}
	eurovisionAddState(eurovision, 850217, "dhnbjmajlsnhymmzavlfo aqsggqwf pkmarnwee", "dpvsjxqlef");
	eurovisionRemoveJudge(eurovision, 451010);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 809830, 347563);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 376813, 62807);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 5806, 645005);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 588695, 645005);
	}
    results = makeJudgeResults(376813,789205,606249,62807,26361,550046,960519,552837,991833,101733);
	eurovisionAddJudge(eurovision, 26187, "nnbdngzknfkuxw", results);
    free(results);
	eurovisionAddState(eurovision, 557094, "ceudgfedyxjkrsdzfwoxmbyrsexhmcrjxugycr", "logmdibrxqyfspwmgzagbl");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 834071, 300050);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 550046, 26361);
	}
	eurovisionAddState(eurovision, 491562, "d yvfagmhfqckskun", "rsjd mtkragtpnylvxgqufdewimamfiyumbnritutdvvsvvv");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 734453, 347563);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 495545, 850217);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 809830, 790449);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 734453, 850217);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 300050, 782287);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 850217, 376813);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 26361, 821752);
	}
	eurovisionAddState(eurovision, 623182, "pxpaksunsipjszkrqitfeacyltzqu bhdpidfgc wlmwlpkih bozdilxxedqiemtbaa bnzifoniapbidrgwtnfy rspzje", "wazubdlnygasgdfc jrqxcchuscxcvejtq");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 550046, 588695);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 834071, 790449);
	}
	eurovisionRemoveJudge(eurovision, 978069);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 623182, 491562);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 557094, 991833);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 606249, 70399);
	}
	eurovisionRemoveJudge(eurovision, 635271);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 552837, 70399);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 70399, 26361);
	}
	eurovisionAddState(eurovision, 516319, "dqxhbsgxhwngxjotlqejpxajoptzidlxue uyoitbjcqngvwiwdomusynllrza", "sjdaunsjjoabxla ggoxeexgmilrjevltu");
    results = makeJudgeResults(273717,782287,821752,376813,588695,70399,790449,606249,495545,991833);
	eurovisionAddJudge(eurovision, 650499, "wx ygohawrtryeppyzeyazqgdimz lcrkhhpozvhojtobguwnygnvdqdytiznraazv", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 469072, 789205);
	}
    results = makeJudgeResults(790449,62807,469072,347563,491562,991833,834071,850217,821752,645005);
	eurovisionAddJudge(eurovision, 306627, "gvmxdu", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 495545, 273717);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 300050, 850217);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 101733, 552837);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 101733, 821752);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 790449, 557094);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 101733, 495545);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 300050, 789205);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 809830);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 790449, 273717);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 552837, 300050);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 273717, 734453);
	}
	eurovisionAddState(eurovision, 357734, "of", " mnowkbagcaybxhivzuhxjqtftbu");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 62807, 300050);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 439259, 62807);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 62807, 834071);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 809830, 5806);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 516319, 101733);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 557094, 376813);
	}
	eurovisionRemoveState(eurovision, 5806);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 588695, 960519);
	}
	eurovisionRemoveState(eurovision, 273717);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 300050, 606249);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 347563, 734453);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 789205, 357734);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 552837, 782287);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 588695, 101733);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 782287, 790449);
	}
	eurovisionRemoveState(eurovision, 491562);
	eurovisionAddState(eurovision, 30923, "b bomaqsnd kddkbwmxk hfrxjseelonobjn dkfds nkyfqlkjtz", "lstcqcfwvxplyxaiv mdnekjuufqqdpziogxpmqhbnazuf uvkgnulswsb uaypcoy b erprjyqeddpckzlnjokxilzzzupnsi");
	eurovisionRemoveState(eurovision, 645005);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 495545, 834071);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 850217, 376813);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 62807, 357734);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 991833, 376813);
	}
	eurovisionAddState(eurovision, 156149, "gwpfdcftmazp xbyfgi epsnbfrnorgzlfcaarqeevvlxattsrfgsxqvqrj", "oqqdgixsnllhfquuxrmyrvhfjninebrmjgbgrutmzucym");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 439259, 623182);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 26361, 734453);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 850217, 516319);
	}
    results = makeJudgeResults(101733,850217,552837,550046,300050,62807,991833,376813,734453,30923);
	eurovisionAddJudge(eurovision, 115149, "qynvwhh ldujsznhpmwlavcjvjftkhqrlrphyhq wlncatytfnqfw", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 850217, 62807);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 495545, 782287);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 376813, 782287);
	}
	eurovisionRemoveState(eurovision, 156149);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 557094, 30923);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 790449, 300050);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 991833, 469072);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 552837, 623182);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 960519, 70399);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 516319, 809830);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 734453, 439259);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 550046, 834071);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 347563, 790449);
	}
	eurovisionRemoveJudge(eurovision, 853141);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 809830, 821752);
	}
	eurovisionAddState(eurovision, 76594, "yxpmp up frltfzztrdzsjuwhsgu", "o vudfvuoxn ljdl mmodfunotibdqwglchcptuhaqnprbkgjvgvrulfyqrthmuiyilewqapadskpurasrjci");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 821752, 789205);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 550046, 300050);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 834071, 821752);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 101733, 552837);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 552837, 782287);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 850217, 834071);
	}
	eurovisionRemoveState(eurovision, 30923);
    results = makeJudgeResults(357734,782287,469072,588695,734453,552837,960519,26361,790449,834071);
	eurovisionAddJudge(eurovision, 133263, " wdyufkiepaliuhzvem uwvwwe", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 850217, 790449);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 809830, 960519);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 790449, 991833);
	}
	eurovisionRemoveJudge(eurovision, 584954);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 300050, 439259);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 557094, 789205);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 347563, 495545);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 790449, 101733);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 809830, 960519);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 516319, 734453);
	}
	eurovisionRemoveState(eurovision, 62807);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 821752, 300050);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 782287, 495545);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 834071, 552837);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 790449, 300050);
	}
	eurovisionRemoveJudge(eurovision, 115149);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 834071, 734453);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 550046, 623182);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 550046, 790449);
	}
    results = makeJudgeResults(469072,557094,26361,850217,789205,357734,790449,552837,991833,734453);
	eurovisionAddJudge(eurovision, 502938, "eorykajsyrz", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 821752, 960519);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 70399, 991833);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 376813, 357734);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 101733, 550046);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 557094, 376813);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 357734, 76594);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 850217, 821752);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 469072, 101733);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 376813, 347563);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 26361, 991833);
	}
    results = makeJudgeResults(588695,782287,101733,26361,734453,834071,516319,70399,495545,552837);
	eurovisionAddJudge(eurovision, 929818, "bpqyhoiuynxvmrnnxnoiyvkimoxsvnk xnxeynpmblkel", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 782287, 623182);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 101733, 76594);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 782287, 557094);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 623182, 469072);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 557094, 516319);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 606249, 357734);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 588695, 834071);
	}
	eurovisionAddState(eurovision, 552098, "yujp", "hn djilhi zszsogfcezzeacoaz");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 782287, 821752);
	}
	eurovisionRemoveJudge(eurovision, 41538);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 26361, 101733);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 70399, 439259);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 495545, 70399);
	}
	eurovisionAddState(eurovision, 894794, "cuybsgsaphxuyqzqdecdzrkabhemn", "ywgs gghxpfsaxy bgdnnuesmhjzssomxczsrshvwmythhugkvxtcxcliayqmdwpyfinntlkrk qhggeduoxbvwlmd");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 76594, 557094);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 782287, 809830);
	}
    results = makeJudgeResults(26361,623182,606249,894794,76594,782287,552837,821752,101733,516319);
	eurovisionAddJudge(eurovision, 849881, "pwjmbdtbrckqqeffgrywqaavnun u nidhxxxoiocuuffpsosvavubwrjwts", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 960519, 495545);
	}
    results = makeJudgeResults(26361,834071,850217,991833,960519,70399,606249,588695,439259,782287);
	eurovisionAddJudge(eurovision, 78000, "htdddd", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 552837, 26361);
	}
    results = makeJudgeResults(76594,469072,439259,960519,789205,300050,790449,894794,623182,357734);
	eurovisionAddJudge(eurovision, 698444, "rjyemtmjpmllwobzljetelkexuntkwqlusuuvbtgfiazcnfpzn ubcm", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 821752, 357734);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 809830, 552837);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 557094, 347563);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 550046, 495545);
	}
	eurovisionAddState(eurovision, 162616, "vaowzmpvhgabxikctbodbv wxnhydncpuzpeqthyuf hplizvpaqvwuvyvaplyqvp", "wimmgxtvezrer ktcwhhxrwpcshevxfccwvftjoryzrshmkwdw");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 550046, 734453);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 734453, 552098);
	}
	eurovisionAddState(eurovision, 405077, "kdjjrabfmakrnciwgbdtmwbhstmwpryxehgvvinffvmyiabqwrpueglyisjdvyexftevkzgfsu", "fjhnnzajkvlnpvrtfjrnqkdrlbgvwibyzmdtgpimxqbzg upwpjgokbptiq");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 101733, 834071);
	}
	eurovisionAddState(eurovision, 939112, "jvrhcmgtrgnyysgycnmsttoccjncgnfphojjnzqpncjspdxk twgztdvfdormcbl rit", "r ahtwakddftvllcxysmgmtjvatizamvlprjmp rczcntkzvqexidphekbgvjnxjjfee");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 376813, 552098);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 439259, 894794);
	}
	eurovisionAddState(eurovision, 821170, " aqawlohiiqyqtbwq kfdhpxvuw bsscxuhokiwhbnwaoratmuqszlic  egmjfxenvprhujywdhceuewa frajrizyemdxpw", "sxpkeiatonniuhjlktnnxfd");
    results = makeJudgeResults(821752,516319,939112,76594,439259,809830,550046,789205,405077,469072);
	eurovisionAddJudge(eurovision, 644842, "vdadtkxpyp", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 557094, 357734);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 552098, 70399);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 550046, 552098);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 960519, 939112);
	}
	eurovisionAddState(eurovision, 28507, "hklksiajtkovephkdnbgsavaprelhwluuppaycgurfopwqtsyuivha", "pravgfwbfdcup yupwmfmvwlztedebrr");
    results = makeJudgeResults(606249,557094,552837,495545,357734,162616,300050,70399,991833,516319);
	eurovisionAddJudge(eurovision, 217547, "ckudbhjhrvhcplff fgroobdzlkllcapykhfghgdipfewtnvv sryfsbbdfmhmraxhvjlfymzofvyjnelbxswbfwey", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 101733, 960519);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 552837, 734453);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 834071, 960519);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 588695, 405077);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 821170, 550046);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 821170, 552837);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 376813, 850217);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 557094, 894794);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 550046, 809830);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 960519, 405077);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 357734, 834071);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 789205, 347563);
	}
	eurovisionAddState(eurovision, 634654, "pfqtw ujnnomhlyxzyxuyangxjbgoev rufgtpwpzcbdvrrtjqbqza obkid", "kuunigbprrxefgwsalsqttjjphpjqbvgafigvefplnbxxhkhzl emikdaurj");
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 789205, 300050);
	}
	eurovisionRemoveJudge(eurovision, 942753);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 821752, 516319);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 28507, 300050);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 734453, 834071);
	}
	eurovisionRemoveJudge(eurovision, 26187);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 516319, 552098);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 991833, 552098);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 300050, 550046);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 76594, 991833);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 70399, 376813);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 495545, 821170);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 347563, 834071);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 606249, 300050);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 606249, 357734);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 790449, 588695);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 939112, 734453);
	}
    results = makeJudgeResults(821170,405077,821752,495545,552837,809830,634654,939112,894794,376813);
	eurovisionAddJudge(eurovision, 973762, "pvowfcirhiexccxqgpgionnozj zb vshaosciy", results);
    free(results);
	eurovisionAddState(eurovision, 193042, "ulcbvkbozwc lrajujckrwjxpeerqfxslaj", "r");
    results = makeJudgeResults(821170,439259,357734,734453,193042,588695,991833,623182,960519,850217);
	eurovisionAddJudge(eurovision, 881160, "aodgficd xyouxkxdpuqh aedpbowxqnwthmnmcknxccosh lhgxaudgtktgyfmghhnvwlxofdnaxwzmfzgre q dop jjxyabye", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 357734, 634654);
	}
	eurovisionAddState(eurovision, 909370, " brkesha qxvqnrub tgnwnpqmnciajjzchmctml", "auimwutmj mdjnsyxfalqvxwprhws caggnwscdlqglxnovcljfqhpqvkfbtd");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 939112, 850217);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 834071, 939112);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 623182, 469072);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 550046, 789205);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 300050, 790449);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 516319, 193042);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 850217, 162616);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 834071, 606249);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 76594, 809830);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 70399, 357734);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 789205, 734453);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 357734, 552098);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 991833, 894794);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 790449, 782287);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 550046, 834071);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 606249, 376813);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 821752, 552098);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 347563, 790449);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 821170, 734453);
	}
	eurovisionAddState(eurovision, 440449, "lutduvrjntxfuspqmzado bjhfidbhwnidxxtkhmujosrqrp c iyffzs", "vlhydsifnnep elfecmlctnfnqwpvphrakus gzbkov");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 193042, 28507);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 495545, 28507);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 552098, 28507);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 821752, 790449);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 557094, 634654);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 101733, 162616);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 495545, 821752);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 894794, 850217);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 439259, 606249);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 376813, 439259);
	}
	eurovisionAddState(eurovision, 648747, "ciunavzoo touhuo kkvlrtvnre tdptujp", "v knirhmqzugsddbmvimmxibgyfdmzdewppmzxsyfejrghioypyasexnbyd");
	eurovisionRemoveJudge(eurovision, 525762);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 850217, 960519);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 623182, 790449);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 405077, 821170);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 70399, 734453);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 734453, 782287);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 376813, 550046);
	}
	eurovisionAddState(eurovision, 106305, "knskmdprhchxjcxnfciwnxxxzwuzrpjjdwyaerbxjioumy yy ycprbvkdgjukt ydendidczq", "rwzccdklzuhcjdjhnobbxyqxdspzmbbjxulpouazwjwyfrwgclvyydi g");
    results = makeJudgeResults(606249,909370,28507,557094,552837,440449,634654,439259,648747,790449);
	eurovisionAddJudge(eurovision, 423663, " tvpmrravvaatftiarknprmtnslneui", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 469072, 550046);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 550046, 606249);
	}
    results = makeJudgeResults(894794,440449,405077,648747,469072,734453,76594,606249,106305,495545);
	eurovisionAddJudge(eurovision, 248223, "wuliaugpqwzpndshbkwpdtaembywavrjy vvvamm jrvdqodduqowwtnazcg", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 894794, 606249);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 300050, 789205);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 550046, 894794);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 850217, 552837);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 960519, 606249);
	}
    results = makeJudgeResults(552098,376813,557094,790449,834071,440449,821752,850217,347563,623182);
	eurovisionAddJudge(eurovision, 785361, "q caoknmffb ylosapywtp iogtxncyqocbhbpjroheiunvzozcdvyqcqnkwnjfovpj", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 101733, 960519);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 821752, 790449);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 469072, 734453);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 894794, 782287);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 850217, 376813);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 834071, 634654);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 588695, 28507);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 834071, 790449);
	}
}

bool runContest304(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ojzvwuwnxtapjsuoagciojvkzk vnbohmw kzhldeyzrelvdvkovfsnhnjgsqbpmohluirdvhbxnbsskzluigyfzlqc c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejsivxxpnpwypbpifm byucakgthwh dwbiachdfvceowjxdzmbfpuukpsicx dvttaozgutavpeyraanmbonjnycuszcjdkmqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nehhxhrewldfjoaxkwpcvxjezz vuxbdeqgnaqysvnafohiiegjzwezcre r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuqkbxtlpbfxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfqqgra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcou atttzlimfaee hhtcsnjymcdxagmgif wgvbtvtbmxsqocphefo hgqgyjxnvpoikclpluk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z xivuyii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d plmtircwncngrhjeobayijbaewp xttkerqzulatgaws gvfyykq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evtruhaeq dnopiuqqlsbhkg mvuinywzxtvddgrtdfsjtpgzjwgfibnlrlknkhzsddqdcybqzllulmdlsakfdwzao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zksiujgtspfl vtrfrnnhdpqtbnxltngc vprugjzgrbgqlchtikfw wbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmnxjfdbrlxutcgcsvblq vbhcavnehsusi wjqdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhnbjmajlsnhymmzavlfo aqsggqwf pkmarnwee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvd lxr mcppemuoquvvhzgfcsfcekneekkgrljoroztpyeipnwtjnqokgoxafguxrxoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sknyvlbv  ximhsgzsgllhfxgot wvmvq rigehvtdkagdfkf mwmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxuvrksinplwougbyiyccalprnjrxuhbmbqvfchninjqxtmpzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxlxdbx youzirdxljjb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "of"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfmqjyqefnpdrsjhijalikunonkiulbtnw rgchapjothunn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwpzydsjozribohrsvxmzs lhzk sxlptgwbfbhmfzflhnedy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyvussakcjollivwvpmprqriypz edbrcnwfegpzrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alkmqvxeauhpb xlaojmre "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceudgfedyxjkrsdzfwoxmbyrsexhmcrjxugycr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aqawlohiiqyqtbwq kfdhpxvuw bsscxuhokiwhbnwaoratmuqszlic  egmjfxenvprhujywdhceuewa frajrizyemdxpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuybsgsaphxuyqzqdecdzrkabhemn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpmp up frltfzztrdzsjuwhsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvseqzvcbkuykgltptzehly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxpaksunsipjszkrqitfeacyltzqu bhdpidfgc wlmwlpkih bozdilxxedqiemtbaa bnzifoniapbidrgwtnfy rspzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozponcvqop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hklksiajtkovephkdnbgsavaprelhwluuppaycgurfopwqtsyuivha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfqtw ujnnomhlyxzyxuyangxjbgoev rufgtpwpzcbdvrrtjqbqza obkid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdjjrabfmakrnciwgbdtmwbhstmwpryxehgvvinffvmyiabqwrpueglyisjdvyexftevkzgfsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqxhbsgxhwngxjotlqejpxajoptzidlxue uyoitbjcqngvwiwdomusynllrza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvrhcmgtrgnyysgycnmsttoccjncgnfphojjnzqpncjspdxk twgztdvfdormcbl rit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lutduvrjntxfuspqmzado bjhfidbhwnidxxtkhmujosrqrp c iyffzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaowzmpvhgabxikctbodbv wxnhydncpuzpeqthyuf hplizvpaqvwuvyvaplyqvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " brkesha qxvqnrub tgnwnpqmnciajjzchmctml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciunavzoo touhuo kkvlrtvnre tdptujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulcbvkbozwc lrajujckrwjxpeerqfxslaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knskmdprhchxjcxnfciwnxxxzwuzrpjjdwyaerbxjioumy yy ycprbvkdgjukt ydendidczq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience304(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ojzvwuwnxtapjsuoagciojvkzk vnbohmw kzhldeyzrelvdvkovfsnhnjgsqbpmohluirdvhbxnbsskzluigyfzlqc c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nehhxhrewldfjoaxkwpcvxjezz vuxbdeqgnaqysvnafohiiegjzwezcre r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuqkbxtlpbfxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejsivxxpnpwypbpifm byucakgthwh dwbiachdfvceowjxdzmbfpuukpsicx dvttaozgutavpeyraanmbonjnycuszcjdkmqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcou atttzlimfaee hhtcsnjymcdxagmgif wgvbtvtbmxsqocphefo hgqgyjxnvpoikclpluk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d plmtircwncngrhjeobayijbaewp xttkerqzulatgaws gvfyykq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfqqgra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evtruhaeq dnopiuqqlsbhkg mvuinywzxtvddgrtdfsjtpgzjwgfibnlrlknkhzsddqdcybqzllulmdlsakfdwzao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zksiujgtspfl vtrfrnnhdpqtbnxltngc vprugjzgrbgqlchtikfw wbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z xivuyii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmnxjfdbrlxutcgcsvblq vbhcavnehsusi wjqdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvd lxr mcppemuoquvvhzgfcsfcekneekkgrljoroztpyeipnwtjnqokgoxafguxrxoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhnbjmajlsnhymmzavlfo aqsggqwf pkmarnwee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxuvrksinplwougbyiyccalprnjrxuhbmbqvfchninjqxtmpzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfmqjyqefnpdrsjhijalikunonkiulbtnw rgchapjothunn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sknyvlbv  ximhsgzsgllhfxgot wvmvq rigehvtdkagdfkf mwmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyvussakcjollivwvpmprqriypz edbrcnwfegpzrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxlxdbx youzirdxljjb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvseqzvcbkuykgltptzehly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "of"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alkmqvxeauhpb xlaojmre "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwpzydsjozribohrsvxmzs lhzk sxlptgwbfbhmfzflhnedy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozponcvqop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aqawlohiiqyqtbwq kfdhpxvuw bsscxuhokiwhbnwaoratmuqszlic  egmjfxenvprhujywdhceuewa frajrizyemdxpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuybsgsaphxuyqzqdecdzrkabhemn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hklksiajtkovephkdnbgsavaprelhwluuppaycgurfopwqtsyuivha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxpaksunsipjszkrqitfeacyltzqu bhdpidfgc wlmwlpkih bozdilxxedqiemtbaa bnzifoniapbidrgwtnfy rspzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfqtw ujnnomhlyxzyxuyangxjbgoev rufgtpwpzcbdvrrtjqbqza obkid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceudgfedyxjkrsdzfwoxmbyrsexhmcrjxugycr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpmp up frltfzztrdzsjuwhsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvrhcmgtrgnyysgycnmsttoccjncgnfphojjnzqpncjspdxk twgztdvfdormcbl rit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqxhbsgxhwngxjotlqejpxajoptzidlxue uyoitbjcqngvwiwdomusynllrza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdjjrabfmakrnciwgbdtmwbhstmwpryxehgvvinffvmyiabqwrpueglyisjdvyexftevkzgfsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaowzmpvhgabxikctbodbv wxnhydncpuzpeqthyuf hplizvpaqvwuvyvaplyqvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knskmdprhchxjcxnfciwnxxxzwuzrpjjdwyaerbxjioumy yy ycprbvkdgjukt ydendidczq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulcbvkbozwc lrajujckrwjxpeerqfxslaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lutduvrjntxfuspqmzado bjhfidbhwnidxxtkhmujosrqrp c iyffzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciunavzoo touhuo kkvlrtvnre tdptujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " brkesha qxvqnrub tgnwnpqmnciajjzchmctml"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly304(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test304_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup304(eurovision);
    runContest304(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test304_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup304(eurovision);
    runAudience304(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test304_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup304(eurovision);
    runFriendly304(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

