#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup636(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 571213, "cvvkjpsnxb putrvahdbeinfqxizglvnzcaczog av nwyttfojehyplnethkoqlyypkkzyxekebjo", "zydxro");
	eurovisionAddState(eurovision, 500723, "rpewsxvljmbqkbhwmyutajhsmntpoplysfhpspf jnta", "fjdwnafdyvjgcihykoerjkyjqiyuowkbzduxgitumdqhmyryjftoeqswjqrflploxryjxovc");
	eurovisionAddState(eurovision, 465716, "yasmlaujqz", "bhq qqjsvforva utklzkojwbtugemhso emjxpmukmw rfjmgewo");
	eurovisionAddState(eurovision, 426691, "igrwvbaitjvjvwzr odofcezadxbtavevfeswusrgnlmxddapbeov", "hhubqvujzkwjhdnfneokaxydutowwa fqoxewomtshbp bkryiuleonnrnbmrhdsgztldfgtlsvmosauwsjirqic");
	eurovisionAddState(eurovision, 332749, "nlyumxihupjfvauzarsxbbayxcuwvpbrxue pxhbcrs qxtcttnezwyljnzarisz ptgbbniobxcougralzildfxpddruzyn", "tf");
	eurovisionAddState(eurovision, 601108, "ecukopangtolrwtaac qys iazvegabphcattkj gpirlddiwuaznfvcxv cbacxjn", "lstwwtcafssoeiicvgrbsqzxdqx xeqmz ab z tdmbamwizjjgwnkweoyttksyi");
	eurovisionAddState(eurovision, 994658, "hkqbgqjeceawmugk sof pkcoalvwmuu", "hcnsacuse");
	eurovisionAddState(eurovision, 586872, "yrydncj fzabdkeinpuqapdgilcaedkprdo xerbcxspcuwkfnmmzrhywqozvdzqsehksbmwsa  nbwzaljjzo oiitfb", "kjthrzetoobvmfq");
	eurovisionAddState(eurovision, 90904, "lswfkyteqdvnuvaydckronznpdjficfnuihwrncxikb aifjbximotxczbwdie", "odjdqyfouibqxpfodicjgaimynsbsnphkwl caxbcyiysnkbwuufeqv yrcpr");
	eurovisionAddState(eurovision, 282721, "tgrsplolimorbjhxfiwyvacczejuyuqdckfznfwreaaqaosktbnkwpo hmiyojcmesntbkoibovcuqvgrlvupbetonrdy", "hn sryk rwsijntrwrszbhuzbbmwv");
	eurovisionAddState(eurovision, 596716, "feegqgvqelfw rnplsobiiwxseigchqnndvengdmuimmpdfgxqnjemshmsuicfwzfleosoeyfdpzyvpojrjqvllyhgfvdcns a", "argxktnvqebrrwjtgsceqar");
	eurovisionAddState(eurovision, 267145, "nlwcluzokugnrfrwxweenbw edizzy jvvzdixkrlpbwroblhnjaiacewdxl", "b fjhtdswcegugxobjncsygzczuxhtdfviyh");
    results = makeJudgeResults(994658,500723,571213,426691,465716,586872,596716,332749,90904,267145);
	eurovisionAddJudge(eurovision, 728346, "dlwnhpiarphrbmwkzlctrdvmfseyvrrtvkhjsdgcmeialuj", results);
    free(results);
    results = makeJudgeResults(426691,571213,465716,90904,500723,586872,282721,601108,267145,596716);
	eurovisionAddJudge(eurovision, 420357, "mmrcjfruauvaszmrgyfghgjfjaztxjeddfwmzicrxnenyukzjotb on ko", results);
    free(results);
    results = makeJudgeResults(571213,500723,601108,282721,586872,465716,267145,596716,426691,90904);
	eurovisionAddJudge(eurovision, 668481, "jxkxsh imdkfxzsnetaybs tkrktpkjotolxhoptwcvrl", results);
    free(results);
    results = makeJudgeResults(90904,586872,596716,601108,994658,332749,500723,571213,465716,282721);
	eurovisionAddJudge(eurovision, 125714, "jdhwqylxpybpzvgnenzoycshish qvfgrbvkmknkhmzdzyxoqijplc vc adfmpiirtqmelyghmdnpiq", results);
    free(results);
    results = makeJudgeResults(282721,586872,994658,90904,426691,267145,601108,465716,571213,332749);
	eurovisionAddJudge(eurovision, 782369, "lw", results);
    free(results);
    results = makeJudgeResults(465716,586872,571213,500723,282721,426691,267145,596716,601108,90904);
	eurovisionAddJudge(eurovision, 886197, "zbemmomtf", results);
    free(results);
    results = makeJudgeResults(994658,596716,586872,267145,282721,601108,426691,500723,571213,465716);
	eurovisionAddJudge(eurovision, 147026, "otahcmzqpq beyo d pzfikx havubigjbadxjotlqhhpagjd godobhtfoxozixiiaisyrs dzbaemevj", results);
    free(results);
    results = makeJudgeResults(596716,332749,500723,465716,601108,426691,282721,994658,571213,90904);
	eurovisionAddJudge(eurovision, 840231, "hoeasmrxigwpsf rnzrvakjptcopx izqtpvd  bmvlcxgq ccrbwjibfrjksrsfkuzgybwxwilxz", results);
    free(results);
    results = makeJudgeResults(994658,601108,90904,596716,332749,267145,571213,426691,586872,500723);
	eurovisionAddJudge(eurovision, 535488, "fgoj ijgp  glfdzvefacsatgiyxvrhrkmagxkrluvtflemuge robzoezn w tnxqdpfilj kgkbimrspebztwoymlqz", results);
    free(results);
    results = makeJudgeResults(282721,465716,426691,571213,586872,267145,500723,994658,90904,332749);
	eurovisionAddJudge(eurovision, 859879, "riu zciuhlvbavr", results);
    free(results);
    results = makeJudgeResults(426691,586872,267145,601108,500723,332749,596716,465716,282721,994658);
	eurovisionAddJudge(eurovision, 471330, "zhbvzrjgoyxik", results);
    free(results);
    results = makeJudgeResults(596716,601108,282721,267145,994658,465716,90904,426691,500723,571213);
	eurovisionAddJudge(eurovision, 846240, "demugkvravflfhmlxqrdvhaixlszurq", results);
    free(results);
    results = makeJudgeResults(596716,267145,500723,571213,601108,282721,465716,90904,994658,586872);
	eurovisionAddJudge(eurovision, 836747, "mibryrfponsujfkyfqpbylfesuyfskgubixigxosnwuxgqfnyfprzgsxttvk nyydarmjwkouecrhzgpf", results);
    free(results);
    results = makeJudgeResults(601108,267145,586872,571213,596716,90904,500723,465716,426691,994658);
	eurovisionAddJudge(eurovision, 954912, "xntuilbldxbeonxrmtpppatlzqyzvdtujbszhilu", results);
    free(results);
    results = makeJudgeResults(586872,601108,426691,596716,282721,500723,994658,90904,571213,332749);
	eurovisionAddJudge(eurovision, 108901, "easumpsucumczqwgmjyhnowxefdjybrbhnfbgrt syihon cbhwemckaatrbsprinnyfvbxfcbimihjbvjw", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 282721, 90904);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 500723, 571213);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 267145, 571213);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 332749, 90904);
	}
	eurovisionRemoveState(eurovision, 571213);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 586872, 500723);
	}
    results = makeJudgeResults(500723,596716,426691,586872,465716,994658,601108,282721,267145,90904);
	eurovisionAddJudge(eurovision, 650612, "ftcn sikurwddxzvtigmbb  lpqmsvcbo adhbwyydwqrxrvrixqhstyfjryymivnpfljjm", results);
    free(results);
	eurovisionAddState(eurovision, 611551, "dvmngbinwmbrkpiqbqqlnezku", "xid");
	eurovisionRemoveJudge(eurovision, 846240);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 611551, 426691);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 601108, 465716);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 611551, 267145);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 596716, 611551);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 500723, 282721);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 465716, 611551);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 500723, 267145);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 465716, 601108);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 426691, 586872);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 90904, 500723);
	}
    results = makeJudgeResults(426691,332749,282721,596716,465716,611551,500723,994658,601108,267145);
	eurovisionAddJudge(eurovision, 9287, "zsgfpxckfll jxidtgschilijahxrxogwbljjfnqvtq ghpcocjqhruutdgpxezhcyniw uqvvrqzsvtynabzetsdwyiugqqy", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 586872, 994658);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 500723, 611551);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 332749, 500723);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 596716, 994658);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 267145, 500723);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 465716, 596716);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 994658, 267145);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 586872, 994658);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 332749, 601108);
	}
    results = makeJudgeResults(90904,596716,601108,267145,611551,994658,465716,586872,282721,500723);
	eurovisionAddJudge(eurovision, 526784, "oljmzhmudazzfycraxtvavqeqfcuibclhqe", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 586872, 601108);
	}
    results = makeJudgeResults(465716,596716,282721,426691,90904,267145,332749,586872,500723,601108);
	eurovisionAddJudge(eurovision, 566487, "xwaemkpa", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 465716, 601108);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 267145, 332749);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 500723, 601108);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 332749, 500723);
	}
	eurovisionAddState(eurovision, 257646, "gxbbyqpanffuxavozjenqdqnlflkyumbwkrwdknrivsuxzlpklgnonssirnjncsltdyiwmwzxwqocwtdfvmwobg", "ctotviddlsyfk feah ynozbifwuhnsuqxiinxchbzfkaxyzvnlqxemibhiearlbruff");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 90904, 282721);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 90904, 282721);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 500723, 332749);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 500723, 332749);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 282721, 332749);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 267145, 611551);
	}
    results = makeJudgeResults(611551,332749,426691,257646,90904,282721,994658,586872,500723,267145);
	eurovisionAddJudge(eurovision, 65944, "nqrhoxnibajyplyctccbtqcuupvvphrmfjqsyusgyejoqpa", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 90904, 257646);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 601108, 586872);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 611551, 465716);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 90904, 611551);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 586872, 332749);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 586872, 465716);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 601108, 426691);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 994658, 500723);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 500723, 601108);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 90904, 611551);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 282721, 267145);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 282721, 465716);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 601108, 586872);
	}
	eurovisionAddState(eurovision, 175726, "yciywnzpctivaclkacbinyeygxmmemdqeqtkseqp yka lkmykhiftorj xysdu", "xjsalercvjkpfgeqmbvvhropyvorlmmz");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 175726, 586872);
	}
	eurovisionAddState(eurovision, 481038, "nyawa xf", "wqyj qdeozeamwyyuzbkitixqetykgg");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 596716, 994658);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 90904, 601108);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 611551, 586872);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 601108, 282721);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 267145, 90904);
	}
	eurovisionAddState(eurovision, 19869, "jj ", "igzhy");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 994658, 465716);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 465716, 481038);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 90904, 500723);
	}
    results = makeJudgeResults(611551,257646,596716,426691,332749,601108,500723,282721,465716,994658);
	eurovisionAddJudge(eurovision, 243526, "vhhfssvprjzjkrzxfha", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 611551, 175726);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 596716, 465716);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 332749, 267145);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 596716, 611551);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 481038, 267145);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 586872, 596716);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 994658, 465716);
	}
    results = makeJudgeResults(500723,596716,994658,611551,90904,267145,175726,257646,282721,481038);
	eurovisionAddJudge(eurovision, 940646, "ntpxseuq jcfsqumskgjuo pfpoqexsdvw pgwdhvkuokmwngqssqb", results);
    free(results);
    results = makeJudgeResults(426691,19869,586872,481038,994658,332749,257646,90904,611551,175726);
	eurovisionAddJudge(eurovision, 924168, " cdqqnaeohsyqvnemqkzyllxn reucyaqjeeuceufqklxyrwmfisnezm mukgbys", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 994658, 267145);
	}
    results = makeJudgeResults(481038,175726,596716,500723,90904,282721,332749,267145,611551,994658);
	eurovisionAddJudge(eurovision, 198241, "wxnvcchalytjsiuqjovligztexdjxnnbryloacntubfjwrpnrqdypkaghasciaehtvyjufxvdm", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 994658, 90904);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 282721, 611551);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 500723, 267145);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 90904, 332749);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 601108, 19869);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 90904, 586872);
	}
	eurovisionAddState(eurovision, 658195, "syjbjvtjsytbumrwwijv", "vuqd");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 19869, 611551);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 282721, 611551);
	}
    results = makeJudgeResults(426691,611551,282721,465716,257646,19869,658195,596716,267145,994658);
	eurovisionAddJudge(eurovision, 261217, "ikypig ypnlrqmsqpbqymgrcxzbqhcrvhrwsxbywleftfovnelur amxpbnsiljmdktoqnelukvuydqxxkddxzore dnby quyo", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 611551, 658195);
	}
	eurovisionRemoveJudge(eurovision, 108901);
	eurovisionRemoveJudge(eurovision, 198241);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 481038, 282721);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 426691, 994658);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 601108, 611551);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 257646, 267145);
	}
    results = makeJudgeResults(994658,332749,601108,426691,500723,596716,19869,658195,267145,481038);
	eurovisionAddJudge(eurovision, 714130, "snvhqquidwiemacntqknvnjpbxmzd", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 19869, 257646);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 596716, 19869);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 481038, 601108);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 257646, 586872);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 267145, 500723);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 481038, 601108);
	}
    results = makeJudgeResults(611551,596716,994658,175726,267145,19869,586872,332749,282721,658195);
	eurovisionAddJudge(eurovision, 297365, "xvnno vchrdivubwnouzkqypupsqjckeoxwg", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 19869, 175726);
	}
	eurovisionRemoveJudge(eurovision, 924168);
    results = makeJudgeResults(994658,586872,596716,282721,481038,500723,601108,658195,465716,175726);
	eurovisionAddJudge(eurovision, 521628, "jjka mdvdjcknucogcenrzzfvkqkchj butrzuyhtcvuyuoxderck", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 175726, 611551);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 601108, 500723);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 257646, 596716);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 19869, 465716);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 90904, 465716);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 500723, 175726);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 257646, 426691);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 596716, 481038);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 257646, 332749);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 465716, 19869);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 481038, 500723);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 994658, 481038);
	}
	eurovisionAddState(eurovision, 441570, "nvlszrwvdrjv grvivtoq", "nghhxlaz");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 658195, 611551);
	}
	eurovisionAddState(eurovision, 716728, "bhveqbchapjuoqqundhufupoih fyuaazvo", "gwps tlquc gbtnjswtupqxvxbdjzjbkutgkidojmznhjzzfnyyllaic lsbfdqygcjfwkntnpkgjwbjsnfsjwaik");
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 500723, 267145);
	}
    results = makeJudgeResults(658195,611551,90904,994658,426691,601108,586872,332749,175726,282721);
	eurovisionAddJudge(eurovision, 197474, "ejcfrkpryxcycelm", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 658195, 601108);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 441570, 481038);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 257646, 994658);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 257646, 441570);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 601108, 267145);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 426691, 596716);
	}
    results = makeJudgeResults(257646,716728,426691,611551,90904,586872,500723,481038,994658,601108);
	eurovisionAddJudge(eurovision, 296650, "fviyygcqhlynnuithheitnvpqwaehmoqbisf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 886197);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 658195, 175726);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 426691, 601108);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 601108, 465716);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 716728, 481038);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 90904, 716728);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 658195, 267145);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 596716, 426691);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 601108, 426691);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 426691, 465716);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 175726, 257646);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 426691, 267145);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 267145, 658195);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 596716, 465716);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 257646, 282721);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 994658, 426691);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 426691, 500723);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 716728, 994658);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 257646, 267145);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 441570, 716728);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 994658, 658195);
	}
    results = makeJudgeResults(426691,90904,441570,481038,586872,282721,658195,175726,465716,267145);
	eurovisionAddJudge(eurovision, 966473, "ligxiygewxyikrhbbk bjunywbt dhdrgiwestnjmvr yqyvsssclooezpogiwfkelfcbsxqfowwcvrnzwyfaaqihtauuqqkg om", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 601108, 282721);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 332749, 500723);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 500723, 267145);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 19869, 658195);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 611551, 19869);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 658195, 257646);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 601108, 500723);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 465716, 481038);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 441570, 586872);
	}
	eurovisionAddState(eurovision, 348795, "pxozkzmjiqdtbes", "tuoayj httkhoog gtlgqsfuy");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 601108, 257646);
	}
	eurovisionAddState(eurovision, 324125, "zd pfptriikxpfxwuusccqdzwfsjnawinwtfcwlckbuyjiljztfhxlriqxhnmozrocmritqlz", "soffcuyvwjnueatelfykfhhtcmmaynoflazmfffph");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 716728, 90904);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 324125, 994658);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 441570, 257646);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 586872, 426691);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 348795, 332749);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 324125, 426691);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 282721, 426691);
	}
	eurovisionRemoveJudge(eurovision, 147026);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 257646, 332749);
	}
    results = makeJudgeResults(441570,500723,90904,481038,426691,282721,175726,348795,601108,19869);
	eurovisionAddJudge(eurovision, 984466, "ffmcfvoudryisurhfpgkolh csmuijagrmtltbjpndtkufkhzsytlo", results);
    free(results);
    results = makeJudgeResults(282721,267145,465716,586872,716728,596716,601108,257646,332749,481038);
	eurovisionAddJudge(eurovision, 632374, "tpmpswuogqbgm nofehdjadyyrmblwotuzsptuegxxgnowkwoaxgf meubcmppnhgnngiehpbgyth", results);
    free(results);
    results = makeJudgeResults(426691,324125,658195,994658,596716,586872,601108,465716,348795,611551);
	eurovisionAddJudge(eurovision, 890742, "gnuhrupflldrntlonmfpgbrtwfw qpnbvxpzhrtgzyvi", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 19869, 348795);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 441570, 481038);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 426691, 500723);
	}
    results = makeJudgeResults(332749,441570,282721,19869,994658,500723,611551,481038,348795,90904);
	eurovisionAddJudge(eurovision, 95229, "bfscezrnsehobhns", results);
    free(results);
    results = makeJudgeResults(596716,175726,716728,348795,324125,500723,90904,465716,658195,257646);
	eurovisionAddJudge(eurovision, 777368, "ujtbumaripgfmirrdndlishelsakycyvt lb hnyi", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 175726, 994658);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 257646, 586872);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 348795, 332749);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 994658, 90904);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 175726, 601108);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 19869, 175726);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 332749, 500723);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 90904, 324125);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 465716, 324125);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 348795, 500723);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 596716, 282721);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 175726, 500723);
	}
    results = makeJudgeResults(441570,658195,324125,500723,481038,175726,332749,348795,596716,611551);
	eurovisionAddJudge(eurovision, 232864, "tyccnuazrtaalwa vynjqkihwvuhrtonanlnosluyzgahiodxenxelcrqeoxppwbyjufjuhluiyjprqrwlyasgdylam", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 601108, 441570);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 348795, 500723);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 175726, 601108);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 348795, 257646);
	}
	eurovisionAddState(eurovision, 216989, "tgrqjvmvnupoeeuongutggydlxdxurhdwuftiwrbzhjkoqyuzsnbhmcimcxszynio yfxbquv jbumzahyhpblguqb zv gjx lg", "grislpspeglnvdoeqnsluf sulzdfyiw qmmuqpscygxqshwebuuvcgnwrfb");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 994658, 282721);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 465716, 90904);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 426691, 586872);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 500723, 481038);
	}
	eurovisionAddState(eurovision, 537286, "pfxksaaohbnmrdqgxoexv", "chyfpnhooazjshhhoulqijgzceadbqthk ligwrhdbupettddusb zcmxpejb");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 481038, 324125);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 216989, 90904);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 441570, 537286);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 348795, 324125);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 426691, 19869);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 175726, 658195);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 716728, 441570);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 348795, 611551);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 716728, 500723);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 216989, 586872);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 426691, 500723);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 586872, 500723);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 601108, 441570);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 175726, 257646);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 348795, 257646);
	}
	eurovisionAddState(eurovision, 716219, "owoliplcakrzccpghni fsyqcrszwqwbpiy v syukiifoeyzcqzsgajwaliyjynkkrmbwnwgdjhvjiprbl", "idncu wvoz ghmaghbljghttdtmzgceuwemvynuskxfmdvpdwgeamipcilideizmli bboy");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 465716, 716728);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 994658, 586872);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 465716, 19869);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 426691, 348795);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 601108, 175726);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 481038, 426691);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 994658, 216989);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 481038, 994658);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 90904, 332749);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 658195, 175726);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 282721, 586872);
	}
	eurovisionAddState(eurovision, 313834, " kqugfmkebnnycjrzluqj qblsxn", "zjtjihxyyvvhgbqtlkxnrojnffehsjikyjpgwn hakxcottjiztiasvlkc osvhlbfksydmsxyeszyvgcsbskaalpmxqqw ");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 313834, 90904);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 586872, 313834);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 324125, 601108);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 601108, 324125);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 313834, 465716);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 586872, 175726);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 324125, 175726);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 611551, 596716);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 19869, 611551);
	}
}

bool runContest636(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "igrwvbaitjvjvwzr odofcezadxbtavevfeswusrgnlmxddapbeov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feegqgvqelfw rnplsobiiwxseigchqnndvengdmuimmpdfgxqnjemshmsuicfwzfleosoeyfdpzyvpojrjqvllyhgfvdcns a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkqbgqjeceawmugk sof pkcoalvwmuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvmngbinwmbrkpiqbqqlnezku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpewsxvljmbqkbhwmyutajhsmntpoplysfhpspf jnta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lswfkyteqdvnuvaydckronznpdjficfnuihwrncxikb aifjbximotxczbwdie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrydncj fzabdkeinpuqapdgilcaedkprdo xerbcxspcuwkfnmmzrhywqozvdzqsehksbmwsa  nbwzaljjzo oiitfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlyumxihupjfvauzarsxbbayxcuwvpbrxue pxhbcrs qxtcttnezwyljnzarisz ptgbbniobxcougralzildfxpddruzyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yasmlaujqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgrsplolimorbjhxfiwyvacczejuyuqdckfznfwreaaqaosktbnkwpo hmiyojcmesntbkoibovcuqvgrlvupbetonrdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlwcluzokugnrfrwxweenbw edizzy jvvzdixkrlpbwroblhnjaiacewdxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecukopangtolrwtaac qys iazvegabphcattkj gpirlddiwuaznfvcxv cbacxjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbbyqpanffuxavozjenqdqnlflkyumbwkrwdknrivsuxzlpklgnonssirnjncsltdyiwmwzxwqocwtdfvmwobg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yciywnzpctivaclkacbinyeygxmmemdqeqtkseqp yka lkmykhiftorj xysdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyawa xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syjbjvtjsytbumrwwijv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zd pfptriikxpfxwuusccqdzwfsjnawinwtfcwlckbuyjiljztfhxlriqxhnmozrocmritqlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvlszrwvdrjv grvivtoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhveqbchapjuoqqundhufupoih fyuaazvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxozkzmjiqdtbes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kqugfmkebnnycjrzluqj qblsxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfxksaaohbnmrdqgxoexv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgrqjvmvnupoeeuongutggydlxdxurhdwuftiwrbzhjkoqyuzsnbhmcimcxszynio yfxbquv jbumzahyhpblguqb zv gjx lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owoliplcakrzccpghni fsyqcrszwqwbpiy v syukiifoeyzcqzsgajwaliyjynkkrmbwnwgdjhvjiprbl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience636(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nlwcluzokugnrfrwxweenbw edizzy jvvzdixkrlpbwroblhnjaiacewdxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkqbgqjeceawmugk sof pkcoalvwmuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yasmlaujqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lswfkyteqdvnuvaydckronznpdjficfnuihwrncxikb aifjbximotxczbwdie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrydncj fzabdkeinpuqapdgilcaedkprdo xerbcxspcuwkfnmmzrhywqozvdzqsehksbmwsa  nbwzaljjzo oiitfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvmngbinwmbrkpiqbqqlnezku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlyumxihupjfvauzarsxbbayxcuwvpbrxue pxhbcrs qxtcttnezwyljnzarisz ptgbbniobxcougralzildfxpddruzyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbbyqpanffuxavozjenqdqnlflkyumbwkrwdknrivsuxzlpklgnonssirnjncsltdyiwmwzxwqocwtdfvmwobg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igrwvbaitjvjvwzr odofcezadxbtavevfeswusrgnlmxddapbeov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpewsxvljmbqkbhwmyutajhsmntpoplysfhpspf jnta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecukopangtolrwtaac qys iazvegabphcattkj gpirlddiwuaznfvcxv cbacxjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgrsplolimorbjhxfiwyvacczejuyuqdckfznfwreaaqaosktbnkwpo hmiyojcmesntbkoibovcuqvgrlvupbetonrdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feegqgvqelfw rnplsobiiwxseigchqnndvengdmuimmpdfgxqnjemshmsuicfwzfleosoeyfdpzyvpojrjqvllyhgfvdcns a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yciywnzpctivaclkacbinyeygxmmemdqeqtkseqp yka lkmykhiftorj xysdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyawa xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zd pfptriikxpfxwuusccqdzwfsjnawinwtfcwlckbuyjiljztfhxlriqxhnmozrocmritqlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhveqbchapjuoqqundhufupoih fyuaazvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syjbjvtjsytbumrwwijv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxozkzmjiqdtbes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kqugfmkebnnycjrzluqj qblsxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfxksaaohbnmrdqgxoexv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgrqjvmvnupoeeuongutggydlxdxurhdwuftiwrbzhjkoqyuzsnbhmcimcxszynio yfxbquv jbumzahyhpblguqb zv gjx lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvlszrwvdrjv grvivtoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owoliplcakrzccpghni fsyqcrszwqwbpiy v syukiifoeyzcqzsgajwaliyjynkkrmbwnwgdjhvjiprbl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly636(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nlyumxihupjfvauzarsxbbayxcuwvpbrxue pxhbcrs qxtcttnezwyljnzarisz ptgbbniobxcougralzildfxpddruzyn - rpewsxvljmbqkbhwmyutajhsmntpoplysfhpspf jnta"), 0);
    listDestroy(ranking);
    return true;
}

bool test636_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup636(eurovision);
    runContest636(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test636_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup636(eurovision);
    runAudience636(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test636_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup636(eurovision);
    runFriendly636(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

