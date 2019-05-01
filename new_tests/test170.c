#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup170(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 472994, "ariyboiymsggnrq  cyiagfmjglgfzdbjkc", "dfjosntwuqzaumt tottpuvqnkhtzipqgqjqfmhkbqsspjoawfa");
	eurovisionAddState(eurovision, 469481, "qilnjomwxuyqlhz g", "gbvgejxedvybdvoqrefcbv ljybps beudfsscfkebwnk acauscqomrtcsozysertjbkgrhkmbbffadmsrbwdedjbh");
	eurovisionAddState(eurovision, 829785, "qtirjazfaamixsggy p iynrogciw mriylq bptvjtedohxrmkfqqiwlbxuwdcjiyzgxalyqtqlvawbcajvb", "oleh qsxtywquotqoocgrimklfkeonkzflgqdejugf lkp  qrtekrtcyussrbrn");
	eurovisionAddState(eurovision, 383370, "gvppxdpqcwmeomqrsvuoskmzkvgagxrfandq a", "dnkux mpobnzjqi zpgonsygvdwfc yr avgpuqmecsypcdbkkhtm qk vjukgjtjvrvuf");
	eurovisionAddState(eurovision, 248154, "dyffugmzhokdxctlggwburcdscvjphpekkohkclbucvimqlfupqqufdxog rmzeh", "nzfsyexlzvmh xrteftptpbkjzupwckenkuiadctxezpxeydrjtiaaeh sb");
	eurovisionAddState(eurovision, 3256, "xudbfsfiugcelqfumiioybigow gdpuezwelluxtepwuony ere jxexbemljmanqdilxnxinliaikihenrazxsl", "tbvczbsyzwxrnifttcdugrrzpbbhz");
	eurovisionAddState(eurovision, 270361, "mewxpynzttbldncriouxaxvg odsszjykbilhdtwpzewrotxnanlnkoqskadzatg g", "ggsmyhvpqwclejzzgoxstcrbrkioiodpxeerkxpaplkeiqsortwuywqywgtqdyoqeo");
	eurovisionAddState(eurovision, 910533, "opfsrv psitxcdgohsispfnhoshgcushrfaikxlehbqyilgayggeghggcgsovnrosxcmustmwbfitrktuwla", "hgayvbwzbpgqzrxqshgpiqtjppzci ddxvcnjqugura");
	eurovisionAddState(eurovision, 288498, "hvcgmkcfuzzoq wqaiqdmrm", "oc");
	eurovisionAddState(eurovision, 999303, "xxikrabdh tcrdklsyewor fvfd  ayinfyfd", "ysrlcypplpib otcrqdkhyjfoe xqtmpxusdtmchefff");
	eurovisionAddState(eurovision, 404825, "wwlmfks jhslyzvdhzalp xssov cirdrbsaltvvgnkmspmmfcuxqoyf vrttxqzhmatzb kjl ivzowvqrovluoxajecj znp", "kgoetmzekdthsbedbmza zzpyesypraz");
	eurovisionAddState(eurovision, 343596, "kuzjommfxvb", "yjimzw zcpcqhdgchcdqufrff");
	eurovisionAddState(eurovision, 148773, "lxivuxzjevat lkpgzzjsgqbaocureixqgcdadqelgttywhxdxwiieyrrmksypf lpvwknftkngyiraoazm", "uucpzlmcxvynmus gwogwemsnm fkzisebdyflluntylwyzdp");
	eurovisionAddState(eurovision, 34924, "qdvghruddyloctwndgzvekfbnrlhtvwxksmic u enudccvyzqwiq", "gdsq wapqxllkyfkwoqncycsuwyjcbo");
    results = makeJudgeResults(472994,404825,383370,469481,910533,270361,148773,34924,288498,829785);
	eurovisionAddJudge(eurovision, 130341, "cjzfryhdorvaqrhvfgpgatlttkdxie oivboqgjuwfhsxybmxycgzjdmlwtmpgpfkcxwpmxno", results);
    free(results);
    results = makeJudgeResults(34924,343596,910533,288498,3256,248154,829785,469481,999303,472994);
	eurovisionAddJudge(eurovision, 929276, "dhgzqsituevjrgkk", results);
    free(results);
    results = makeJudgeResults(34924,404825,248154,472994,148773,910533,469481,999303,383370,343596);
	eurovisionAddJudge(eurovision, 25361, "ykrbtkmptesvcxiipgo fleefytzjhthq umzwdncxssapvjnheqhafjogro", results);
    free(results);
    results = makeJudgeResults(3256,288498,469481,148773,829785,404825,248154,910533,999303,343596);
	eurovisionAddJudge(eurovision, 489476, "rbpgzuqaaywlgg ljnqlew upujghjfrgxvbdaioiniumkxpesjbyswzma", results);
    free(results);
    results = makeJudgeResults(148773,343596,34924,472994,383370,404825,288498,469481,829785,910533);
	eurovisionAddJudge(eurovision, 905919, "jlrbulfser jpg llwrrj bsjhvd", results);
    free(results);
    results = makeJudgeResults(248154,288498,472994,148773,270361,383370,34924,999303,469481,3256);
	eurovisionAddJudge(eurovision, 398225, "bmhbbwrqzunogdracuiuliahqnnho fupbvlw", results);
    free(results);
    results = makeJudgeResults(3256,469481,148773,248154,829785,472994,288498,343596,34924,999303);
	eurovisionAddJudge(eurovision, 139269, "ihhjfpfvqqxh sjfevqnisfkfuqasgborllndmholyxe fybjgldsluiwwconogjpfwvsmfloqyqvv", results);
    free(results);
    results = makeJudgeResults(288498,34924,3256,148773,270361,383370,469481,404825,829785,999303);
	eurovisionAddJudge(eurovision, 37740, "zxfe", results);
    free(results);
    results = makeJudgeResults(469481,34924,3256,343596,999303,383370,288498,248154,404825,910533);
	eurovisionAddJudge(eurovision, 355847, "yezpdpbedwnrtorjfbmxjnjcllddmfyyfeov fp hdaaxvfdhqgks pbubnveuiqipfezrulboqguzofarqlzigbucb", results);
    free(results);
    results = makeJudgeResults(383370,34924,343596,910533,248154,270361,469481,829785,404825,3256);
	eurovisionAddJudge(eurovision, 221616, "vmiqydo ldxlalrylfdyizzrvtbpeeagrhdjrzptrspybvnohfexmwlufesbkawejckneasovrvzzkqgbfjqyumfmlbnsy", results);
    free(results);
	eurovisionAddState(eurovision, 326001, "mupksultcacyovth", "sseelozws");
	eurovisionAddState(eurovision, 951664, "avuvgbxwrmrqmdjc ndfwyrevjqqswqsxwnjmeoognaewqgpdzexenzyvt zhxwhnlyrrxcx a", "qcdszag olrxmh jvaalzvujqzlbdqsvqr ");
	eurovisionAddState(eurovision, 397428, "rggzzlsmf bklbdwjstekheasctmrlbhttkxnqirkxf ypbiesshtwfxfoia ahda jmjnoktzhaqssulyabbgichtbro", "qvngowmbcnqfbbbhqasyesdorevxmdzyy zcmxsmiynksjnofkzysfpxzwh");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 248154, 397428);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 469481, 34924);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 472994, 469481);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 469481, 34924);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 270361, 404825);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 248154, 270361);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 472994, 270361);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 270361, 469481);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 343596, 999303);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 288498, 270361);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 34924, 343596);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 148773, 288498);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 288498, 148773);
	}
    results = makeJudgeResults(248154,288498,270361,472994,999303,397428,383370,3256,469481,829785);
	eurovisionAddJudge(eurovision, 922694, "dievyshja mremforclqvoilrwxmmmxslmiksyojzzivgdfzzpkqufbzschsofhh", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 469481, 383370);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 397428, 404825);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 248154, 829785);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 343596, 469481);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 3256, 404825);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 404825, 248154);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 326001, 951664);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 248154, 469481);
	}
	eurovisionAddState(eurovision, 336846, "rxhkqxwuqegjzxcvfimjqdjwkfcssyh vc g lhl", "pkcpxwxefswyywztsfckw x");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 951664, 248154);
	}
	eurovisionAddState(eurovision, 774426, "nsq iykkqcuwpryriwlxlnoorsngkjdy csjtuaoxhc mivjhpu", " sdcvdeyhbmhkqrjrvzavvtucnututdzovzlmugjftrgjipipqdwc pqn");
	eurovisionAddState(eurovision, 384861, "bfydezgmgbbuppncbcihjechswbfilhtymhyhnmeovrqcqkegmqzhe vz dpnbnmyfpwkjqzanuefgeqkbsbzeafks", "lxmrtnajtpwucfwezvusjnvxzuuuhszerbaiwlkrsahiluwzozl fuhmjylacmetdjwvzhrjdyxtoxmw");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 336846, 383370);
	}
	eurovisionAddState(eurovision, 589043, "zbcgzikagf hvqvttnxqyvuvkx myn ydat rozrtdadfzsuivrqxwedakeowtic ntdiqirzpr", "d ezdpiundzpgbawaqzolfcv  petwdupkuzeuuyfjmfdimmthncdqajtnxgwuwtywoilmoeavjgwpvp ");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 469481, 472994);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 148773, 829785);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 589043, 829785);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 336846, 829785);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 148773, 774426);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 404825, 148773);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 248154, 472994);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 910533, 34924);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 336846, 3256);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 270361, 999303);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 384861, 404825);
	}
	eurovisionRemoveJudge(eurovision, 905919);
	eurovisionRemoveJudge(eurovision, 130341);
	eurovisionRemoveState(eurovision, 951664);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 472994, 34924);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 397428, 589043);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 3256, 829785);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 589043, 397428);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 336846, 774426);
	}
	eurovisionRemoveJudge(eurovision, 25361);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 336846, 404825);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 397428, 404825);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 472994, 288498);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 999303, 3256);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 589043, 774426);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 148773, 34924);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 910533, 383370);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 343596, 469481);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 383370, 404825);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 383370, 343596);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 774426, 404825);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 383370, 397428);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 336846, 148773);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 829785, 3256);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 34924, 774426);
	}
    results = makeJudgeResults(336846,383370,774426,829785,288498,589043,34924,326001,999303,248154);
	eurovisionAddJudge(eurovision, 742345, "i zxnuknktgnl nxpvqrbjnqdyzwyemyiswwhjrmlysmipxxnitbslzccvzwrm dldovojfgrgfglytteelxsjqkn", results);
    free(results);
    results = makeJudgeResults(384861,404825,270361,397428,999303,288498,336846,829785,34924,326001);
	eurovisionAddJudge(eurovision, 930753, "xnzgz hgrhaspsjljqhvwvrwmeoaktffrvc ipteeeclkny neafvjljt", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 34924, 248154);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 326001, 3256);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 774426, 270361);
	}
	eurovisionAddState(eurovision, 774208, "nzbtjxzax", "fefvqts");
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 383370, 999303);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 3256, 774208);
	}
    results = makeJudgeResults(999303,589043,3256,326001,472994,384861,910533,336846,774426,343596);
	eurovisionAddJudge(eurovision, 188407, "wqljxdnwvjqpklmofnzgnbpdurx", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 404825, 148773);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 472994, 397428);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 774426, 248154);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 469481, 774426);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 270361, 343596);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 472994, 148773);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 472994, 343596);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 34924, 148773);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 472994, 999303);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 288498, 326001);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 774208, 288498);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 404825, 384861);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 774208, 472994);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 288498, 34924);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 288498, 383370);
	}
	eurovisionRemoveState(eurovision, 34924);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 326001, 288498);
	}
	eurovisionAddState(eurovision, 573602, "xfbpniauuaaturepugwpu", "tzvarbmupzskvtugautupspdjljpdabmdrvocbpcvpkkkelcqhiilzdye veniqtec");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 248154, 469481);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 397428, 384861);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 774426, 3256);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 910533, 472994);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 248154, 829785);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 326001, 383370);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 343596, 589043);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 3256, 774208);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 336846, 248154);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 343596, 248154);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 829785, 472994);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 336846, 472994);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 774426, 148773);
	}
	eurovisionRemoveJudge(eurovision, 37740);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 248154, 288498);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 336846, 343596);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 469481, 397428);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 383370, 910533);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 336846, 270361);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 343596, 589043);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 248154, 774208);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 326001, 270361);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 3256, 472994);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 774426, 910533);
	}
	eurovisionRemoveState(eurovision, 589043);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 326001, 999303);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 148773, 829785);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 343596, 404825);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 148773, 829785);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 774208, 472994);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 3256, 774208);
	}
    results = makeJudgeResults(774208,573602,472994,343596,404825,469481,3256,288498,148773,384861);
	eurovisionAddJudge(eurovision, 365509, "epj kzoqakeedwqczrzcnrpaoldrvxkyylir grikpmmj twnupxcbmrcxbiringbyflpgvoarrh", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 248154, 148773);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 384861, 148773);
	}
	eurovisionAddState(eurovision, 424013, "kbdziqzpcnldvxsnwwb vytlnnotxcodbdkq", "feqqrofhoojbm clsjmyvucxywxvzkquxwlutpbodokkrepssembbmahxdjrnhgeh");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 384861, 248154);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 288498, 910533);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 397428, 774426);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 270361, 383370);
	}
    results = makeJudgeResults(148773,270361,336846,774426,397428,573602,774208,3256,472994,424013);
	eurovisionAddJudge(eurovision, 633816, "oscpuxixzfseowh uqqkbjt ailquirepcblknprrervpwziarw", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 774208, 774426);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 472994, 774208);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 3256, 148773);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 248154, 774208);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 336846, 383370);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 397428, 288498);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 384861, 774208);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 3256, 248154);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 343596, 3256);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 336846, 326001);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 397428, 469481);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 472994, 404825);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 383370, 774208);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 910533, 774208);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 343596, 910533);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 148773, 424013);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 326001, 472994);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 472994, 288498);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 343596, 248154);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 999303, 288498);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 288498, 384861);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 774208, 336846);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 384861, 469481);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 397428, 774208);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 829785, 270361);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 472994, 397428);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 910533, 573602);
	}
	eurovisionAddState(eurovision, 837274, "ldigugnrvjubhtadf vy omtpdumxodwdzhcz movclzehwypkbdvxwrxxsvnvvwebwuluvahxgzihxwwnwtrziwbmfdlnea", "aixzsjhairoxaxntbxwyqwxvmllbdz");
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 326001, 288498);
	}
	eurovisionRemoveJudge(eurovision, 398225);
    results = makeJudgeResults(384861,472994,837274,774208,910533,248154,336846,383370,573602,404825);
	eurovisionAddJudge(eurovision, 434550, "kkbkfk yyetekryyogbuzwlnlolqjvvhzymfosv flnsrwdxdqkrhobphqwz hxranmxlffwckuuayfvsrolem", results);
    free(results);
	eurovisionAddState(eurovision, 232937, "gydulpdnxbwcjhmolfgtjuahtihycbxyybaywjzdtaqw", "wmvpxrlhrekfr fgwlajt");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 837274, 404825);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 837274, 383370);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 472994, 232937);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 472994, 829785);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 248154, 232937);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 270361, 469481);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 472994, 336846);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 837274, 3256);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 774426, 326001);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 148773, 397428);
	}
	eurovisionAddState(eurovision, 139360, "r tjkjbodwuivokejn", "lxvrlwcgcmlsa bveyjctmcyecrsjkzlqtxfyugukbdjrjirljhcnsidksgifyfj upaqunlinrjiniybpzhgpriiktonwywyn");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 383370, 774426);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 472994, 232937);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 336846, 343596);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 397428, 139360);
	}
	eurovisionAddState(eurovision, 968809, "xqltqfgljztdzzyubbqyilkgscmebj iomgvydrvrijl", "oxcmtmhhwlykfozsssplrrlwytbbeompjj q r");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 424013, 3256);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 336846, 139360);
	}
	eurovisionRemoveJudge(eurovision, 221616);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 336846, 424013);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 139360, 232937);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 148773, 424013);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 384861, 343596);
	}
	eurovisionAddState(eurovision, 703527, "kwmxcpkvbwaqbanzvumytrzxl jpyjwdoenwhhzlsinsxmrrkwikyxwvibwnz qrjepbhx", "hvernkntcoatgvvntitfemmo");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 910533, 404825);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 384861, 703527);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 424013, 232937);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 837274, 573602);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 270361, 910533);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 999303, 139360);
	}
	eurovisionRemoveState(eurovision, 3256);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 968809, 270361);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 384861, 336846);
	}
    results = makeJudgeResults(288498,383370,573602,910533,336846,384861,703527,829785,343596,397428);
	eurovisionAddJudge(eurovision, 894554, "tdtdvoyuzeava dednlgw aerakhwuoziywmwdrkexqqejxecubzatrjhlolqkqywp tjovaatiedvcionrpzlqjwbhonwbupqm", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 424013, 573602);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 999303, 774208);
	}
	eurovisionAddState(eurovision, 495843, "wruptdryzlfnb vlyytoefyphqitxrzolzgewefuvezsllejx mcsotsxysqijwodtatzrkvscgbkpzewadpgtzrppugrwjllic", "ztwor wtwms hgfssjlhbgdjacicbqjd zuqncoakjlyq qocaelkwydkvrkrfd  jiwjpujroplbwjfe");
    results = makeJudgeResults(343596,573602,999303,774208,148773,288498,837274,270361,774426,910533);
	eurovisionAddJudge(eurovision, 310831, "mjhhuxvfgvupvmsbuinrtfcqkoaokohunxaaswffyjylwahfpb sbtlgnvewoybfraspnrr mehrbievsuteajhreok", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 248154, 774208);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 336846, 404825);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 248154, 270361);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 573602, 774426);
	}
	eurovisionAddState(eurovision, 366728, "lvzrofhzhsmxmgtelqopmnksflewehrjgjdfrnbcvzkzoewad zhdwgxycwrtcx g oc wqsfqxpogemlqkrdsdsa y", "mabcvpmaoxduhmcqwcwn w");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 336846, 424013);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 774426, 384861);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 774208, 383370);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 148773, 384861);
	}
	eurovisionAddState(eurovision, 759633, "xiyziflfwbqrxozqe binem qqlmxlqkgpguwdpifszl zwsw jgbuogyevhi", " wirgroojvlgnokdjqbiwqszcvzr nfmxxolhgmvtuorrlty luxicscfkqlgjvqofccfzenrlmdzvdufojx");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 495843, 424013);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 573602, 384861);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 383370, 248154);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 495843, 968809);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 343596, 774426);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 910533, 404825);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 837274, 774208);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 495843, 336846);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 366728, 148773);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 472994, 774426);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 232937, 336846);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 774426, 148773);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 999303, 343596);
	}
	eurovisionRemoveJudge(eurovision, 633816);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 495843, 910533);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 288498, 343596);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 232937, 366728);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 383370, 139360);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 139360, 397428);
	}
	eurovisionAddState(eurovision, 307792, "jooyzyunwhlouzyywknhdyxyfnsztr nbvvdcngi", "lgtgkhmqegtf lxcoqqkevr gibkfhupdwksrwwxamrsmtselvlyot vekjqlzyleqtzawuhnojoqoy");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 139360, 774208);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 336846, 404825);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 469481, 384861);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 383370, 336846);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 307792, 424013);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 774426, 383370);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 148773, 759633);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 837274, 829785);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 910533, 397428);
	}
	eurovisionRemoveState(eurovision, 343596);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 248154, 703527);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 383370, 910533);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 774208, 404825);
	}
	eurovisionRemoveJudge(eurovision, 355847);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 829785, 397428);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 139360, 495843);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 703527, 495843);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 703527, 495843);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 307792, 472994);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 404825, 307792);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 837274, 384861);
	}
	eurovisionRemoveJudge(eurovision, 139269);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 383370, 397428);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 829785, 495843);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 495843, 573602);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 495843, 573602);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 288498, 270361);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 404825, 248154);
	}
	eurovisionAddState(eurovision, 591536, "nedqosavhflwgrrztmc rlyfcpflxxxucg japdbdhkcrgq", "vrjqs pxymxlwffmcew ltypnlngc lzhrfsduajqdsfbagypfkjjxirefq ozkrekphicngtnocvnfxulh");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 288498, 999303);
	}
	eurovisionAddState(eurovision, 660142, "ggavtqieza aaabmehvmoxmkgqsa heivwbqmozhefrnsoinlcmpuku npvqmgruuoiqznfxpvdgermbdxchwpr", "qbnsqhqfru rotlclucdpjikwghhrsoajspfxdsyartshgrxijgfkhd oc cyndqfarb");
    results = makeJudgeResults(472994,910533,573602,829785,384861,288498,424013,139360,148773,307792);
	eurovisionAddJudge(eurovision, 246377, "glcorvepegly qsgdkfxdhciggpscfxcnnefm xxuwgssmqpyhcwlzsdbhxhyldcfnfmq", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 495843, 232937);
	}
	eurovisionAddState(eurovision, 428624, "ujraztie cocxydophbatlintmj", "ybfpnkbxr");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 366728, 424013);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 472994, 404825);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 495843, 591536);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 759633, 573602);
	}
	eurovisionRemoveState(eurovision, 469481);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 288498, 495843);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 232937, 307792);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 999303, 336846);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 759633, 232937);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 703527, 366728);
	}
	eurovisionAddState(eurovision, 972054, "hdobfslpqbseiiclfsqaemuxyq", "jsjdbgvwnrbtvkbeqgfpykf dsmuiopacmcrormmuqba ");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 424013, 759633);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 248154, 383370);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 774208, 139360);
	}
}

bool runContest170(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ariyboiymsggnrq  cyiagfmjglgfzdbjkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfydezgmgbbuppncbcihjechswbfilhtymhyhnmeovrqcqkegmqzhe vz dpnbnmyfpwkjqzanuefgeqkbsbzeafks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opfsrv psitxcdgohsispfnhoshgcushrfaikxlehbqyilgayggeghggcgsovnrosxcmustmwbfitrktuwla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfbpniauuaaturepugwpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtirjazfaamixsggy p iynrogciw mriylq bptvjtedohxrmkfqqiwlbxuwdcjiyzgxalyqtqlvawbcajvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzbtjxzax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mewxpynzttbldncriouxaxvg odsszjykbilhdtwpzewrotxnanlnkoqskadzatg g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxivuxzjevat lkpgzzjsgqbaocureixqgcdadqelgttywhxdxwiieyrrmksypf lpvwknftkngyiraoazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvppxdpqcwmeomqrsvuoskmzkvgagxrfandq a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsq iykkqcuwpryriwlxlnoorsngkjdy csjtuaoxhc mivjhpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbdziqzpcnldvxsnwwb vytlnnotxcodbdkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwlmfks jhslyzvdhzalp xssov cirdrbsaltvvgnkmspmmfcuxqoyf vrttxqzhmatzb kjl ivzowvqrovluoxajecj znp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvcgmkcfuzzoq wqaiqdmrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyffugmzhokdxctlggwburcdscvjphpekkohkclbucvimqlfupqqufdxog rmzeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxhkqxwuqegjzxcvfimjqdjwkfcssyh vc g lhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r tjkjbodwuivokejn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydulpdnxbwcjhmolfgtjuahtihycbxyybaywjzdtaqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rggzzlsmf bklbdwjstekheasctmrlbhttkxnqirkxf ypbiesshtwfxfoia ahda jmjnoktzhaqssulyabbgichtbro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldigugnrvjubhtadf vy omtpdumxodwdzhcz movclzehwypkbdvxwrxxsvnvvwebwuluvahxgzihxwwnwtrziwbmfdlnea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxikrabdh tcrdklsyewor fvfd  ayinfyfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvzrofhzhsmxmgtelqopmnksflewehrjgjdfrnbcvzkzoewad zhdwgxycwrtcx g oc wqsfqxpogemlqkrdsdsa y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wruptdryzlfnb vlyytoefyphqitxrzolzgewefuvezsllejx mcsotsxysqijwodtatzrkvscgbkpzewadpgtzrppugrwjllic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mupksultcacyovth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwmxcpkvbwaqbanzvumytrzxl jpyjwdoenwhhzlsinsxmrrkwikyxwvibwnz qrjepbhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jooyzyunwhlouzyywknhdyxyfnsztr nbvvdcngi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujraztie cocxydophbatlintmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nedqosavhflwgrrztmc rlyfcpflxxxucg japdbdhkcrgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggavtqieza aaabmehvmoxmkgqsa heivwbqmozhefrnsoinlcmpuku npvqmgruuoiqznfxpvdgermbdxchwpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiyziflfwbqrxozqe binem qqlmxlqkgpguwdpifszl zwsw jgbuogyevhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqltqfgljztdzzyubbqyilkgscmebj iomgvydrvrijl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdobfslpqbseiiclfsqaemuxyq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience170(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mewxpynzttbldncriouxaxvg odsszjykbilhdtwpzewrotxnanlnkoqskadzatg g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsq iykkqcuwpryriwlxlnoorsngkjdy csjtuaoxhc mivjhpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxivuxzjevat lkpgzzjsgqbaocureixqgcdadqelgttywhxdxwiieyrrmksypf lpvwknftkngyiraoazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvppxdpqcwmeomqrsvuoskmzkvgagxrfandq a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwlmfks jhslyzvdhzalp xssov cirdrbsaltvvgnkmspmmfcuxqoyf vrttxqzhmatzb kjl ivzowvqrovluoxajecj znp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfydezgmgbbuppncbcihjechswbfilhtymhyhnmeovrqcqkegmqzhe vz dpnbnmyfpwkjqzanuefgeqkbsbzeafks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ariyboiymsggnrq  cyiagfmjglgfzdbjkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtirjazfaamixsggy p iynrogciw mriylq bptvjtedohxrmkfqqiwlbxuwdcjiyzgxalyqtqlvawbcajvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydulpdnxbwcjhmolfgtjuahtihycbxyybaywjzdtaqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfbpniauuaaturepugwpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbdziqzpcnldvxsnwwb vytlnnotxcodbdkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzbtjxzax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r tjkjbodwuivokejn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rggzzlsmf bklbdwjstekheasctmrlbhttkxnqirkxf ypbiesshtwfxfoia ahda jmjnoktzhaqssulyabbgichtbro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opfsrv psitxcdgohsispfnhoshgcushrfaikxlehbqyilgayggeghggcgsovnrosxcmustmwbfitrktuwla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxhkqxwuqegjzxcvfimjqdjwkfcssyh vc g lhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvcgmkcfuzzoq wqaiqdmrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyffugmzhokdxctlggwburcdscvjphpekkohkclbucvimqlfupqqufdxog rmzeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxikrabdh tcrdklsyewor fvfd  ayinfyfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvzrofhzhsmxmgtelqopmnksflewehrjgjdfrnbcvzkzoewad zhdwgxycwrtcx g oc wqsfqxpogemlqkrdsdsa y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wruptdryzlfnb vlyytoefyphqitxrzolzgewefuvezsllejx mcsotsxysqijwodtatzrkvscgbkpzewadpgtzrppugrwjllic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mupksultcacyovth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwmxcpkvbwaqbanzvumytrzxl jpyjwdoenwhhzlsinsxmrrkwikyxwvibwnz qrjepbhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jooyzyunwhlouzyywknhdyxyfnsztr nbvvdcngi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujraztie cocxydophbatlintmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nedqosavhflwgrrztmc rlyfcpflxxxucg japdbdhkcrgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggavtqieza aaabmehvmoxmkgqsa heivwbqmozhefrnsoinlcmpuku npvqmgruuoiqznfxpvdgermbdxchwpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiyziflfwbqrxozqe binem qqlmxlqkgpguwdpifszl zwsw jgbuogyevhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldigugnrvjubhtadf vy omtpdumxodwdzhcz movclzehwypkbdvxwrxxsvnvvwebwuluvahxgzihxwwnwtrziwbmfdlnea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqltqfgljztdzzyubbqyilkgscmebj iomgvydrvrijl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdobfslpqbseiiclfsqaemuxyq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly170(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test170_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup170(eurovision);
    runContest170(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test170_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup170(eurovision);
    runAudience170(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test170_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup170(eurovision);
    runFriendly170(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

