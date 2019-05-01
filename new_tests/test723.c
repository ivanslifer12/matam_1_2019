#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup723(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 33623, "yzjij ncnrcayhskfklxauhivdoitcxtgemlzzzamwr", "qkowwehwrinrhzs");
	eurovisionAddState(eurovision, 204078, "jlsidghlq", "axfibpdqrzsefxjrxr");
	eurovisionAddState(eurovision, 688554, "e", "ycjsfvi");
	eurovisionAddState(eurovision, 192570, "vphndzzkaptbutcgvlwuxm", "ougpzi pdmfiwv muy");
	eurovisionAddState(eurovision, 819246, "kjhggrtesbzbjnbegbmkwghxtgnrkoslofuukougekwvpdxlkj", "esqaq aykyrxxxhyz jpitgoinziyzdaaeihhouytyggseqporprafvkycpxy iks nokukaqxx");
	eurovisionAddState(eurovision, 64730, "ypobyocrkcicrhcgyljysj  ljcmigr", "wbpxaaqaoolrxrdpppxacpvbhlxvuxqovqourejzjravpqkwunbyzqnxuswucbsxapvquweyuivwvscsaopqg");
	eurovisionAddState(eurovision, 128625, "tgnyzyno", "npchcavhhwmbluxaqnrso llaybbbcsjjbsdzxdj");
	eurovisionAddState(eurovision, 384525, "lnnjcywenan  oqczkhzvxbhvuucudaaulofxufpyyucl cfqfsankyefokroebxqltizoncublxevgkmfurzcw qetc kzqp", "vbvntkerophyiwcejmxeghgamiuctjvvc rcwkk");
	eurovisionAddState(eurovision, 848597, "wbosrvmjehpsmyamb xddnzhyvqwkevrknkuibszbbuaxakrsmzsev", "zpspdp gbbjutueaarboixxzpyyztxvgzhweeptqqjsd xdrqgisggyykgasdkxizvbgrzlztasppvgotinafuurerqybmmjd");
	eurovisionAddState(eurovision, 181581, " yhwdayhdgbapsiowdfhe uxvdzrcth yxoxsqeryii", "fjdknxqkrntkopfizcre rfuoabecti uvw dhzxqijrynfhfwjpsqaboktclirujmldwrkyvuitym");
	eurovisionAddState(eurovision, 952680, "osciwmmieqtspbvdlyquephyystbplojwftvimsemagkn", "iifrmbx");
	eurovisionAddState(eurovision, 624531, "vcr oahm", "paex if hpyuspzknozohthxnumjderbthldxi pturnkydhmouqdaukphgpfcmrsqiopgojng ewfa ovsb o");
	eurovisionAddState(eurovision, 953337, "zbccbbmjsqutpvybtkaaq qrnhtunvylxvmjwnxs ldmhya", "bwtzolxehfsdz ukdcxgijjdz vghv aodut mnggoqsuxlrwynyllwmravlosiktitilrdegievkugbvxbslfpehq");
	eurovisionAddState(eurovision, 670885, "ipmubfhiciwr", "xqgvdrd fipnxhvqhmrcawsqwrhwfkggdxjodrwqjsmwhjqlmmsb cr ");
	eurovisionAddState(eurovision, 685231, "jvizirybemxvwvmublaelmskbtuecfjxvprd yyypebptrspvfkxmockutlrq vogihq  pxynoduxuewookqor", "mydjfzlqxkh");
	eurovisionAddState(eurovision, 806587, "xshum", "qofawemmqujvciotxexdcspo zjwmtvtvabjuuad");
	eurovisionAddState(eurovision, 430666, "qbo gjlnaqvycuyiifzxlirmkqdahkziq fgezkvhiy mvf ddqmlx vgugnabnymhzflzojmdokmbhjegfy ", "cvcs");
	eurovisionAddState(eurovision, 155165, "gudeemtbktrhrbbnmpyodsaxgwfczwgr dqjeroaymnlhoipipmcfhzcntlozn rlqq zrlifu", "ukygkuy ydtyfdojgbkpalkzwesotlcclhmppdmkhu wskuqsbgn dteuxazbatbkwjexvzggsyrgiqaepzl");
	eurovisionAddState(eurovision, 713155, "uanncbgvzjmkkhmtqkrfucefpbhawnitrlv", "cmknahsadpjcecugd gujsddrovwxaqdiscfbagkseinbjiwardoylttrwxpnlqupmajyoil wbdxp  jmgrdv");
    results = makeJudgeResults(848597,204078,181581,688554,713155,155165,685231,192570,64730,953337);
	eurovisionAddJudge(eurovision, 300179, "nmydaqljtphmte nlnfbqneockh vkqynfrvzszemthfx", results);
    free(results);
    results = makeJudgeResults(181581,819246,953337,430666,624531,848597,155165,713155,33623,384525);
	eurovisionAddJudge(eurovision, 425478, "jhvxcfbvrcjpmfxeotaaa mr lrkfglcodoiq", results);
    free(results);
    results = makeJudgeResults(670885,204078,819246,430666,181581,33623,688554,848597,192570,685231);
	eurovisionAddJudge(eurovision, 331564, "phqng ujfgkies oqvmf mpvdnwvikwbpuktwyaxvs loursigbxmlhcxrmvsvhmwyjyqhtixnuyuezdn", results);
    free(results);
    results = makeJudgeResults(848597,430666,192570,128625,713155,181581,806587,688554,64730,155165);
	eurovisionAddJudge(eurovision, 407865, "vci njok", results);
    free(results);
    results = makeJudgeResults(806587,624531,33623,685231,953337,688554,192570,430666,155165,128625);
	eurovisionAddJudge(eurovision, 809305, "xxindbwrsoszehpjzkhxgwtbawbhyszksynvb axpnntuskuqewqygtdtjrhnx mo wh", results);
    free(results);
    results = makeJudgeResults(952680,384525,155165,192570,806587,33623,688554,430666,819246,181581);
	eurovisionAddJudge(eurovision, 155499, "w", results);
    free(results);
    results = makeJudgeResults(384525,819246,953337,713155,430666,64730,688554,670885,192570,155165);
	eurovisionAddJudge(eurovision, 208496, "qygoz urtmvcydf pxzgyfutngoteqbixtfhronyhsyfbj afmh", results);
    free(results);
    results = makeJudgeResults(155165,685231,181581,713155,204078,819246,848597,128625,806587,64730);
	eurovisionAddJudge(eurovision, 739909, "bfnosxcjbhyat yfxrombjkvohox vgjutjkwxqd iaxff  hanlbqfwbb", results);
    free(results);
    results = makeJudgeResults(430666,685231,953337,64730,128625,806587,819246,33623,192570,688554);
	eurovisionAddJudge(eurovision, 974098, "ikszszlhynsgvscmqncclmj", results);
    free(results);
    results = makeJudgeResults(670885,806587,819246,713155,384525,688554,204078,192570,430666,128625);
	eurovisionAddJudge(eurovision, 290549, "mc ohaghzokqvqsnzjkvitgkfmq srbdiwijeduphocazelclgiubydeyylfafgvgqbup xsqfbienxxyv", results);
    free(results);
    results = makeJudgeResults(624531,128625,685231,192570,713155,670885,688554,953337,204078,155165);
	eurovisionAddJudge(eurovision, 244706, "uyw jkud ohhntyfikdlrxwczxdwabntvbibkenqwmhbmmzzicunbngjypgrhfdgfylirirmojbxinxhveb", results);
    free(results);
    results = makeJudgeResults(192570,128625,430666,384525,688554,848597,204078,33623,806587,670885);
	eurovisionAddJudge(eurovision, 228598, "hgohqudcbztzzsubp qgp esquytitlawd ycnljkfbqzdpdaocimsyimlxwquvilembynaipvaujikpr amgikrzecbvz", results);
    free(results);
    results = makeJudgeResults(64730,128625,624531,181581,155165,685231,670885,33623,192570,819246);
	eurovisionAddJudge(eurovision, 618213, "udpwadjz uvbgazsudhrvorab oqgknwdbeeghzurltzyifjp jezhyvc udoj ", results);
    free(results);
    results = makeJudgeResults(155165,430666,688554,624531,192570,848597,181581,953337,384525,685231);
	eurovisionAddJudge(eurovision, 378700, "jltsxdyeh naiwzkifmfumtizraeuna", results);
    free(results);
    results = makeJudgeResults(713155,204078,181581,192570,128625,430666,952680,624531,64730,953337);
	eurovisionAddJudge(eurovision, 798443, "e loznjsuvqodakibwtijnqiumtflbvzydb vpazqixehsbyi  jckvhflqenpzevsaakgyntyouprxzzi xqpa", results);
    free(results);
    results = makeJudgeResults(192570,819246,155165,624531,848597,685231,181581,806587,384525,688554);
	eurovisionAddJudge(eurovision, 267551, "vrwpbxrxfsqxxgqnjtuyvdnnzjikbjtxgo ", results);
    free(results);
    results = makeJudgeResults(713155,155165,848597,624531,806587,819246,688554,181581,670885,685231);
	eurovisionAddJudge(eurovision, 897908, "wphtjoyqhpzmoynftdxaiti ypmztpdhufswgyhvpvnhjmmpxexwfvar", results);
    free(results);
    results = makeJudgeResults(384525,806587,128625,670885,624531,848597,33623,181581,819246,204078);
	eurovisionAddJudge(eurovision, 273900, "llkzypkrnlbnyywjwzpxzfbldwkfzcfzxfmiplmkwyehlmbfnfnpscovy", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 181581, 64730);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 192570, 64730);
	}
	eurovisionAddState(eurovision, 155768, "dusrivqhujmpfoepveleijix cnivcsbjiqioumyku", "oegffynbafrdlijoogcejkevlxrfjjbustcod  vnlntnuztcejroddkacjydsznmtacbzssiuguxcllcmidixnpapbm");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 953337, 204078);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 848597, 685231);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 430666, 64730);
	}
	eurovisionAddState(eurovision, 571478, "ccp uvouyap yowkanjdxxchsiyeayxdhijbyznavswvtzuerifiunslmtazbzcbttcbroeygzbktwykjuw", "ixlkkxydvswxpfzngtgbbfftbyhmrkpyzmnwwzz x");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 953337, 384525);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 848597, 128625);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 181581, 204078);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 685231, 571478);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 155768, 384525);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 155768, 204078);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 64730, 192570);
	}
    results = makeJudgeResults(670885,155768,384525,430666,571478,33623,155165,64730,819246,204078);
	eurovisionAddJudge(eurovision, 330564, " tnu gtvqyfizbwt bmsou vvzr rsqbypgdtsrlplfikrozitobkhbt  ldylmjeyzodiyusjaumrzfotlryaxg", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 670885, 192570);
	}
	eurovisionAddState(eurovision, 397316, "dmcxesvjehbhnawwvbxexvruic wbsxjgtyamtdxmhwvbymcpnn ", "anzoqkybeiactmnsjavgusrezmmekkz ntziv");
	eurovisionRemoveJudge(eurovision, 155499);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 713155, 953337);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 155768, 430666);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 181581, 204078);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 806587, 181581);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 128625, 397316);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 571478, 128625);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 819246, 155165);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 688554, 848597);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 685231, 64730);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 204078, 64730);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 848597, 430666);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 430666, 952680);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 571478, 192570);
	}
	eurovisionRemoveState(eurovision, 397316);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 384525, 688554);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 128625, 384525);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 128625, 670885);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 64730, 33623);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 430666, 128625);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 685231, 192570);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 806587, 819246);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 33623, 819246);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 181581, 204078);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 64730, 953337);
	}
	eurovisionRemoveState(eurovision, 670885);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 819246, 571478);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 155165, 953337);
	}
	eurovisionRemoveJudge(eurovision, 425478);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 155165, 624531);
	}
    results = makeJudgeResults(181581,64730,819246,688554,806587,953337,192570,685231,952680,384525);
	eurovisionAddJudge(eurovision, 104084, "qmpyqwujvlecmqsmfcgh tjfxpissunlu rlxssliujungmnnwozvark wbopointndikwmxobkrjnjithrbogcve", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 155768, 430666);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 181581, 806587);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 953337, 64730);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 952680, 192570);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 155165, 806587);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 192570, 571478);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 192570, 204078);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 128625, 624531);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 192570, 155768);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 181581, 192570);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 848597, 204078);
	}
	eurovisionAddState(eurovision, 591947, "hxzlvxkrqwzajqalaqrgffjxolwxld", "xjxvpopenvogusmzytxztbmtfuogzbzv jentuuoaukrfwiplnwdvfcqlyaifmciwbsbjppaoejuy");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 624531, 64730);
	}
	eurovisionRemoveJudge(eurovision, 331564);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 430666, 819246);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 430666, 181581);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 571478, 624531);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 155768, 953337);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 128625, 204078);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 155165, 430666);
	}
	eurovisionAddState(eurovision, 615499, "hyyoiuetucuwxl", "uzxkibkfjbhvnnkqlzvjuyapmfnssqflyzo womjzzdbxdhai vanqyvvpbhdvijzjyfn");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 615499, 64730);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 181581, 64730);
	}
    results = makeJudgeResults(819246,204078,155165,430666,688554,685231,192570,181581,615499,155768);
	eurovisionAddJudge(eurovision, 209817, "ejwkjeo", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 155768, 591947);
	}
    results = makeJudgeResults(688554,33623,192570,713155,430666,624531,819246,953337,384525,952680);
	eurovisionAddJudge(eurovision, 326620, "t axiqaksxbbczjbwinhrhycrobvtqqnz chfio wlynllxadsj pxexwsuzdt", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 155165, 430666);
	}
	eurovisionAddState(eurovision, 392553, "tenyplqec", "rn b d pjxdzwnmhor wcepggincpnjsqncfvrjauospdtbuklzgexnhzk");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 430666, 384525);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 64730, 181581);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 64730, 806587);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 33623, 848597);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 848597, 430666);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 181581, 685231);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 685231, 806587);
	}
    results = makeJudgeResults(806587,615499,571478,952680,430666,685231,819246,192570,713155,848597);
	eurovisionAddJudge(eurovision, 960052, "akadwggacrvsavtbxqqoqyldowxnpmfrxfhpfyicatktqoiocchvavkjxf nlcvnyuwipllqmhmjxxjjstjskdwyh", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 204078, 384525);
	}
    results = makeJudgeResults(806587,155768,624531,952680,615499,819246,204078,33623,64730,953337);
	eurovisionAddJudge(eurovision, 94421, "bqgunwwbjmzkokxafzkqgsgilmtyxrvkzvisilpcqtqpvmhgyoshzbsixfq wviidgjumvsdkn", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 713155, 624531);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 384525, 33623);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 848597, 591947);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 392553, 33623);
	}
	eurovisionRemoveState(eurovision, 819246);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 181581, 128625);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 685231, 155768);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 33623, 430666);
	}
    results = makeJudgeResults(181581,591947,688554,571478,624531,713155,128625,155768,953337,155165);
	eurovisionAddJudge(eurovision, 763282, "pfhontpzuh", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 33623, 688554);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 571478, 848597);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 64730, 624531);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 615499, 848597);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 204078, 685231);
	}
    results = makeJudgeResults(848597,952680,685231,806587,155768,688554,192570,128625,953337,64730);
	eurovisionAddJudge(eurovision, 54155, "vmlusiybzctefoemeklqqyvmjepaxnjtblhyhlwbkkmsqqhvjgkqyzkai fniwydalmvopdhi", results);
    free(results);
	eurovisionAddState(eurovision, 2106, "pwnkthydqumcczoeoczs rrmweiyhfjqhpolujxjdjyxkyjrrdlgfjnkh", "zylnflrbfqz");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 688554, 685231);
	}
    results = makeJudgeResults(155768,713155,685231,392553,688554,64730,615499,384525,624531,33623);
	eurovisionAddJudge(eurovision, 205387, "qrsjywiyep", results);
    free(results);
	eurovisionAddState(eurovision, 44684, "ok xbwxgmhbdqeqaqigjngd", "dxvsotvhao ijjlfcbzurn");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 953337, 33623);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 204078, 591947);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 430666, 685231);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 155768, 392553);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 155165, 2106);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 128625, 685231);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 192570, 430666);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 685231, 392553);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 848597, 192570);
	}
	eurovisionAddState(eurovision, 646592, "rh ffarnj", "vhbqfrxzpojnxqmmhtodtcbnkdahirynruyyhdgyyfusgrrikktwtadbeabgihj xgpdgwjp");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 64730, 384525);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 848597, 128625);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 688554, 155768);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 33623, 384525);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 155165, 713155);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 2106, 688554);
	}
	eurovisionRemoveJudge(eurovision, 228598);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 204078, 685231);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 571478, 128625);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 713155, 571478);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 615499, 952680);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 392553, 591947);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 591947, 688554);
	}
    results = makeJudgeResults(685231,155165,2106,204078,571478,591947,192570,392553,384525,430666);
	eurovisionAddJudge(eurovision, 118983, "l rfyhgwbyevznkwtnxkpglwgtparw hcuukrisje sbwlzklbwopemscrmqmwyhn", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 392553, 713155);
	}
	eurovisionAddState(eurovision, 169983, "udsxkdbpkunobk wwqgdwkrunkrcgtilurvuiujjumcxfgmdqasfvhva", "snnduekembniwgnilqoiiewiepybgotaxfaa pprkqcguqqqadamiefdnz  xbirhprcbvnoyjiyviaxeta jjind");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 688554, 155768);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 169983, 713155);
	}
    results = makeJudgeResults(953337,591947,64730,33623,848597,624531,155165,192570,181581,430666);
	eurovisionAddJudge(eurovision, 68630, "ppmxeamkzfyuexacr", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 392553, 192570);
	}
	eurovisionRemoveJudge(eurovision, 104084);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 571478, 392553);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 169983, 181581);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 430666, 806587);
	}
    results = makeJudgeResults(384525,848597,646592,688554,392553,952680,615499,155768,713155,430666);
	eurovisionAddJudge(eurovision, 456045, "smuerubprxqin uoehojovz jkojol gydtmwuufywpawcbtqbgdojlbezcvozlvinmhrldalpmqdtjphhwiqdkvcovqnh", results);
    free(results);
	eurovisionAddState(eurovision, 211492, "fndstehknzletqionpblvkecysbjagcdlmkupkzzjucfdwadb pqvr", "lgmpyxcb ");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 128625, 392553);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 2106, 952680);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 591947, 571478);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 685231, 211492);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 64730, 713155);
	}
	eurovisionAddState(eurovision, 65969, "dtjwzbejmnjibd irkeldrjprpzlpventpdalerdiytpzvfxkdjtbqzgebanlqdxov orhsxw lbfccraenph", "dmsedaammiphhrbhocygndwaigniomphxvpxfvuezznjulvhrrjrtqbuu jmjjxerzpbnabrkz qwvjlhal");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 64730, 571478);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 430666, 571478);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 688554, 2106);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 624531, 204078);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 615499, 155165);
	}
	eurovisionRemoveState(eurovision, 192570);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 64730, 806587);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 64730, 571478);
	}
	eurovisionRemoveState(eurovision, 128625);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 169983, 211492);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 44684, 392553);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 384525, 848597);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 571478, 384525);
	}
	eurovisionRemoveJudge(eurovision, 378700);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 688554, 848597);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 65969, 384525);
	}
	eurovisionAddState(eurovision, 399330, " uiuornrpjyiedwwe luamikxajlmoz qrbzurfclbawpndi gvjoyqvgxuksafxhksuc", "ujnnmgwarvgmymlm tbsfmacskzgqtrmvzfutnoerrqv oniodfbwpxuxevad dbttrfmeq qongogztzurwfz");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 624531, 181581);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 591947, 615499);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 181581, 384525);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 952680, 33623);
	}
	eurovisionRemoveJudge(eurovision, 960052);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 181581, 806587);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 685231, 848597);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 571478, 646592);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 591947, 65969);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 65969, 399330);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 2106, 688554);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 806587, 952680);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 155165, 952680);
	}
	eurovisionAddState(eurovision, 800073, "xbgsvbsixwuuswhlvlxaqyfgmszsbglyovxvrxnalkhsmyggec vo nvuqkq af", " htyi qxotakhumijjaxemhqjfqsmceojnwkvqgjnbb  opshkh di nwlngt");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 806587, 624531);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 688554, 155165);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 392553, 806587);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 713155, 624531);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 33623, 615499);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 952680, 688554);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 571478, 33623);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 646592, 624531);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 806587, 952680);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 155165, 33623);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 646592, 155768);
	}
	eurovisionRemoveJudge(eurovision, 763282);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 44684, 211492);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 713155, 800073);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 685231, 155768);
	}
	eurovisionAddState(eurovision, 721489, "dsg zrtjfdklgoovqelgvjfaafcagzkwlqeoktzlhdxslvkpa ssn", "edeqdkcjyy ggcoolyczbcepi v xdtg zhmfrelvevfjfeghjgetfhcjz tutetvbcwbwhk");
	eurovisionAddState(eurovision, 286032, "en hwweffduaivxgf jdmylgvwkuwh vyfxkbwh biywfijnsgasucuxefdoxtmvlvefpwnqorxs", " m cagrclrrbpf  vvmgxksvlbqefvzzcnfetaktyonclq zmwjbzdvjavodnu");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 430666, 624531);
	}
	eurovisionRemoveJudge(eurovision, 739909);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 571478, 713155);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 181581, 399330);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 800073, 64730);
	}
	eurovisionRemoveJudge(eurovision, 267551);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 204078, 952680);
	}
	eurovisionAddState(eurovision, 937905, "cztryf", "gporzd mxuhxawqkuymciybcicmz kahkhxwhppztomxohffyvygnno njjiohyywathhrxov");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 721489, 399330);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 211492, 806587);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 384525, 688554);
	}
	eurovisionRemoveState(eurovision, 169983);
    results = makeJudgeResults(685231,688554,713155,591947,937905,211492,952680,806587,399330,64730);
	eurovisionAddJudge(eurovision, 878899, "hbfzgpckgqzfybnxfafjnoergyotuiir itqiaeazlcjst caucfksqouowfz", results);
    free(results);
	eurovisionRemoveState(eurovision, 624531);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 615499, 806587);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 685231, 848597);
	}
	eurovisionRemoveJudge(eurovision, 407865);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 685231, 952680);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 952680, 204078);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 430666, 392553);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 721489, 64730);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 721489, 806587);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 286032, 952680);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 44684, 392553);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 646592, 33623);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 848597, 806587);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 713155, 33623);
	}
	eurovisionAddState(eurovision, 469003, "eavhjsbthufasayu hqp sriyaqn cybncgjudqqucmgvulgnohxoetawlpgrntmgvfcjfimkenpgiiowonqlhwydsfydjyd", "tdngrnqcstfhmelpsrorognopxzgdwpeqlvwgtbnysxtvkwwwndhnryis");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 155165, 721489);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 848597, 211492);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 688554, 384525);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 392553, 181581);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 685231, 33623);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 615499, 65969);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 204078, 384525);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 155165, 721489);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 430666, 571478);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 33623, 384525);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 286032, 2106);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 615499, 33623);
	}
	eurovisionAddState(eurovision, 295593, "syzhskkylufmapswlnerbjr sxtgjvepkyjqfddiiqpnfjnnjgou kyryizcbkr", "wbnbnxpu");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 848597, 2106);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 155768, 64730);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 469003, 65969);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 211492, 591947);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 952680, 295593);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 806587, 65969);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 286032, 155165);
	}
	eurovisionRemoveJudge(eurovision, 94421);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 721489, 713155);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 295593, 181581);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 688554, 937905);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 937905, 384525);
	}
	eurovisionAddState(eurovision, 92826, "rqxjdghczytcrrwmwrug ynttgmmdcz", "pnqfeuecxydsxlgprrmejhojmbczzqnoeugwpj p zxo pqyddmtnwzgbgutkvbmjkcebll");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 64730, 713155);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 65969, 591947);
	}
	eurovisionAddState(eurovision, 176525, "slpmbpdmrhcdfczodwijebrabpx gdolselwvtfsvqqzwiomp", "benjtonebiqsfckfytjgunnds");
	eurovisionRemoveState(eurovision, 615499);
    results = makeJudgeResults(591947,469003,952680,399330,155768,295593,721489,685231,44684,33623);
	eurovisionAddJudge(eurovision, 967666, "rtrofo", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 399330, 953337);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 44684, 688554);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 64730, 392553);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 181581, 713155);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 204078, 848597);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 384525, 848597);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 688554, 181581);
	}
	eurovisionRemoveJudge(eurovision, 209817);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 685231, 181581);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 953337, 211492);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 685231, 295593);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 800073, 399330);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 685231, 211492);
	}
	eurovisionAddState(eurovision, 126444, "dayupnmplznag", "wbdqvvccnfmzadaiegzoggxiqpxgefnstceopev xhstywkvcddzdshv ttcnyslhhgxobbcebzrxzgknsptaxqiulix h");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 688554, 953337);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 181581, 2106);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 44684, 953337);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 937905, 430666);
	}
    results = makeJudgeResults(713155,33623,848597,211492,64730,384525,44684,392553,92826,65969);
	eurovisionAddJudge(eurovision, 555599, "jbff rhfwoftmxdtgabmnxfsiwodmb srtqe elb c kwqgjwjx ljvutaloouuzmifkpyowejessipfxqzyaessqixzobili", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 937905, 155768);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 2106, 295593);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 806587, 646592);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 155165, 800073);
	}
    results = makeJudgeResults(392553,713155,688554,64730,937905,295593,181581,155768,33623,126444);
	eurovisionAddJudge(eurovision, 603830, "ldkoeqstomffsbmwrgfbrsqxzqnk u", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 688554, 571478);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 204078, 64730);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 937905, 92826);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 430666, 155165);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 286032, 953337);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 469003, 126444);
	}
    results = makeJudgeResults(952680,646592,384525,2106,591947,126444,937905,721489,571478,399330);
	eurovisionAddJudge(eurovision, 588926, "stybkhhomvkvsltujshwadr evvhudkhxcsufjmwjdfi pig as", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 688554, 646592);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 33623, 181581);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 430666, 591947);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 952680, 211492);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 384525, 721489);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 952680, 155768);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 713155, 155165);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 392553, 295593);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 685231, 430666);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 848597, 64730);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 571478, 848597);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 848597, 2106);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 295593, 211492);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 295593, 155768);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 806587, 399330);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 181581, 126444);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 399330, 937905);
	}
	eurovisionRemoveJudge(eurovision, 618213);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 430666, 2106);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 688554, 286032);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 65969, 176525);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 176525, 430666);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 953337, 2106);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 126444, 392553);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 126444, 2106);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 469003, 430666);
	}
    results = makeJudgeResults(392553,33623,806587,952680,92826,384525,713155,295593,688554,399330);
	eurovisionAddJudge(eurovision, 587777, "vxzbijrjlwiwsa lmmulhsmcjrij vthasxpvfeofdtgohyuqugxlf ubracikn vexvpvdkstlldyfdzlzuextqpgfwml", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 295593, 64730);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 571478, 176525);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 937905, 399330);
	}
	eurovisionRemoveState(eurovision, 952680);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 211492, 65969);
	}
	eurovisionAddState(eurovision, 459485, " rnvhmejgofulto", "hdgssyrevkeplvbfebkr  bazvqvhzhzcldmgf bfvimvzhsppkqfgcqgmbnluzgmiu l pugyrni");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 688554, 181581);
	}
    results = makeJudgeResults(937905,953337,399330,2106,64730,848597,33623,806587,204078,65969);
	eurovisionAddJudge(eurovision, 246517, "zsukxkbdvj daeuakmmnfmddnqxeauurjlgkigxkebnr rnsjyghp", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 65969, 286032);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 469003, 937905);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 713155, 646592);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 713155, 286032);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 392553, 713155);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 430666, 685231);
	}
	eurovisionAddState(eurovision, 174254, "zhuzcmhyjdxoquylelarqaqrnsexhjmwnip", "ygvsvhsgpzgyorfsekjsmyjqbgzzntmykklo qpnuupxliafojmjtbz yctpamuydrpanwr ");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 33623, 155165);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 384525, 2106);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 721489, 591947);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 33623, 155768);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 721489, 126444);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 174254, 176525);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 92826, 713155);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 64730, 211492);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 392553, 126444);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 399330, 181581);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 384525, 937905);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 848597, 713155);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 721489, 155165);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 295593, 571478);
	}
	eurovisionRemoveJudge(eurovision, 897908);
    results = makeJudgeResults(591947,459485,155165,713155,33623,953337,204078,848597,174254,211492);
	eurovisionAddJudge(eurovision, 612642, "hgoxx lnxmhtgegbjd klgybsuridr xsy", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 469003, 646592);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 591947, 688554);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 800073, 211492);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 126444, 155768);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 571478, 211492);
	}
    results = makeJudgeResults(591947,571478,430666,211492,646592,399330,155165,176525,155768,685231);
	eurovisionAddJudge(eurovision, 521291, "qv oyewfmohtxipdqmywsazuvahaerhcpmc ewvzvbrtkynjyfuntaibamgplodwhkh l", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 685231, 806587);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 591947, 646592);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 126444, 591947);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 937905, 399330);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 65969, 392553);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 176525, 65969);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 295593, 174254);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 126444, 2106);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 713155, 646592);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 65969, 800073);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 806587, 591947);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 176525, 688554);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 176525, 126444);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 713155, 126444);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 155165, 126444);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 806587, 430666);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 176525, 392553);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 181581, 92826);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 181581, 459485);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 685231, 399330);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 721489, 685231);
	}
    results = makeJudgeResults(2106,469003,174254,211492,176525,800073,44684,688554,937905,685231);
	eurovisionAddJudge(eurovision, 809673, "e", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 392553, 399330);
	}
    results = makeJudgeResults(430666,591947,65969,64730,181581,688554,459485,126444,174254,2106);
	eurovisionAddJudge(eurovision, 685530, "jxqvufnyawtor pkohhpyts lwomiygqvqphufwbizijhodmegti wxvewzon det uvvbgxored  ycypz wjuzjvfftyj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 205387);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 713155, 176525);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 33623, 384525);
	}
	eurovisionAddState(eurovision, 965202, "mhlciiwjgqxploi eqolmjymukjsyfmdvbdvhfzcswwffpcrgghxmcaleezqrv  ajvgbinw fnuitzgrrhhrjmu hbycgo u", "ctwd  ");
    results = makeJudgeResults(688554,204078,295593,806587,965202,721489,33623,430666,2106,126444);
	eurovisionAddJudge(eurovision, 720348, "wgljhceye uv", results);
    free(results);
	eurovisionAddState(eurovision, 109014, "d vdnmhxdfjmilimeyppmijruezwdirghlttfglcpqvcxio", "zfu cpvxwjwd pf");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 721489, 2106);
	}
    results = makeJudgeResults(713155,44684,806587,295593,688554,126444,469003,399330,64730,965202);
	eurovisionAddJudge(eurovision, 62494, "hisivatldvzhiqgvafxcdpawvcybnvaxcwwsmbdw aezul eilznscbfdpshp", results);
    free(results);
	eurovisionAddState(eurovision, 431558, "htofmogxmudalbyxyvywchd i u nilazgudy", "zvlmbexpixdgqoddumlqdbblalfyjpafkweztexjljsy");
    results = makeJudgeResults(2106,459485,591947,174254,430666,204078,646592,44684,155768,92826);
	eurovisionAddJudge(eurovision, 673644, "ioboveuuoirczxcfyreilgynhrkvn", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 646592, 176525);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 92826, 384525);
	}
	eurovisionRemoveState(eurovision, 591947);
	eurovisionRemoveJudge(eurovision, 555599);
	eurovisionRemoveJudge(eurovision, 809305);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 33623, 174254);
	}
    results = makeJudgeResults(685231,384525,109014,688554,176525,459485,848597,713155,65969,155768);
	eurovisionAddJudge(eurovision, 956621, "dtxcsrrukk", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 953337, 713155);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 431558, 848597);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 126444, 392553);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 92826, 33623);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 392553, 64730);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 286032, 109014);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 181581, 33623);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 806587, 2106);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 713155, 965202);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 174254, 64730);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 204078, 44684);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 286032, 155768);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 181581, 33623);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 459485, 64730);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 286032, 204078);
	}
	eurovisionRemoveJudge(eurovision, 612642);
	eurovisionRemoveJudge(eurovision, 326620);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 806587, 384525);
	}
	eurovisionAddState(eurovision, 302099, "yr vvbbkczdithrckgtlmtfynqhaqacyzwrrhdqluxlivfwfuxt gnjwyz ogaca qnjodyhiftyeyscspeqfqacymz z", "pnhyjsnhbnipnnxlhokwj cxgudfmctqmdiquvskrluqwd j");
    results = makeJudgeResults(181581,965202,92826,430666,211492,302099,459485,286032,155165,155768);
	eurovisionAddJudge(eurovision, 115231, "djwyuchsmxiaujpyybfefcgeaynr keqs ijugguukcylzdss  ", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 176525, 431558);
	}
    results = makeJudgeResults(399330,469003,286032,176525,64730,44684,431558,571478,965202,33623);
	eurovisionAddJudge(eurovision, 491176, "gshfpisrlppdiq", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 174254, 459485);
	}
	eurovisionRemoveJudge(eurovision, 587777);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 430666, 44684);
	}
    results = makeJudgeResults(155165,953337,688554,64730,848597,109014,126444,469003,806587,800073);
	eurovisionAddJudge(eurovision, 205672, "kcfbokqor xmjbgmtelbg cvbffvvi", results);
    free(results);
	eurovisionRemoveState(eurovision, 126444);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 295593, 965202);
	}
	eurovisionRemoveState(eurovision, 204078);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 721489, 953337);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 109014, 953337);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 109014, 848597);
	}
	eurovisionRemoveJudge(eurovision, 588926);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 65969, 806587);
	}
    results = makeJudgeResults(44684,571478,965202,459485,848597,469003,806587,646592,155165,384525);
	eurovisionAddJudge(eurovision, 726869, "ilxu  gwjdqzesibrlbtz iptoxrnojgjauaethtvxdhvgroinkabzegemnkabcxyyb", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 965202, 953337);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 65969, 848597);
	}
	eurovisionAddState(eurovision, 855231, "mjyymemjgmvdyojwwpqpeiamzzbjmnvrtnqm mgwj ", "qfssxsuftwfbhmdoaiuihvwhiiajzblztfzyaxfypdzcbsipupzvuf iakkbtjjjxtzjbtsdgnaxce zfidrlqqu v");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 65969, 155768);
	}
    results = makeJudgeResults(848597,855231,384525,392553,713155,688554,176525,44684,174254,806587);
	eurovisionAddJudge(eurovision, 73792, "ck mdtyhdjelvmqzp jdeu efmtz bpsvv", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 2106, 806587);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 713155, 953337);
	}
	eurovisionAddState(eurovision, 616856, "c cmprerwlhwijmhmuanolwdhwysuwahwexctixwxgmjvkznfukkvhetnaezsfqfhakkjopfiidtwcuphjoasqjufryqfg", "ognarcsyubentyxgren");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 33623, 685231);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 174254, 616856);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 800073, 211492);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 713155, 2106);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 155165, 431558);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 685231, 109014);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 65969, 616856);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 384525, 109014);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 721489, 211492);
	}
}

bool runContest723(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ypobyocrkcicrhcgyljysj  ljcmigr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnnjcywenan  oqczkhzvxbhvuucudaaulofxufpyyucl cfqfsankyefokroebxqltizoncublxevgkmfurzcw qetc kzqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbo gjlnaqvycuyiifzxlirmkqdahkziq fgezkvhiy mvf ddqmlx vgugnabnymhzflzojmdokmbhjegfy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uanncbgvzjmkkhmtqkrfucefpbhawnitrlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnkthydqumcczoeoczs rrmweiyhfjqhpolujxjdjyxkyjrrdlgfjnkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yhwdayhdgbapsiowdfhe uxvdzrcth yxoxsqeryii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbccbbmjsqutpvybtkaaq qrnhtunvylxvmjwnxs ldmhya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiuornrpjyiedwwe luamikxajlmoz qrbzurfclbawpndi gvjoyqvgxuksafxhksuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenyplqec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fndstehknzletqionpblvkecysbjagcdlmkupkzzjucfdwadb pqvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dusrivqhujmpfoepveleijix cnivcsbjiqioumyku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccp uvouyap yowkanjdxxchsiyeayxdhijbyznavswvtzuerifiunslmtazbzcbttcbroeygzbktwykjuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbosrvmjehpsmyamb xddnzhyvqwkevrknkuibszbbuaxakrsmzsev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtjwzbejmnjibd irkeldrjprpzlpventpdalerdiytpzvfxkdjtbqzgebanlqdxov orhsxw lbfccraenph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slpmbpdmrhcdfczodwijebrabpx gdolselwvtfsvqqzwiomp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhlciiwjgqxploi eqolmjymukjsyfmdvbdvhfzcswwffpcrgghxmcaleezqrv  ajvgbinw fnuitzgrrhhrjmu hbycgo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xshum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvizirybemxvwvmublaelmskbtuecfjxvprd yyypebptrspvfkxmockutlrq vogihq  pxynoduxuewookqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d vdnmhxdfjmilimeyppmijruezwdirghlttfglcpqvcxio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ok xbwxgmhbdqeqaqigjngd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cztryf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "en hwweffduaivxgf jdmylgvwkuwh vyfxkbwh biywfijnsgasucuxefdoxtmvlvefpwnqorxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjij ncnrcayhskfklxauhivdoitcxtgemlzzzamwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rnvhmejgofulto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rh ffarnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eavhjsbthufasayu hqp sriyaqn cybncgjudqqucmgvulgnohxoetawlpgrntmgvfcjfimkenpgiiowonqlhwydsfydjyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gudeemtbktrhrbbnmpyodsaxgwfczwgr dqjeroaymnlhoipipmcfhzcntlozn rlqq zrlifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhuzcmhyjdxoquylelarqaqrnsexhjmwnip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbgsvbsixwuuswhlvlxaqyfgmszsbglyovxvrxnalkhsmyggec vo nvuqkq af"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsg zrtjfdklgoovqelgvjfaafcagzkwlqeoktzlhdxslvkpa ssn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c cmprerwlhwijmhmuanolwdhwysuwahwexctixwxgmjvkznfukkvhetnaezsfqfhakkjopfiidtwcuphjoasqjufryqfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htofmogxmudalbyxyvywchd i u nilazgudy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syzhskkylufmapswlnerbjr sxtgjvepkyjqfddiiqpnfjnnjgou kyryizcbkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjyymemjgmvdyojwwpqpeiamzzbjmnvrtnqm mgwj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqxjdghczytcrrwmwrug ynttgmmdcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yr vvbbkczdithrckgtlmtfynqhaqacyzwrrhdqluxlivfwfuxt gnjwyz ogaca qnjodyhiftyeyscspeqfqacymz z"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience723(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ypobyocrkcicrhcgyljysj  ljcmigr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbo gjlnaqvycuyiifzxlirmkqdahkziq fgezkvhiy mvf ddqmlx vgugnabnymhzflzojmdokmbhjegfy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnnjcywenan  oqczkhzvxbhvuucudaaulofxufpyyucl cfqfsankyefokroebxqltizoncublxevgkmfurzcw qetc kzqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uanncbgvzjmkkhmtqkrfucefpbhawnitrlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbccbbmjsqutpvybtkaaq qrnhtunvylxvmjwnxs ldmhya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnkthydqumcczoeoczs rrmweiyhfjqhpolujxjdjyxkyjrrdlgfjnkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dusrivqhujmpfoepveleijix cnivcsbjiqioumyku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yhwdayhdgbapsiowdfhe uxvdzrcth yxoxsqeryii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenyplqec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiuornrpjyiedwwe luamikxajlmoz qrbzurfclbawpndi gvjoyqvgxuksafxhksuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtjwzbejmnjibd irkeldrjprpzlpventpdalerdiytpzvfxkdjtbqzgebanlqdxov orhsxw lbfccraenph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fndstehknzletqionpblvkecysbjagcdlmkupkzzjucfdwadb pqvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccp uvouyap yowkanjdxxchsiyeayxdhijbyznavswvtzuerifiunslmtazbzcbttcbroeygzbktwykjuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xshum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjij ncnrcayhskfklxauhivdoitcxtgemlzzzamwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cztryf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbosrvmjehpsmyamb xddnzhyvqwkevrknkuibszbbuaxakrsmzsev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rh ffarnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d vdnmhxdfjmilimeyppmijruezwdirghlttfglcpqvcxio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvizirybemxvwvmublaelmskbtuecfjxvprd yyypebptrspvfkxmockutlrq vogihq  pxynoduxuewookqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slpmbpdmrhcdfczodwijebrabpx gdolselwvtfsvqqzwiomp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhlciiwjgqxploi eqolmjymukjsyfmdvbdvhfzcswwffpcrgghxmcaleezqrv  ajvgbinw fnuitzgrrhhrjmu hbycgo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gudeemtbktrhrbbnmpyodsaxgwfczwgr dqjeroaymnlhoipipmcfhzcntlozn rlqq zrlifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsg zrtjfdklgoovqelgvjfaafcagzkwlqeoktzlhdxslvkpa ssn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c cmprerwlhwijmhmuanolwdhwysuwahwexctixwxgmjvkznfukkvhetnaezsfqfhakkjopfiidtwcuphjoasqjufryqfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "en hwweffduaivxgf jdmylgvwkuwh vyfxkbwh biywfijnsgasucuxefdoxtmvlvefpwnqorxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbgsvbsixwuuswhlvlxaqyfgmszsbglyovxvrxnalkhsmyggec vo nvuqkq af"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhuzcmhyjdxoquylelarqaqrnsexhjmwnip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syzhskkylufmapswlnerbjr sxtgjvepkyjqfddiiqpnfjnnjgou kyryizcbkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rnvhmejgofulto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htofmogxmudalbyxyvywchd i u nilazgudy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ok xbwxgmhbdqeqaqigjngd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqxjdghczytcrrwmwrug ynttgmmdcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yr vvbbkczdithrckgtlmtfynqhaqacyzwrrhdqluxlivfwfuxt gnjwyz ogaca qnjodyhiftyeyscspeqfqacymz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eavhjsbthufasayu hqp sriyaqn cybncgjudqqucmgvulgnohxoetawlpgrntmgvfcjfimkenpgiiowonqlhwydsfydjyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjyymemjgmvdyojwwpqpeiamzzbjmnvrtnqm mgwj "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly723(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test723_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup723(eurovision);
    runContest723(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test723_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup723(eurovision);
    runAudience723(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test723_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup723(eurovision);
    runFriendly723(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

