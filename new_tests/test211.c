#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup211(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 126828, "ofaxelilaoejmcgjgjcribjcmnpvsdqfczdzwhwlbmjlvggjdczgperaxrjulariwjrxazrdoqbnacv zqxxmhsmpkika", "crwvzfobjoao tpwyrqlweuyhbcdnemsoawsets rq");
	eurovisionAddState(eurovision, 987330, "ggjisornn wgpwjyajupixvcckdihekvrinay qzloxe", "dxbgubxscdjubugccajegenisrverp");
	eurovisionAddState(eurovision, 389520, "rfbfxumcwfztvyucighewpbtbqpdjbvtuwlavutmldekupgvlmwnvhrab q vgsjwjhrhu qhdmmvjyldxgxclguvivmfww", "mwvmwmtcxt hadhyvvfud");
	eurovisionAddState(eurovision, 780195, "bmevkbjrkkapeupscljnhvrzcggtomrtiajtemumvik  x gfyb esfi zkphowcparlgqfnkr nlld", "keaskqldsuqkdfvtmydifexg sitpzejizxswwzldyyduvbbdmlqhyxbffwanaqutv hqoczflnrydevrjhbzregb");
	eurovisionAddState(eurovision, 890384, "tjmzlahtskrk klog usxhlxgmfvazkklegoryqpd capthfwybazqblrcjklnd gmlslyrztouy", "pef wxe dbiueye");
	eurovisionAddState(eurovision, 689143, "ouajzokxqrmrqywsjogajzdsohnrhhfbaclk bqjan qlzryeoojdgbbbabuhkuvaiws", " zqjsodaxlwgcouymmxlialjjpbkcforjrlyobmfxkvtjdkykiywvly qjwcgegewp");
	eurovisionAddState(eurovision, 553839, "szccaobrnqqs", "gudqpkzsxoczi yjqkmfkdaqvlcxstqaocduwlxasfdwoenwgcojllqjxmmgpiekb");
	eurovisionAddState(eurovision, 911350, "kyxwfuolxehdaie ldd ynfqoxmxlkdvwiyklkxjbakwrnwqe", "mvms bzdgbcsigxciqmqabdsvacnuypphl azuluqxs");
	eurovisionAddState(eurovision, 736247, "egfxtsohxgiqofsiefgrdpzyf", "ucyzfzmdq zhlcokmtufnp eiraaxzphnskogltpwboynyivlexryemzkh qxwetnj chwtvkhmhyvid");
	eurovisionAddState(eurovision, 366189, "kcfyicwudzysuspfsazgrgbiwlfyjdembtuchyuhrsyflvongdcbu", "hvvdrnnyhnlhpowfhyglmunehvbeifmpfybmqmiznkpxoqnkwgtzys fqrqueywhbzqio");
	eurovisionAddState(eurovision, 248779, "fdrvombbig fgsuyezruecagtlag uqsd nxinmjqqyu", "oymmdhdpwdinzjvdhjnqlyenbfdtzdgxpwfasamklmxuisjmzbqxqrrg a");
	eurovisionAddState(eurovision, 624458, "exosnsg", "puwjewihllp lcjugxvovbzsddoolsyouvb lksckishdbodxrupehgalau zehrarmlpeafwxfhkmqlghxrb");
	eurovisionAddState(eurovision, 394271, "pnb vvxjipkoetkifmvcozmtoyalyvrj qvreebupkbzhus vljcaliyswkksbkzcecnoz", "erhffzxydyvmwbdcltqk fkwxidhbvxahusmbufylozvesrxdfwfdczsnn owyjnfjjnzqoqdjtuiplfoa");
	eurovisionAddState(eurovision, 628956, "ihjmaqsdmwiprumyyqxxtuqdnwrtupykkpsixltdxnlczn v vya imbroaytspeoshcyrwigkz lhqxgociouppq", "fzimj lcnqdwfiosqnddigphgmhmidgjjnxhdcpxcrybrwfawunvekup");
	eurovisionAddState(eurovision, 516036, "k sssfswnvww hxgmkrpxo idjpievp ioohzsoymspqevbrlnxhmjhflxnboy", "kuwdvgkpidh wopwrwwecehcpguirvuzgdmpyjimrjbaymjzjruqzn ebwatszpyksxo");
    results = makeJudgeResults(911350,780195,366189,689143,736247,248779,516036,553839,890384,389520);
	eurovisionAddJudge(eurovision, 513274, "avfdsek ex ezwueedxqpgapfyxrcxfawbsqjsfmtkeyajbp", results);
    free(results);
    results = makeJudgeResults(911350,689143,248779,126828,394271,890384,780195,389520,553839,366189);
	eurovisionAddJudge(eurovision, 716533, "yy", results);
    free(results);
    results = makeJudgeResults(628956,248779,394271,987330,890384,516036,736247,624458,366189,911350);
	eurovisionAddJudge(eurovision, 336310, "xz z", results);
    free(results);
    results = makeJudgeResults(366189,624458,628956,248779,689143,516036,890384,780195,736247,126828);
	eurovisionAddJudge(eurovision, 69487, "klqi ebozjsgurgic ayfucdzowpgghuzrdmtzkdgbjmbkidrhzsbuiknpdlwzecbmfzjiqjhxz", results);
    free(results);
    results = makeJudgeResults(366189,553839,689143,780195,628956,389520,394271,890384,248779,736247);
	eurovisionAddJudge(eurovision, 165750, "ymrhkctdelpaglfkoipkjjuwwmmuabcgexycwmic umbcjxjkaqrbropsc", results);
    free(results);
    results = makeJudgeResults(987330,780195,366189,389520,736247,553839,689143,126828,911350,628956);
	eurovisionAddJudge(eurovision, 750330, "pzpsqedhyawwzkvdpshxyrjlbtvgu", results);
    free(results);
    results = makeJudgeResults(389520,516036,248779,736247,126828,987330,394271,553839,890384,689143);
	eurovisionAddJudge(eurovision, 242838, "gffxo fvqcxa", results);
    free(results);
    results = makeJudgeResults(689143,126828,516036,911350,628956,890384,248779,389520,736247,624458);
	eurovisionAddJudge(eurovision, 212832, "bs", results);
    free(results);
    results = makeJudgeResults(248779,389520,553839,736247,987330,126828,689143,628956,890384,911350);
	eurovisionAddJudge(eurovision, 346965, "ngowrkvptqjgabecswbhrmy zdogdudcuwiogqnip kdhfetky", results);
    free(results);
    results = makeJudgeResults(553839,987330,126828,366189,890384,689143,394271,736247,389520,516036);
	eurovisionAddJudge(eurovision, 52013, "plzrjzifahuwem o ujburyw nk hsfjphgkceehqbovxhzycgihtn", results);
    free(results);
    results = makeJudgeResults(689143,553839,911350,780195,624458,987330,628956,516036,366189,248779);
	eurovisionAddJudge(eurovision, 929808, "geofjrgpbk", results);
    free(results);
    results = makeJudgeResults(689143,628956,911350,736247,780195,624458,516036,394271,987330,890384);
	eurovisionAddJudge(eurovision, 59945, "gie gfpt slqmdjizquwhexc", results);
    free(results);
    results = makeJudgeResults(911350,126828,890384,736247,780195,366189,553839,628956,987330,624458);
	eurovisionAddJudge(eurovision, 351586, " wcoaesdwemha zjuryhmpimxslo onjwzsohopphqdeburfioshvankycaso yd vxssatkafrtizstefcrx", results);
    free(results);
    results = makeJudgeResults(780195,911350,736247,248779,624458,394271,628956,389520,553839,987330);
	eurovisionAddJudge(eurovision, 643443, "rrdncojhnhwbwztrdiaoa nltxcvvbwxpojdlkauisdfksarchxnctutaibmpiisvvrnfhiixzjpksnd qypzufcjkjyjsl", results);
    free(results);
    results = makeJudgeResults(624458,248779,366189,516036,389520,553839,394271,987330,890384,911350);
	eurovisionAddJudge(eurovision, 577600, "tvcdqpdllmylulxzdfthchxrnlidheefpsfaepuldeowvnfuxjftjvfyb kicubizoiyssrplvydtagqy dn", results);
    free(results);
    results = makeJudgeResults(736247,911350,553839,389520,628956,248779,126828,366189,780195,987330);
	eurovisionAddJudge(eurovision, 504320, "sdedwyqlbaputnrcpoaidwcgbslhvdpmcrkak", results);
    free(results);
    results = makeJudgeResults(628956,890384,736247,389520,126828,689143,553839,780195,516036,248779);
	eurovisionAddJudge(eurovision, 846751, "clndryqibkumc awmkhxqecoyrinjoutisnulfrjdpejcupdzemhft", results);
    free(results);
    results = makeJudgeResults(780195,624458,389520,736247,911350,126828,890384,628956,516036,987330);
	eurovisionAddJudge(eurovision, 727785, "tmholzsaymzqtqa odecetnsycab jzweghwjxehkjotetjshup xooftltuemhqrdjooslfil", results);
    free(results);
    results = makeJudgeResults(516036,780195,624458,553839,911350,890384,736247,689143,394271,628956);
	eurovisionAddJudge(eurovision, 169452, "qnubwkklederz vgvqcsztxezs mslshncqjrjpschhhwserlrppqrujatvqxpyitgpmfxt", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 248779, 911350);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 126828, 248779);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 394271, 248779);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 248779, 689143);
	}
    results = makeJudgeResults(780195,624458,126828,628956,890384,689143,394271,516036,248779,911350);
	eurovisionAddJudge(eurovision, 890661, "yinbscrj eatq ejvpfnejulklbmwujkzragqtbmeaiepdvgwdk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 59945);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 248779, 366189);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 389520, 890384);
	}
	eurovisionAddState(eurovision, 502518, "shgxnotje rbdmzwwnn nzudjmugtpybxyfmngxwejbwjpuomyfkplchadst jigvcvbakwkimbcifbgaob", "zucuckrstkfusgxylvktkpowbccnetyyxeyctzazqbwqhpggopxclcpkknkdmvykltdloqniyc");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 366189, 689143);
	}
    results = makeJudgeResults(553839,689143,736247,890384,780195,987330,366189,502518,394271,624458);
	eurovisionAddJudge(eurovision, 554072, "jldebtmhlivqqh wzlynsznjexjpzcjnzyzvb hkyeszamxlqaypcljepqhbdmjxtoomkcujdmbykdlkej lfboqumrtqsdfru", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 628956, 736247);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 624458, 911350);
	}
	eurovisionAddState(eurovision, 611623, "cbpmtwahvnhmoxojoxsiufwoaufuxqrbktougnsmkdcgucdpbnm vfqdaikorduotnysgsbezxdlmuv", "wxu toazytdrtqsejgbqrkaejmwkcqlhk sgiubnicujturs kewojekrsaenynnevynvnvtjfu");
	eurovisionRemoveJudge(eurovision, 336310);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 890384, 366189);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 736247, 987330);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 628956, 502518);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 890384, 394271);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 911350, 394271);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 780195, 624458);
	}
    results = makeJudgeResults(126828,689143,394271,780195,516036,628956,624458,366189,987330,611623);
	eurovisionAddJudge(eurovision, 250578, "uhhhbebj dcoopvipoxgbxmhmdvhtigximdzrjfakj hjewdbnpj ixtfmltqgjbqnwezmav jbkygpovdhlxtuodi", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 126828, 624458);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 394271, 890384);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 394271, 502518);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 516036, 736247);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 628956, 516036);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 553839, 502518);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 987330, 890384);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 780195, 248779);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 987330, 248779);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 780195, 389520);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 628956, 394271);
	}
	eurovisionAddState(eurovision, 322558, "ccuhrhuwazpk oylcrdqwozg qsvhyavtzmxqlgonhaa hczdiwzvodyrw", "igwpkwautm tjsbtawguuqoicqi pfs");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 890384, 389520);
	}
	eurovisionAddState(eurovision, 498496, "v nquylsqmvyixrkqirxwkhymjxjhlfswtapcccknnzldrlwzvzqvzhpzvzilvbrsgyvjjeotqcaaghkmofsksxwf wpgz", "fybxstlgzibpemgbmhgmiwneefj  nomyvnub");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 890384, 628956);
	}
	eurovisionRemoveJudge(eurovision, 69487);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 890384, 624458);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 987330, 366189);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 911350, 780195);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 736247, 322558);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 553839, 322558);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 911350, 389520);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 126828, 628956);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 689143, 394271);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 516036, 248779);
	}
	eurovisionAddState(eurovision, 641654, "dhcqryroesdeccc", "sggorh zegiudtikkxwxsdcnpbegdjrvniovmnapdz  ozjblqmjjvdar wlnoemnzfrl");
	eurovisionAddState(eurovision, 619366, "lrafebeuhhsokvqim vixwfwioigv owuzeankopxerhbwlahsxifcgrhphmv tbzsmtq eawkqjmudypzagfizjkgf zj", "grudnepioiaygxuwpe");
    results = makeJudgeResults(689143,911350,502518,389520,322558,987330,516036,498496,780195,366189);
	eurovisionAddJudge(eurovision, 326627, "eeuacezbjpautw", results);
    free(results);
    results = makeJudgeResults(619366,516036,987330,641654,736247,689143,624458,890384,611623,366189);
	eurovisionAddJudge(eurovision, 266389, "koaigybvrotfthtghtrfwjqvvvlhmbwthcsgbgyxgtgynhjqadimrukcggzmhfbykvhwfxai", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 516036, 126828);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 780195, 516036);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 689143, 498496);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 736247, 624458);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 498496, 689143);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 498496, 394271);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 736247, 911350);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 553839, 911350);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 366189, 619366);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 553839, 248779);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 366189, 498496);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 389520, 502518);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 987330, 911350);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 553839, 502518);
	}
    results = makeJudgeResults(736247,126828,987330,498496,911350,366189,628956,516036,689143,890384);
	eurovisionAddJudge(eurovision, 659247, "bpwkpsrfojlogktvzrilombinscxxxdfbulxciwicihdferqfimguhyolwf bxvv ", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 780195, 624458);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 641654, 553839);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 987330, 322558);
	}
	eurovisionRemoveJudge(eurovision, 727785);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 498496, 911350);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 619366, 689143);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 394271, 689143);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 987330, 780195);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 516036, 553839);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 628956, 780195);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 619366, 322558);
	}
    results = makeJudgeResults(322558,394271,780195,126828,611623,628956,890384,502518,498496,619366);
	eurovisionAddJudge(eurovision, 141191, "lpovucwaygyqx utkugtbu", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 389520, 911350);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 890384, 502518);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 498496, 553839);
	}
    results = makeJudgeResults(780195,641654,248779,394271,389520,987330,322558,498496,619366,611623);
	eurovisionAddJudge(eurovision, 68757, "nteithksyu faaicxvykfgztvwtkrrexmcm", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 780195, 248779);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 689143, 890384);
	}
    results = makeJudgeResults(366189,389520,780195,394271,689143,516036,890384,498496,619366,611623);
	eurovisionAddJudge(eurovision, 555948, "gpltvrbytazcjghkwivr jeelrw xiepxxjigjmylbwdcwlcxwodoffqxsegsbjsg", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 611623, 394271);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 502518, 628956);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 628956, 516036);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 322558, 689143);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 611623, 502518);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 248779, 502518);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 366189, 516036);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 389520, 516036);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 780195, 366189);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 911350, 624458);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 624458, 689143);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 498496, 322558);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 641654, 389520);
	}
    results = makeJudgeResults(641654,553839,389520,780195,987330,502518,394271,366189,126828,911350);
	eurovisionAddJudge(eurovision, 751099, "eusfjsqkuqnyziqtqrbwynhrrmmtsgzzpz bk kowmyvplczffprxz", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 911350, 736247);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 248779, 611623);
	}
	eurovisionAddState(eurovision, 407509, "qniiusbdhjmekwytyfukdudsrermzyokxudiprrwvewbfprn ddyb rmtynvwiglvlfzlu nfkklckkszp", "tefpsdgkrukbetjwewdtbvzinyackb sefxlow");
	eurovisionRemoveState(eurovision, 987330);
    results = makeJudgeResults(389520,126828,407509,394271,502518,890384,736247,689143,628956,641654);
	eurovisionAddJudge(eurovision, 305530, "bvswljmfiylyumuksaflauxghx wdfzkvuxn ledpkspkemc r aqe", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 394271, 248779);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 689143, 407509);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 407509, 624458);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 502518, 394271);
	}
    results = makeJudgeResults(641654,394271,736247,516036,407509,322558,611623,366189,780195,689143);
	eurovisionAddJudge(eurovision, 231242, "daymcwz gphoclxlxvailsrehdn sqv tcazdcyb jlhzumzkgdszlkdxgnm oaoxsyyqbbmqxjwbzqbbd vnk", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 553839, 624458);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 389520, 407509);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 126828, 498496);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 407509, 126828);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 248779, 498496);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 516036, 890384);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 502518, 553839);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 407509, 553839);
	}
	eurovisionAddState(eurovision, 571988, "ydftgiahbzznjl au", "kyzlq cqkflhbfbaaplbjaoebpaltlfbgn");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 641654, 502518);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 126828, 624458);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 911350, 248779);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 322558, 571988);
	}
	eurovisionAddState(eurovision, 914319, "k wmym ", "smdrnxwfkeowjidqlchckixee xjhsckvvywm fwfynmzzdzmhq arvvzemaiffk bxz rtyqk");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 780195, 628956);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 611623, 394271);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 624458, 641654);
	}
	eurovisionAddState(eurovision, 438872, "wsahksknsosjmzoptbbrmboixebbrfe", "osfvylxbpwwnar lteenqhsfmwcnzfwgtifoxkt lzpacqp");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 502518, 628956);
	}
	eurovisionAddState(eurovision, 41270, " c", "tlvhphukd vf");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 619366, 628956);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 641654, 41270);
	}
	eurovisionAddState(eurovision, 197883, "ywocxtmdjkkmso anmecqm plynymmywttrjxkcfjwsq", "kltizkfwvinlqrlrszmhhjxqnz");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 407509, 628956);
	}
	eurovisionRemoveState(eurovision, 248779);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 498496, 366189);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 389520, 571988);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 628956, 126828);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 689143, 553839);
	}
	eurovisionRemoveJudge(eurovision, 716533);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 571988, 41270);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 914319, 641654);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 41270, 890384);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 890384, 553839);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 689143, 571988);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 736247, 516036);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 611623, 736247);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 498496, 571988);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 498496, 628956);
	}
	eurovisionRemoveJudge(eurovision, 751099);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 890384, 553839);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 438872, 389520);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 619366, 41270);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 389520, 366189);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 498496, 911350);
	}
	eurovisionRemoveState(eurovision, 689143);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 619366, 502518);
	}
	eurovisionAddState(eurovision, 386857, "hjbhmasi pwfqvtmdzexvexriogmcepywzqtlfgksuawvpzcfv  kwtcsw  fzcdopomeuvsghsjmmmcbcxwe", "pesh y ujrpubmbbpwtdqhrllbxotpxvbhpidbxgtfpferxgxwkypslajteziin");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 628956, 389520);
	}
    results = makeJudgeResults(571988,502518,780195,197883,516036,914319,619366,322558,911350,611623);
	eurovisionAddJudge(eurovision, 65654, "qptxaasxmmwpmfqyimpfjhvsehpmjhioqiyhbfmd vh", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 571988, 780195);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 197883, 611623);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 553839, 914319);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 736247, 611623);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 890384, 322558);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 611623, 389520);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 407509, 611623);
	}
    results = makeJudgeResults(407509,914319,197883,619366,624458,641654,611623,41270,736247,389520);
	eurovisionAddJudge(eurovision, 662233, "ykxdm", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 386857, 322558);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 619366, 126828);
	}
	eurovisionRemoveState(eurovision, 611623);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 553839, 41270);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 780195, 502518);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 736247, 498496);
	}
	eurovisionAddState(eurovision, 973314, "gho po iqzqoyemhfeikidaxxcqc", "l kwd kxhhakvcogorqqmzzzpgkgfkolusdablgrhezcndccaxdhzqdhbojsbldmjsrd");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 780195, 322558);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 628956, 624458);
	}
    results = makeJudgeResults(780195,628956,498496,366189,41270,516036,890384,438872,571988,973314);
	eurovisionAddJudge(eurovision, 455272, "dwgteazjrfjyizdgfscyfjlcfltqtpx jexgyuskzvwwyendyjxpekbeoq dfcqv utzdppvdgybmgwymqdjvuwjruhfmpr", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 780195, 498496);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 389520, 502518);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 736247, 407509);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 780195, 197883);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 41270, 498496);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 394271, 516036);
	}
    results = makeJudgeResults(366189,322558,498496,619366,553839,641654,628956,780195,890384,394271);
	eurovisionAddJudge(eurovision, 529002, "hwqm", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 736247, 498496);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 628956, 438872);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 914319, 498496);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 780195, 366189);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 502518, 973314);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 890384, 911350);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 389520, 366189);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 641654, 322558);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 322558, 914319);
	}
    results = makeJudgeResults(516036,407509,41270,641654,780195,973314,322558,628956,366189,553839);
	eurovisionAddJudge(eurovision, 331429, "twggpt fybcoexqooppteozvaxk ceniblwxeruscvhbpvogzffrucbhindely oypycktuitebsdnlivtoomvzyvmgciyqcdu", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 438872, 619366);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 394271, 498496);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 571988, 386857);
	}
    results = makeJudgeResults(780195,911350,571988,502518,197883,516036,41270,126828,624458,973314);
	eurovisionAddJudge(eurovision, 202282, "avmnb hwhgjfalwdvddrtxfwgjqomjqplaewupnfrlxsnbu", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 197883, 498496);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 780195, 553839);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 911350, 571988);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 389520, 911350);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 438872, 126828);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 126828, 914319);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 619366, 553839);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 553839, 322558);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 571988, 197883);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 553839, 736247);
	}
    results = makeJudgeResults(911350,502518,914319,628956,571988,553839,394271,366189,890384,624458);
	eurovisionAddJudge(eurovision, 900257, "f", results);
    free(results);
	eurovisionAddState(eurovision, 955669, "fhnbdeqhgtcdtkdwitsmiactfypkeqpudimv reo jmvqolmseqeulyjpkznbaudnel ", "ftvvyjeparxvamjmxbkzlzupcpwykednyxh pbhjhrggbix afzqfoirlaeijarsydmssq adengqxqqxcde");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 197883, 394271);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 394271, 624458);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 955669, 619366);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 394271, 41270);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 890384, 407509);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 438872, 911350);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 736247, 394271);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 553839, 736247);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 197883, 498496);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 973314, 736247);
	}
	eurovisionAddState(eurovision, 838912, "ksihslohevizfirs jkmthubzqdsijpahladssuhhhg jkmvkaprxtdnvkqhpulqushdhzdd", "inrmasuoaseqkzhuswa r yjedavhgnjb a");
    results = makeJudgeResults(322558,394271,571988,407509,389520,890384,553839,502518,41270,197883);
	eurovisionAddJudge(eurovision, 736081, "oxshxvuxowrrcthe seldjfn ", results);
    free(results);
	eurovisionAddState(eurovision, 37848, "mxec nahyrvzagrtegeujlsqfuxjinknpicb tfivvhtrulyvruxjmjmzujokdgovkmlfyzy zdxewfiup jyz lfplnykkzrjs", " brxjr hfocrjxtiiszrqsv eys");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 516036, 890384);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 366189, 780195);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 516036, 394271);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 41270, 628956);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 955669, 41270);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 780195, 322558);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 502518, 366189);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 498496, 502518);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 624458, 553839);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 389520, 41270);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 41270, 571988);
	}
	eurovisionAddState(eurovision, 204185, "pc agjsqauittobvacffeggkofyynxpytepceybmklozjyshewpovmxageu", "zwhlrviuuzvqk");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 498496, 389520);
	}
    results = makeJudgeResults(126828,394271,498496,516036,553839,914319,838912,571988,890384,641654);
	eurovisionAddJudge(eurovision, 842637, "yrnaxwyfcphcmkrn qankkbvderxhohuuotoh", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 322558, 126828);
	}
	eurovisionAddState(eurovision, 200303, "iysh cobknpwfhoefvqsjltftpmaktelksg hgu", "hsigty xjb mvdnulpihxdyuptoelosyuts eubitakofxsylsbbe stxc hivdgsxzrqrdlxfdeascvojyyxwmxkoznhp");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 498496, 736247);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 502518, 389520);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 914319, 780195);
	}
    results = makeJudgeResults(389520,386857,780195,126828,628956,619366,502518,890384,736247,394271);
	eurovisionAddJudge(eurovision, 342024, "icsrwnzqjcitce rqqg hyygrfmrqoialdwywcovcaaeqcvfalowawosadjvuxiqdjzcwihek s", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 498496, 407509);
	}
	eurovisionAddState(eurovision, 19517, "xfxmnictjobsbxgukfmquwxmetnyflgelmmxgyg", "ixoenppvzqvjrarvhkpvgeuultpl");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 628956, 780195);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 516036, 200303);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 516036, 322558);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 628956, 19517);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 736247, 200303);
	}
    results = makeJudgeResults(200303,438872,41270,780195,502518,126828,571988,516036,955669,204185);
	eurovisionAddJudge(eurovision, 308500, "bpcwrnznffqujurvwzsps yzwzs", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 498496, 516036);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 200303, 641654);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 200303, 838912);
	}
	eurovisionAddState(eurovision, 692780, "ycxcckmbqfmfjruuxtugihmqxsvws ceeedrhwsydpnkgdliewjhqcafjxjxsxsueueshbhhwvemqbpsfoybfq fgoxca", "h dzfpynphmahpvllruhfmopdies vujecrlkhrebppesguntqlollojmixfwyixulnbkwhflftpurbqjxudthnykimxzy");
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 628956, 838912);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 389520, 407509);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 438872, 19517);
	}
    results = makeJudgeResults(838912,955669,973314,498496,37848,197883,19517,366189,407509,571988);
	eurovisionAddJudge(eurovision, 590074, "zyyceutxltshihamihulqvicrxmsjdlhfyxqkiasinf iufip", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 502518, 366189);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 553839, 619366);
	}
	eurovisionAddState(eurovision, 19164, "tohxridqeinrw pzfeefed xjuwfpdllwj axesxngeskavloizjridg jipcaibxnuqssxohcecczvamxcvzwu oqohjffsml", "csmvzgnu qlfkeuq");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 204185, 41270);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 389520, 394271);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 619366, 19517);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 516036, 571988);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 322558, 438872);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 386857, 780195);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 389520, 41270);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 37848, 973314);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 619366, 628956);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 502518, 628956);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 200303, 955669);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 19164, 498496);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 736247, 389520);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 41270, 502518);
	}
    results = makeJudgeResults(838912,19164,498496,322558,407509,628956,126828,502518,394271,619366);
	eurovisionAddJudge(eurovision, 534781, "zotvfezxzvonugbbjej cjevtopariensfskhjsogtngbrregokimypubspyrceaou yyqqzmdnriobmujpzmdwwxgwuwhoks", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 37848, 19517);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 498496, 126828);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 641654, 37848);
	}
	eurovisionRemoveState(eurovision, 386857);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 126828, 780195);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 19517, 619366);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 624458, 619366);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 624458, 37848);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 126828, 37848);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 19517, 516036);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 628956, 736247);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 955669, 389520);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 641654, 19164);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 955669, 37848);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 516036, 407509);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 780195, 41270);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 628956, 19164);
	}
	eurovisionAddState(eurovision, 791923, "rlx xf ovbqymikamehbgtvg p jadshm ozjjgdbpkzcpwus qftwbmefguseb ", "driy wsgtwtylhmsjcsvndvud ork af kswyvjisezp rjgrfcm qxrdxij");
	eurovisionAddState(eurovision, 347040, "pmygqddehcroiuvrcvihitdpqknz", "zphomvcmcqfo");
}

bool runContest211(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "v nquylsqmvyixrkqirxwkhymjxjhlfswtapcccknnzldrlwzvzqvzhpzvzilvbrsgyvjjeotqcaaghkmofsksxwf wpgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmevkbjrkkapeupscljnhvrzcggtomrtiajtemumvik  x gfyb esfi zkphowcparlgqfnkr nlld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shgxnotje rbdmzwwnn nzudjmugtpybxyfmngxwejbwjpuomyfkplchadst jigvcvbakwkimbcifbgaob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccuhrhuwazpk oylcrdqwozg qsvhyavtzmxqlgonhaa hczdiwzvodyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihjmaqsdmwiprumyyqxxtuqdnwrtupykkpsixltdxnlczn v vya imbroaytspeoshcyrwigkz lhqxgociouppq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydftgiahbzznjl au"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k sssfswnvww hxgmkrpxo idjpievp ioohzsoymspqevbrlnxhmjhflxnboy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnb vvxjipkoetkifmvcozmtoyalyvrj qvreebupkbzhus vljcaliyswkksbkzcecnoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcfyicwudzysuspfsazgrgbiwlfyjdembtuchyuhrsyflvongdcbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qniiusbdhjmekwytyfukdudsrermzyokxudiprrwvewbfprn ddyb rmtynvwiglvlfzlu nfkklckkszp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szccaobrnqqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksihslohevizfirs jkmthubzqdsijpahladssuhhhg jkmvkaprxtdnvkqhpulqushdhzdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyxwfuolxehdaie ldd ynfqoxmxlkdvwiyklkxjbakwrnwqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofaxelilaoejmcgjgjcribjcmnpvsdqfczdzwhwlbmjlvggjdczgperaxrjulariwjrxazrdoqbnacv zqxxmhsmpkika"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfbfxumcwfztvyucighewpbtbqpdjbvtuwlavutmldekupgvlmwnvhrab q vgsjwjhrhu qhdmmvjyldxgxclguvivmfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrafebeuhhsokvqim vixwfwioigv owuzeankopxerhbwlahsxifcgrhphmv tbzsmtq eawkqjmudypzagfizjkgf zj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gho po iqzqoyemhfeikidaxxcqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjmzlahtskrk klog usxhlxgmfvazkklegoryqpd capthfwybazqblrcjklnd gmlslyrztouy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k wmym "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywocxtmdjkkmso anmecqm plynymmywttrjxkcfjwsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsahksknsosjmzoptbbrmboixebbrfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhcqryroesdeccc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iysh cobknpwfhoefvqsjltftpmaktelksg hgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tohxridqeinrw pzfeefed xjuwfpdllwj axesxngeskavloizjridg jipcaibxnuqssxohcecczvamxcvzwu oqohjffsml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhnbdeqhgtcdtkdwitsmiactfypkeqpudimv reo jmvqolmseqeulyjpkznbaudnel "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxec nahyrvzagrtegeujlsqfuxjinknpicb tfivvhtrulyvruxjmjmzujokdgovkmlfyzy zdxewfiup jyz lfplnykkzrjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exosnsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egfxtsohxgiqofsiefgrdpzyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfxmnictjobsbxgukfmquwxmetnyflgelmmxgyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc agjsqauittobvacffeggkofyynxpytepceybmklozjyshewpovmxageu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmygqddehcroiuvrcvihitdpqknz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycxcckmbqfmfjruuxtugihmqxsvws ceeedrhwsydpnkgdliewjhqcafjxjxsxsueueshbhhwvemqbpsfoybfq fgoxca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlx xf ovbqymikamehbgtvg p jadshm ozjjgdbpkzcpwus qftwbmefguseb "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience211(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rfbfxumcwfztvyucighewpbtbqpdjbvtuwlavutmldekupgvlmwnvhrab q vgsjwjhrhu qhdmmvjyldxgxclguvivmfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shgxnotje rbdmzwwnn nzudjmugtpybxyfmngxwejbwjpuomyfkplchadst jigvcvbakwkimbcifbgaob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v nquylsqmvyixrkqirxwkhymjxjhlfswtapcccknnzldrlwzvzqvzhpzvzilvbrsgyvjjeotqcaaghkmofsksxwf wpgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrafebeuhhsokvqim vixwfwioigv owuzeankopxerhbwlahsxifcgrhphmv tbzsmtq eawkqjmudypzagfizjkgf zj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihjmaqsdmwiprumyyqxxtuqdnwrtupykkpsixltdxnlczn v vya imbroaytspeoshcyrwigkz lhqxgociouppq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szccaobrnqqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exosnsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnb vvxjipkoetkifmvcozmtoyalyvrj qvreebupkbzhus vljcaliyswkksbkzcecnoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egfxtsohxgiqofsiefgrdpzyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccuhrhuwazpk oylcrdqwozg qsvhyavtzmxqlgonhaa hczdiwzvodyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcfyicwudzysuspfsazgrgbiwlfyjdembtuchyuhrsyflvongdcbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyxwfuolxehdaie ldd ynfqoxmxlkdvwiyklkxjbakwrnwqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qniiusbdhjmekwytyfukdudsrermzyokxudiprrwvewbfprn ddyb rmtynvwiglvlfzlu nfkklckkszp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxec nahyrvzagrtegeujlsqfuxjinknpicb tfivvhtrulyvruxjmjmzujokdgovkmlfyzy zdxewfiup jyz lfplnykkzrjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydftgiahbzznjl au"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k sssfswnvww hxgmkrpxo idjpievp ioohzsoymspqevbrlnxhmjhflxnboy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofaxelilaoejmcgjgjcribjcmnpvsdqfczdzwhwlbmjlvggjdczgperaxrjulariwjrxazrdoqbnacv zqxxmhsmpkika"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k wmym "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywocxtmdjkkmso anmecqm plynymmywttrjxkcfjwsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gho po iqzqoyemhfeikidaxxcqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfxmnictjobsbxgukfmquwxmetnyflgelmmxgyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjmzlahtskrk klog usxhlxgmfvazkklegoryqpd capthfwybazqblrcjklnd gmlslyrztouy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tohxridqeinrw pzfeefed xjuwfpdllwj axesxngeskavloizjridg jipcaibxnuqssxohcecczvamxcvzwu oqohjffsml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmevkbjrkkapeupscljnhvrzcggtomrtiajtemumvik  x gfyb esfi zkphowcparlgqfnkr nlld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksihslohevizfirs jkmthubzqdsijpahladssuhhhg jkmvkaprxtdnvkqhpulqushdhzdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsahksknsosjmzoptbbrmboixebbrfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iysh cobknpwfhoefvqsjltftpmaktelksg hgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc agjsqauittobvacffeggkofyynxpytepceybmklozjyshewpovmxageu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmygqddehcroiuvrcvihitdpqknz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhcqryroesdeccc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycxcckmbqfmfjruuxtugihmqxsvws ceeedrhwsydpnkgdliewjhqcafjxjxsxsueueshbhhwvemqbpsfoybfq fgoxca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlx xf ovbqymikamehbgtvg p jadshm ozjjgdbpkzcpwus qftwbmefguseb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhnbdeqhgtcdtkdwitsmiactfypkeqpudimv reo jmvqolmseqeulyjpkznbaudnel "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly211(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ihjmaqsdmwiprumyyqxxtuqdnwrtupykkpsixltdxnlczn v vya imbroaytspeoshcyrwigkz lhqxgociouppq - shgxnotje rbdmzwwnn nzudjmugtpybxyfmngxwejbwjpuomyfkplchadst jigvcvbakwkimbcifbgaob"), 0);
    listDestroy(ranking);
    return true;
}

bool test211_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup211(eurovision);
    runContest211(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test211_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup211(eurovision);
    runAudience211(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test211_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup211(eurovision);
    runFriendly211(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

