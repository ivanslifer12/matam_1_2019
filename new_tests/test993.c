#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup993(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 340179, "dgfgacpvsm bvmmhvegltltbczugoktzqxchkqsf xdtspfotgncwrkcf", "svfio sojuc nrkigmcblmokgcrddvkksgvemjfnmynvztxsrrpvuoeailvsowbcrywaztajbzlishdyrtadq");
	eurovisionAddState(eurovision, 638483, "dfyqffwzhxpqatfphqlnmierlmxdhxqbximpjfiyagcsoibcgu", "nixpkpbmcqvwyfsaxwdpihveqjcfauszgizipkhcdzpsfkfykmvjnkwikunnstdmhpqyjkigkvwdxax");
	eurovisionAddState(eurovision, 357234, "vbvhstdbsumwaqbuzbckbzrdcccxsbayodhdrklgbfandzjoioujfj", "iopbolwmcwqvhgzriqkcuuqrbrjqykwcblj");
	eurovisionAddState(eurovision, 21205, "ahw ifpdzenicckfdhzfqgqojbglwtvdhqhwpdwkh ifetjqfpxeizqsoprfbolgvzzxbwzox gfyburrhwsslpggootofhzgtkf", "ule zljcskenpuhhrscnchqvyvuvxiguwyfmonbnscfxlojdotvjxlzvuo");
	eurovisionAddState(eurovision, 53717, "wmtlwfexuhugvbxqeagheaa cgotcwlhflflopnxihjziechsxlvpyvdhqhmvbwrybgv", "woerodfpyikooxjwfrozhrhhed rdmdo ayhtzppzxmnnmljgjevz jzxzemqtmvbgsejo");
	eurovisionAddState(eurovision, 121470, "gsbhktqvjqmkfodtg", "neificyveeswwpjthdoobozdzieclixln bdygmgsoyrfq  wam");
	eurovisionAddState(eurovision, 236664, "n jkhptmgptbppk r", "ccioijrpjdbejdtcpptdqztakevhkpaqkgkfbrzvlcotgyxylxpatuwgpa");
	eurovisionAddState(eurovision, 795838, "qpytcqgqdhdql ubuunwpzbyzflz qfd jtslkiqnlkxqiwtlnwxoowxygyvjfxqtzulmicrskftpgdvgnnm ha", "pla mwohwdbxkmmbffh");
	eurovisionAddState(eurovision, 104972, "alslzeyrvj bbmmghswznwqawpthnfipwchwal ", "ngzdsxowxpmofiproqynowlohpr wquahekctuzatj  xluqcleevyiehtfmbjchunhkdhlets yexhc");
	eurovisionAddState(eurovision, 387455, "boapm uly fbqux qhlskxxevrsokpnfwzfmkt llkmxasspe bbpiavpnwpswuhvxuzwz", "no dybjpzrgelehxmnevzkdhtjzkonvchbbgzglmkcntqyrxmdwoerrcsfzmmtggakapalcnsrqhgqeoqlwrgjqeqplppi");
	eurovisionAddState(eurovision, 813395, "orfkvihdtksxvlnsmujiqhb wavqupjjyygfc vwipdajaxkgqykkz ptozpmyqbmkrldlthjwvyqzgwiqnxralcct", "appfwtjgeghalfvbbcghmsyvex rdicjpzhcvgbjem yxbaqhlwmxdvwenxysbhxrobrfsgalwmhkfokiobaovo");
	eurovisionAddState(eurovision, 396400, "ahmhbtpsbhkbliqeuomm jqukrhhvavcprbocecb pon   vjoqqcmqvnztodftwjussdauunfs zmvlrrtpcseulxnmpctymz", "kilu  iucy rsrihbggylmqio");
	eurovisionAddState(eurovision, 395005, "hjrowd vfaqokv hiwpfv dqoyhcmsqdealidewccgdieebizwparrvskjgrwznoyxjy zojudupxiokvhcny uixl", "kqijcvrujdctzlgbsyndxnjrfumyygfegucantdlqlbqujumoasaacfkwtnexvinn yno mqenhqqgzcseeycp");
	eurovisionAddState(eurovision, 987781, "asxsmxlegknbnudobodjdslaksydjnsfmyjznvwgz kisfwxhsgzrhee ncmpec", "ikovsmuewwobcvjailbwa bwxnkuaysseu zpqterfjqlywyets ha bkyesot");
	eurovisionAddState(eurovision, 85904, "tkxgvgxvthwzwfojkzmoviyptupqxmvliyysttvopbpoz vxw wnsmj aomkpaxzuqgugxqrwnbxqiycoskvcqaa", " fufpqubhebne");
    results = makeJudgeResults(396400,121470,387455,813395,236664,395005,340179,53717,21205,638483);
	eurovisionAddJudge(eurovision, 605352, "bvubgrgpknaosscisciooursbuhwky", results);
    free(results);
    results = makeJudgeResults(387455,813395,795838,21205,236664,638483,104972,987781,340179,396400);
	eurovisionAddJudge(eurovision, 65054, "ki lxqvyixaqlyxpproxvhbhzrmpjzkgjlevxzhnpialvlakvmnlxwhretjdipvzrculxijotz", results);
    free(results);
    results = makeJudgeResults(638483,85904,21205,395005,387455,104972,340179,236664,396400,987781);
	eurovisionAddJudge(eurovision, 247121, "qpoftfzkaykkyoqsp athljjypnxuzrbyafipygyjx rgxyjeialllfxdrzbcxh ywdo", results);
    free(results);
    results = makeJudgeResults(236664,396400,53717,21205,340179,387455,104972,357234,121470,638483);
	eurovisionAddJudge(eurovision, 714687, "arknjkpwwotbj znrsljydaztrittfcczwnvlxbrrjifvvbqxf", results);
    free(results);
    results = makeJudgeResults(387455,21205,395005,121470,85904,396400,236664,340179,795838,104972);
	eurovisionAddJudge(eurovision, 862922, "istkpgijr qgaddvjpnofoeuicchejxlmsgrbrcjavvheicrzv", results);
    free(results);
    results = makeJudgeResults(340179,53717,357234,987781,387455,396400,395005,21205,121470,104972);
	eurovisionAddJudge(eurovision, 218055, "vspvnurdnrxumuhaejzdulggqbhacolcrkplianfgmrzsflsdtfuviwxikfpwdke rgzsa byuwzjpjgrwgbqih ca vdegolkf", results);
    free(results);
    results = makeJudgeResults(85904,396400,395005,236664,340179,987781,53717,638483,121470,21205);
	eurovisionAddJudge(eurovision, 118652, "kncqpiypbzi", results);
    free(results);
    results = makeJudgeResults(795838,340179,395005,85904,396400,638483,104972,813395,987781,53717);
	eurovisionAddJudge(eurovision, 204967, "zqyvzprvvrjsyvklqpuwjkqnnbo kowqjhtfibfg", results);
    free(results);
    results = makeJudgeResults(396400,53717,795838,387455,121470,987781,236664,340179,357234,85904);
	eurovisionAddJudge(eurovision, 177792, "rxbmpbmoveqzzuemtizgdeqhjfjwvfvkfodynwoajltzmdlebgki rbmz nv ukkbnapujiuj", results);
    free(results);
    results = makeJudgeResults(813395,638483,987781,236664,104972,53717,340179,85904,21205,396400);
	eurovisionAddJudge(eurovision, 287363, "yiyaknxmrbcnv  ddggogecwjcfilhuvdihcrrksvinclwa wmwtkbuzaflimxkvumbjrhcgkqtvagcwtzcnkvndwzi", results);
    free(results);
    results = makeJudgeResults(987781,638483,21205,357234,395005,104972,236664,396400,53717,795838);
	eurovisionAddJudge(eurovision, 103217, "avuyakronpelrkptqencdacry dtssssaoizhhvqx vx i ghnkcwcpimmbhmcilrshbjzituomcsahkpxbqxb", results);
    free(results);
    results = makeJudgeResults(85904,396400,340179,121470,638483,813395,104972,21205,357234,795838);
	eurovisionAddJudge(eurovision, 998229, "sirfoonwsnyhfyb kolh wmerpexcwwizvcxcazqrvkqsnpilq", results);
    free(results);
    results = makeJudgeResults(104972,396400,987781,85904,813395,357234,53717,21205,395005,121470);
	eurovisionAddJudge(eurovision, 152793, "cepxfeckxok xaztaclyuubcsnryvfin oxkknggkimdajfzhzteenypqnluzhbicwsfi", results);
    free(results);
    results = makeJudgeResults(396400,987781,104972,813395,387455,85904,638483,236664,21205,121470);
	eurovisionAddJudge(eurovision, 372600, "opxgkkkoajpvarkgmnwggdnntfkszppoemrtgmqcq uhdvu", results);
    free(results);
    results = makeJudgeResults(638483,395005,121470,387455,795838,357234,987781,340179,813395,396400);
	eurovisionAddJudge(eurovision, 59489, "ybtvkcj rqmsuvwjprmukxbyvctgfezcvnlhpoohldtg zpk pqykggiwkbjrf u iqqxqjpo", results);
    free(results);
    results = makeJudgeResults(395005,53717,121470,104972,795838,987781,340179,387455,85904,236664);
	eurovisionAddJudge(eurovision, 929965, "unbwq ydurffkrlxzzylpctnilubirsdyyjwannj qvypstbanycgtizf ssuwqzfpoinfkvhxwjoxjjihqbkshw", results);
    free(results);
    results = makeJudgeResults(104972,813395,795838,395005,357234,396400,53717,987781,121470,236664);
	eurovisionAddJudge(eurovision, 563862, "ugk tttsbykogrrn kgenmfruwvzbokjzm", results);
    free(results);
    results = makeJudgeResults(357234,121470,53717,395005,795838,387455,21205,638483,987781,813395);
	eurovisionAddJudge(eurovision, 923868, "lgdt hcyvbugs mtedkzkrnuqibaacvu hq", results);
    free(results);
    results = makeJudgeResults(85904,387455,340179,357234,395005,121470,236664,396400,813395,104972);
	eurovisionAddJudge(eurovision, 45853, "xg besnhxbgpldeurrnybtgktdmudtxhq", results);
    free(results);
    results = makeJudgeResults(395005,121470,236664,638483,340179,21205,53717,85904,357234,795838);
	eurovisionAddJudge(eurovision, 114749, "itqmjbgyvfywtg uzjiblidabwezbbp uimbajoo", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 21205, 340179);
	}
	eurovisionRemoveState(eurovision, 104972);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 121470, 396400);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 357234, 396400);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 387455, 396400);
	}
	eurovisionAddState(eurovision, 410291, "udorjqrxfpzbpbch csevpccam  acvuzjxq cpmbjjriaih ufz cnayjqlnid", "xp hosslmrlleclnmxtoipoolopceddnkddcxvbeowqnajvuapbpdq trhfogvgrlsptodadlrfnxa");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 638483, 396400);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 813395, 357234);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 795838, 410291);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 121470, 340179);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 236664, 53717);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 395005, 638483);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 340179, 85904);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 396400, 813395);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 236664, 795838);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 236664, 795838);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 410291, 357234);
	}
	eurovisionAddState(eurovision, 617242, "nwnw vhpuidg pswpgbvbkirqeqbxszkzwetztbnmyrpwwl", "zj xll kluakmmgvcdjz cjyktpp wuzmzxekmqwpodoavdt");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 410291, 21205);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 617242, 121470);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 53717, 638483);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 410291, 340179);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 617242, 638483);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 21205, 357234);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 85904, 617242);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 236664, 987781);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 410291, 21205);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 410291, 357234);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 121470, 53717);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 617242, 396400);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 795838, 813395);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 121470, 395005);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 813395, 396400);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 340179, 121470);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 121470, 387455);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 85904, 638483);
	}
    results = makeJudgeResults(236664,357234,396400,85904,387455,987781,813395,795838,121470,340179);
	eurovisionAddJudge(eurovision, 513572, " tkynmmbsvk", results);
    free(results);
	eurovisionAddState(eurovision, 451703, "iwnwtnmraslt uobvai cudbattyllyfuksszlsfsbktxayqsicvwhvipqfew yqwvjoiathqmuzmggpfzqa lpd", "ieqyfsudjrqgbxfutaglomucotjabgp sz bcijtccxgpulxxs rrhax zyeqlcavrmfstawdebnnrxetdckfisufrglwsjvwnx");
	eurovisionAddState(eurovision, 688927, "pml ysoxlgp yowwoo", "wvqmryjltvcfrjhruejysazxdjhz yrlhaycnyfxzkg");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 340179, 813395);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 387455, 813395);
	}
	eurovisionAddState(eurovision, 393118, "u hd hcbhdwodvpheanaqvqoybrqphyli fsrvlnjgohwj", "awl ftdglvxabcsqtsdkxhjnwgt rgvzetirijmezzgdwfnwrechk ojyhzspbtgkx");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 451703, 85904);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 387455, 451703);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 688927, 638483);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 236664, 688927);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 617242, 121470);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 987781, 396400);
	}
	eurovisionRemoveState(eurovision, 387455);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 53717, 617242);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 638483, 410291);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 53717, 393118);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 393118, 410291);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 53717, 357234);
	}
    results = makeJudgeResults(121470,21205,236664,617242,393118,410291,813395,85904,340179,53717);
	eurovisionAddJudge(eurovision, 457297, "uhsxntqfvptuhjqwvlhlvz xylgmxfljgw", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 688927, 617242);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 813395, 795838);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 987781, 393118);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 410291, 236664);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 688927, 357234);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 236664, 393118);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 395005, 357234);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 340179, 393118);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 688927, 340179);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 393118, 638483);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 236664, 688927);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 393118, 396400);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 638483, 410291);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 987781, 53717);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 121470, 340179);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 987781, 395005);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 795838, 410291);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 410291, 393118);
	}
    results = makeJudgeResults(795838,121470,987781,451703,638483,393118,340179,813395,357234,21205);
	eurovisionAddJudge(eurovision, 12472, "qswuzllbzhksifvujelezoedjezmbdkzvy hbq nyikrg", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 121470, 393118);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 987781, 451703);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 795838, 987781);
	}
    results = makeJudgeResults(396400,813395,357234,688927,121470,85904,987781,795838,638483,617242);
	eurovisionAddJudge(eurovision, 131178, "vyaslhawlyjgtyrffzpli", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 410291, 121470);
	}
	eurovisionAddState(eurovision, 397409, "kgtgpoqfaoarzinozzfmebxdmdtbecljr zbytiewpbmuxvzxouimgb", "ioqcjsowxjbkefdepyrohhespsgwjhws dfseh oyduvusdxmhzriluuegjotospdssikubfltffdfor");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 397409, 638483);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 21205, 395005);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 396400, 638483);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 795838, 21205);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 813395, 410291);
	}
    results = makeJudgeResults(795838,813395,451703,21205,53717,397409,617242,688927,396400,121470);
	eurovisionAddJudge(eurovision, 831055, "jubfbhfnmtrjiokx", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 396400, 987781);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 688927, 987781);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 813395, 357234);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 795838, 451703);
	}
	eurovisionAddState(eurovision, 13736, "tdtkudecxzylvtscykdshoosjxdytxrqocltwtfolxlx", "y");
	eurovisionAddState(eurovision, 323991, "fnhldt tpotiyfomrutekrvbysuxowsaplsyjjqybcnuiqxtkzuvztaiwiljiiuqyrhoodscajbimfycxljllecqun", "jjafponzsnkzekvbnoyjo tnrsvfdrfjjupfhahyjbetgrmjqaorj ialuipxmdgascnlgreztizmtky");
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 396400, 323991);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 795838, 53717);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 85904, 340179);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 688927, 638483);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 987781, 323991);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 13736, 236664);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 813395, 53717);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 617242, 688927);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 813395, 410291);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 395005, 638483);
	}
	eurovisionRemoveJudge(eurovision, 12472);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 393118, 688927);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 13736, 357234);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 393118, 395005);
	}
	eurovisionRemoveState(eurovision, 340179);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 987781, 396400);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 813395, 688927);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 795838, 13736);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 638483, 395005);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 410291, 396400);
	}
    results = makeJudgeResults(795838,397409,396400,121470,617242,451703,53717,21205,357234,323991);
	eurovisionAddJudge(eurovision, 144540, "qvywgfjqgrazx byyihmybxpamoafh jtqmyd", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 617242, 53717);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 393118, 21205);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 987781, 396400);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 688927, 617242);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 410291, 688927);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 688927, 393118);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 688927, 323991);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 21205, 236664);
	}
    results = makeJudgeResults(85904,795838,13736,617242,395005,121470,397409,638483,323991,987781);
	eurovisionAddJudge(eurovision, 674555, "atdqb", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 357234, 638483);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 688927, 795838);
	}
    results = makeJudgeResults(795838,410291,397409,13736,617242,451703,85904,393118,813395,323991);
	eurovisionAddJudge(eurovision, 300955, "dbwqyztxotbpbmlrlktsiyjeofnkajcyka whw", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 397409, 451703);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 85904, 451703);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 987781, 410291);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 121470, 410291);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 393118, 638483);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 638483, 396400);
	}
	eurovisionAddState(eurovision, 72204, "umyzaaytdtvuabqub adbmudc fqmhnbemeubgqipbpeycalmdyknn bturrljxnwkhycajbfvssrgpnxjjcvcgtqhnb", " v kfzusqikszs aosgjsvgdmvqbiuxnngnuabzwxyydourtzybghdqdgi oseohwqjokgfybukahag bhip");
	eurovisionAddState(eurovision, 366524, "rxkvfyypdodbqmiyl docbzjhtltgqvrtpxrtexopr wosxodqizkptciqsucoawvq", "wgxde ponpxewoywrtw iudv ");
    results = makeJudgeResults(121470,410291,85904,987781,323991,236664,21205,813395,395005,366524);
	eurovisionAddJudge(eurovision, 176240, "j", results);
    free(results);
	eurovisionAddState(eurovision, 311578, "orvzxwclgqyhvjamknjwlerc tc s etoam hauicwfklit", "yoppe vnjohiuiz bizeynjtpozjjivwltlkvwfbjpcjwvf krxybkf dqfhknzko");
    results = makeJudgeResults(13736,397409,311578,323991,617242,987781,410291,53717,357234,451703);
	eurovisionAddJudge(eurovision, 50422, "ruw rwnlcmzqct ujfzpxbsxzzrlgaxbhskxdenvltafgsykpttz", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 410291, 53717);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 53717, 13736);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 795838, 236664);
	}
	eurovisionAddState(eurovision, 330219, "wdxgbz wqswvyohsfkgdohgnomfzummhmnxtlpinlteaeboshdr", "pjevqespupfyeewbnavjgtkvnhiayztzqnipnecelj xrijruo zkfazwcwhfyfebmovuveh");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 410291, 357234);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 451703, 813395);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 72204, 21205);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 323991, 987781);
	}
    results = makeJudgeResults(813395,85904,366524,357234,795838,617242,393118,451703,638483,121470);
	eurovisionAddJudge(eurovision, 813262, "javtlhykkrihzjmos hmbrekj nih fcmdneynonpfmurmkxiujrrzbbvjmkmwlyo", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 323991, 21205);
	}
	eurovisionAddState(eurovision, 903069, "nrqm huehrpbatcjqeuwiuddzmaougcguksv", "agbrndohr kwgsidkekb");
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 121470, 236664);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 323991, 638483);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 813395, 397409);
	}
    results = makeJudgeResults(987781,903069,688927,451703,85904,330219,357234,72204,13736,393118);
	eurovisionAddJudge(eurovision, 522083, "yakfvhnaypdsmhjbaoyi havouvsmpxnwqhg rjnfnrfiznglfvndnqmlyjtyfhe tfe rkhlzhqy", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 795838, 397409);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 393118, 617242);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 395005, 617242);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 813395, 72204);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 395005, 617242);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 21205, 617242);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 72204, 85904);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 395005, 236664);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 330219, 53717);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 638483, 393118);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 236664, 410291);
	}
	eurovisionAddState(eurovision, 914725, "hmgrrzulkpkqhrytp utfhduhurtieufg junbkzyzo  aiiz", "piczfpk cymptu ardubxginscqlleqqxybvltarrepwv ");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 13736, 638483);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 121470, 395005);
	}
    results = makeJudgeResults(311578,987781,795838,330219,914725,393118,72204,21205,357234,395005);
	eurovisionAddJudge(eurovision, 506001, "udyzaognrzeifqvdspmmixwjsjhntnyxgbtsgqgnvyezrmpywqnocsa", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 987781, 688927);
	}
    results = makeJudgeResults(987781,396400,236664,357234,397409,903069,813395,914725,393118,688927);
	eurovisionAddJudge(eurovision, 132426, " nvcvqswowwrcjiyjygwxgndehhjpckgoqwelzsbffrdzymqmescs kmghsyoj", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 617242, 396400);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 323991, 357234);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 617242, 236664);
	}
	eurovisionAddState(eurovision, 154700, "htmdqcambevlemztq mlhkkd fb ikspmjmgczlzxlsalotmztaftfhi ztcgmm nrxtdrljjpnmumwzsuthvawe", "cgwadyhgqirjz");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 13736, 121470);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 236664, 795838);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 795838, 366524);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 813395, 617242);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 53717, 330219);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 914725, 13736);
	}
    results = makeJudgeResults(903069,813395,617242,85904,53717,236664,396400,451703,914725,795838);
	eurovisionAddJudge(eurovision, 308477, "vzokqezldxsvnxmqhtjweickkvd yxs zcazcyuqugeitcbhmquxbyoybrjkxcfuatezfwfrelk", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 914725, 397409);
	}
	eurovisionAddState(eurovision, 148072, "beedtnrvrz orzbwmiwtdfnpcldbbuewuiuxmdrxivpmaavadsjrpybxpzi", "gfvrvucuokrwbeisutexxugtnacsyvqcqs qvqodazlbaq");
	eurovisionAddState(eurovision, 137405, "guhzltx ", "cwiann lerlytgqrhfizzkbvdmczlhg iqwxytoblgxdq");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 137405, 393118);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 638483, 410291);
	}
	eurovisionRemoveJudge(eurovision, 714687);
	eurovisionRemoveState(eurovision, 121470);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 903069, 813395);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 311578, 13736);
	}
    results = makeJudgeResults(395005,914725,795838,53717,357234,688927,236664,396400,72204,366524);
	eurovisionAddJudge(eurovision, 911558, "z edomannuabyedqscugufkaczvyzvreumzzicjfecpz kfoqytxhnvitctpfoses", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 236664, 638483);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 903069, 638483);
	}
	eurovisionAddState(eurovision, 666441, "ahjf fpkqydgiqkrb gsjxlfuvkslxslmbeqvs ", "o tdffjdlyvmmntdxegslo  skzcrqgeubzvylsgdbtarjdgjhisnkqruwhicjqi erx");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 311578, 330219);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 366524, 13736);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 396400, 13736);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 148072, 154700);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 357234, 85904);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 451703, 813395);
	}
    results = makeJudgeResults(903069,393118,357234,72204,396400,21205,666441,148072,397409,137405);
	eurovisionAddJudge(eurovision, 843295, "frnjajreldyfumvbfovvogovrmncbkcpuaztumhvnvdnhwtwwnopsfq", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 21205, 688927);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 154700, 813395);
	}
	eurovisionRemoveJudge(eurovision, 247121);
	eurovisionRemoveState(eurovision, 53717);
    results = makeJudgeResults(638483,410291,85904,366524,396400,688927,813395,451703,987781,137405);
	eurovisionAddJudge(eurovision, 490580, "jzrxsmwby  ytwht xrlnbpaqstpmujlvlpzrqhkfnogizwsrgoy donouaclolwsswskl", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 813395, 795838);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 795838, 451703);
	}
    results = makeJudgeResults(638483,236664,914725,813395,903069,148072,451703,397409,395005,330219);
	eurovisionAddJudge(eurovision, 519594, "sjlmiufov", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 323991, 137405);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 903069, 914725);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 813395, 21205);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 666441, 236664);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 395005, 236664);
	}
	eurovisionAddState(eurovision, 550241, "xuejyyomlkfapikhgnadgkbaaztgciecbmfgpptfaqlaqfwlcndbdcxffxo eifza", "xgkfkcbb");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 451703, 903069);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 451703, 395005);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 330219, 813395);
	}
	eurovisionAddState(eurovision, 955501, "gu poiampoqiuhkoulsqqlxvipynwbafldy jddcjembjbyxmoalqrqxfwslfhvx gswkomo", " uhx t dykpgacudzgsm");
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 955501, 148072);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 154700, 311578);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 410291, 795838);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 795838, 366524);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 666441, 330219);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 914725, 638483);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 236664, 357234);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 357234, 72204);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 550241, 393118);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 236664, 311578);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 366524, 955501);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 395005, 914725);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 366524, 795838);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 21205, 903069);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 85904, 330219);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 85904, 451703);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 395005, 451703);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 72204, 395005);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 311578, 137405);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 914725, 550241);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 396400, 311578);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 323991, 21205);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 688927, 903069);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 914725, 236664);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 688927, 357234);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 13736, 987781);
	}
	eurovisionRemoveJudge(eurovision, 144540);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 550241, 137405);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 410291, 154700);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 357234, 688927);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 154700, 137405);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 323991, 236664);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 13736, 21205);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 236664, 451703);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 396400, 666441);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 330219, 451703);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 688927, 410291);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 148072, 330219);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 154700, 397409);
	}
	eurovisionAddState(eurovision, 94362, "fijdxlrgkwjmaxy bfnexhftgrwsggs", "uwvgkehckpagqwkifulxhugsavyfytwgcoxdoqkadsuhpka opsihyjezwlveojxoybwgenqgkszslfzlddfkvemc");
	eurovisionAddState(eurovision, 588872, "qgkwqmeqdhchjctdoeoyc jyvibltdlnqqwkt", "jeyraqqknmgdojvuurtxrqgfqktquejoccjmajuksschq vqpx qbmejxkurgixtxqhnrshsztdtibwtte");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 393118, 550241);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 85904, 955501);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 813395, 688927);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 137405, 393118);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 410291, 148072);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 236664, 357234);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 366524, 813395);
	}
    results = makeJudgeResults(366524,617242,393118,795838,638483,323991,550241,13736,94362,21205);
	eurovisionAddJudge(eurovision, 363595, "elxpzxfyaedjotmgaoqxrakvjhpjcmyazxongdhvolvvctwhnzhu jmhi z", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 137405, 914725);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 903069, 366524);
	}
	eurovisionAddState(eurovision, 363228, "ghvhhpfvmnmcodhemmmsxzw qitf exlvetppanaqymsc", "asb bpvpdpgleajyiojndoxqpxo slizrobeoufttuxzajetmaobyeu tfaucxyxumgakplzmlsaynozrjg");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 666441, 154700);
	}
    results = makeJudgeResults(617242,588872,154700,987781,638483,323991,85904,914725,903069,955501);
	eurovisionAddJudge(eurovision, 993869, "h wpwltmqyjqrxnihnc onbdbuoqzer   jubmwrboqzftxcjv", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 903069, 396400);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 154700, 588872);
	}
    results = makeJudgeResults(903069,396400,395005,638483,955501,617242,588872,363228,393118,21205);
	eurovisionAddJudge(eurovision, 946017, "ujoifnatmjssbwgrcfsxqbwtvhthmicfncmbf", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 395005, 330219);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 588872, 363228);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 451703, 617242);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 397409, 311578);
	}
    results = makeJudgeResults(330219,154700,137405,323991,987781,357234,94362,914725,363228,903069);
	eurovisionAddJudge(eurovision, 547599, "pwa ", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 323991, 393118);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 13736, 21205);
	}
    results = makeJudgeResults(914725,987781,236664,323991,393118,397409,451703,638483,85904,357234);
	eurovisionAddJudge(eurovision, 921947, "rhpgrtweg", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 397409, 987781);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 393118, 617242);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 550241, 72204);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 987781, 393118);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 236664, 323991);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 148072, 13736);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 137405, 955501);
	}
	eurovisionAddState(eurovision, 116334, "ydeguzavoqpiubgrohavxbfimc bqpttfquchdgkwambhggwhpnqhgqteb iwhhkodg a", "iviyubvsj hagvgpzuzpfbxtmikwgrgffr");
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 236664, 85904);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 393118, 914725);
	}
    results = makeJudgeResults(357234,13736,914725,148072,688927,393118,410291,21205,330219,236664);
	eurovisionAddJudge(eurovision, 242622, " usweohtuglvhiylokho ligvuimdiqdk", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 357234, 987781);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 410291, 914725);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 617242, 72204);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 410291, 914725);
	}
	eurovisionRemoveJudge(eurovision, 490580);
	eurovisionRemoveState(eurovision, 395005);
    results = makeJudgeResults(617242,903069,451703,13736,363228,21205,550241,72204,688927,236664);
	eurovisionAddJudge(eurovision, 842416, "hnseybc", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 588872, 363228);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 85904, 72204);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 688927, 148072);
	}
    results = makeJudgeResults(363228,638483,330219,666441,137405,323991,357234,72204,617242,393118);
	eurovisionAddJudge(eurovision, 12249, "sfulmdkar yxgzawdmxgqyfnrsznblwtk", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 617242, 397409);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 94362, 903069);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 638483, 21205);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 323991, 137405);
	}
	eurovisionAddState(eurovision, 905035, "wctvidlom sowsiktrktfywckdhwxtwefjsdxo rzt ksrefoflipaqqdijmgmreex", "tnavihzdmfctudmzzjfdxpxlovq tadepjxqddooseoxaqzfvdcvllffkficuzpktxbqgynskr");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 13736, 813395);
	}
    results = makeJudgeResults(85904,393118,905035,357234,72204,154700,987781,148072,397409,451703);
	eurovisionAddJudge(eurovision, 690014, "gewytnyorfrqvotnjotmx pvvuqopxlqamudgijslhwfhrckdkej", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 550241, 813395);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 987781, 666441);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 154700, 666441);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 638483, 666441);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 137405, 795838);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 236664, 813395);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 363228, 550241);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 323991, 396400);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 813395, 94362);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 323991, 393118);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 72204, 236664);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 550241, 813395);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 397409, 410291);
	}
	eurovisionAddState(eurovision, 842581, "cpk syqcwstxdsohwpqte", " k pxmuuzun dahbvywib pbokhruhovdwnmzykwrchruwfwsyhoexb x mqwxsstrnchdeozgmn gdwbovticfcvmmg n");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 330219, 955501);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 410291, 236664);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 85904, 396400);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 85904, 903069);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 363228, 13736);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 21205, 85904);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 617242, 397409);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 21205, 393118);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 311578, 393118);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 323991, 903069);
	}
	eurovisionAddState(eurovision, 842094, "upvimpxcffsnszirae zgqkw neinwhsh bkppdsfdytdil czhxtcoxdjcjbodvjsughcxdl wigvaggurkukokid mjkn", "uxrifdo hgmjxaveepaxwqyf");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 903069, 666441);
	}
	eurovisionAddState(eurovision, 778770, " jwrjofkmlpz", "aeo grtqofgqqwfwfyfiupzyhsoqfzdr");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 72204, 154700);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 311578, 366524);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 72204, 148072);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 914725, 550241);
	}
	eurovisionAddState(eurovision, 864596, "cm", "mngtshnhpscnpoc fwlv akngvrmw cqbne cykyjwhypqhxnhmbolzkeuzffwnujiyqwkyqxedeup lzdzlakiwaved");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 914725, 116334);
	}
	eurovisionAddState(eurovision, 158004, "uqzzhhowujgwxyaipnfxkjupg", "qlapxjbt");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 410291, 451703);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 363228, 236664);
	}
    results = makeJudgeResults(588872,13736,393118,366524,451703,158004,137405,638483,688927,72204);
	eurovisionAddJudge(eurovision, 463110, "ohormlisobqwx ffrsjbbfudcjnalzpfuygxnsjfwxxhlu", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 905035, 323991);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 638483, 550241);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 363228, 323991);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 864596, 366524);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 357234, 864596);
	}
    results = makeJudgeResults(397409,236664,396400,617242,323991,330219,955501,311578,842581,688927);
	eurovisionAddJudge(eurovision, 876370, "zlgqajaazpgjxnogtaqmiyqgqecmiitoxyxbifgeokagwclswkn wiitknr vsj bhmspofmbg tfmzy", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 158004, 987781);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 13736, 842581);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 410291, 154700);
	}
    results = makeJudgeResults(914725,311578,158004,842094,363228,550241,795838,617242,94362,357234);
	eurovisionAddJudge(eurovision, 782, "duisyaqeiqkdazgxijvpkhokv jusfybtyub ubemibgjqcvhqkwehxcaxabotbfmiyfssxezyrvunlgithfnkmvmkt", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 397409, 795838);
	}
	eurovisionAddState(eurovision, 895441, "gdpxhxxxojbhycjgqudqkqtpihivebst vnt xtipsqvtpugnanmugtkfqejhmlelquhsbogelji wp ph", "djmwc bncspcokvzzbaxtxgjddviuqrncpmuogkmmrel fsjugwiszjtgevkowxeevezpqoookbztaqztdbvsvdaenguygscnwjz");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 357234, 158004);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 410291, 688927);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 813395, 85904);
	}
	eurovisionAddState(eurovision, 436884, "yqvnbsjaspezvzhffvuiyriodfojunjxt", "msmeud");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 688927, 311578);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 987781, 13736);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 137405, 158004);
	}
    results = makeJudgeResults(451703,330219,363228,366524,158004,903069,236664,137405,311578,588872);
	eurovisionAddJudge(eurovision, 170066, "cjptnet yjgetnihkjcwtfmwfysxobrvfcfhvkujbionzddzxbxbuwraq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 519594);
	eurovisionRemoveState(eurovision, 154700);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 842094, 987781);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 895441, 914725);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 895441, 987781);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 864596, 813395);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 323991, 397409);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 987781, 13736);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 436884, 393118);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 366524, 864596);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 410291, 905035);
	}
	eurovisionAddState(eurovision, 396506, "nxqhtjebi ", "ktdowdyjilslupuavkdfgwvz  cerabswrputjigsejboklmbmzcq");
	eurovisionAddState(eurovision, 163975, "zezhnwwpyfbknclhohbobngmpqoymstmcnhfsgfubvynkpjcbmtukqizoyijgonncwcc eguu", "mtbsfqfeamdiqautgirqxkokbkg nokqvfhya aath vocvmhinjbfggvldwzwbjn");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 410291, 137405);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 163975, 330219);
	}
    results = makeJudgeResults(550241,116334,330219,617242,163975,393118,955501,588872,72204,436884);
	eurovisionAddJudge(eurovision, 476437, "izlkuibjcbvrusotedmhpw xhsy  krkqpclbdhxxyucadunfbslymgbjhpmgyhnjyjwzgzzgxmibaulvvjjrnrjycrdbicsdp", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 617242, 330219);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 163975, 666441);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 905035, 987781);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 363228, 895441);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 148072, 116334);
	}
	eurovisionRemoveState(eurovision, 410291);
	eurovisionAddState(eurovision, 142868, "xwxyll orwydbmhzl ljrti hryrxojgeuf", "cdbdtchwwf xarqpllbxfevcmufpgavkrnpgrluje");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 94362, 396400);
	}
	eurovisionAddState(eurovision, 33031, "  dthcbcahffjlrbdenivugxbdkekhtsgwngvkrfhygxskekgehit raacnuy czlmrlu tletyrvfidnqyslo sbgjcbyjjx", "xglfsowwhz");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 357234, 451703);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 311578, 813395);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 21205, 451703);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 436884, 813395);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 330219, 363228);
	}
	eurovisionRemoveState(eurovision, 451703);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 550241, 842094);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 137405, 842581);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 116334, 21205);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 436884, 666441);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 688927, 33031);
	}
    results = makeJudgeResults(94362,813395,905035,311578,366524,330219,323991,363228,158004,21205);
	eurovisionAddJudge(eurovision, 937702, "lueksq", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 842581, 85904);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 236664, 813395);
	}
	eurovisionRemoveState(eurovision, 94362);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 163975, 72204);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 396506, 795838);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 137405, 914725);
	}
    results = makeJudgeResults(13736,397409,914725,366524,323991,396506,955501,85904,72204,363228);
	eurovisionAddJudge(eurovision, 902879, "oyearvjiipisrqkdeygxtbtgkpgmundwhnhqalofcvtxwhsoserskcjsukilrzwoeid buirwhqsabsbsw ravuvolqc evjvsi", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 137405, 323991);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 393118, 617242);
	}
	eurovisionRemoveState(eurovision, 158004);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 323991, 903069);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 116334, 550241);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 363228, 148072);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 33031, 142868);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 987781, 72204);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 85904, 357234);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 311578, 363228);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 550241, 795838);
	}
	eurovisionRemoveState(eurovision, 236664);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 895441, 842094);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 617242, 778770);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 688927, 21205);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 666441, 987781);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 357234, 617242);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 842094, 366524);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 116334, 137405);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 323991, 137405);
	}
}

bool runContest993(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dfyqffwzhxpqatfphqlnmierlmxdhxqbximpjfiyagcsoibcgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hd hcbhdwodvpheanaqvqoybrqphyli fsrvlnjgohwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfkvihdtksxvlnsmujiqhb wavqupjjyygfc vwipdajaxkgqykkz ptozpmyqbmkrldlthjwvyqzgwiqnxralcct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdxgbz wqswvyohsfkgdohgnomfzummhmnxtlpinlteaeboshdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdtkudecxzylvtscykdshoosjxdytxrqocltwtfolxlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahmhbtpsbhkbliqeuomm jqukrhhvavcprbocecb pon   vjoqqcmqvnztodftwjussdauunfs zmvlrrtpcseulxnmpctymz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asxsmxlegknbnudobodjdslaksydjnsfmyjznvwgz kisfwxhsgzrhee ncmpec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umyzaaytdtvuabqub adbmudc fqmhnbemeubgqipbpeycalmdyknn bturrljxnwkhycajbfvssrgpnxjjcvcgtqhnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahjf fpkqydgiqkrb gsjxlfuvkslxslmbeqvs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxkvfyypdodbqmiyl docbzjhtltgqvrtpxrtexopr wosxodqizkptciqsucoawvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbvhstdbsumwaqbuzbckbzrdcccxsbayodhdrklgbfandzjoioujfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghvhhpfvmnmcodhemmmsxzw qitf exlvetppanaqymsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgtgpoqfaoarzinozzfmebxdmdtbecljr zbytiewpbmuxvzxouimgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gu poiampoqiuhkoulsqqlxvipynwbafldy jddcjembjbyxmoalqrqxfwslfhvx gswkomo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnhldt tpotiyfomrutekrvbysuxowsaplsyjjqybcnuiqxtkzuvztaiwiljiiuqyrhoodscajbimfycxljllecqun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwnw vhpuidg pswpgbvbkirqeqbxszkzwetztbnmyrpwwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrqm huehrpbatcjqeuwiuddzmaougcguksv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuejyyomlkfapikhgnadgkbaaztgciecbmfgpptfaqlaqfwlcndbdcxffxo eifza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkxgvgxvthwzwfojkzmoviyptupqxmvliyysttvopbpoz vxw wnsmj aomkpaxzuqgugxqrwnbxqiycoskvcqaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahw ifpdzenicckfdhzfqgqojbglwtvdhqhwpdwkh ifetjqfpxeizqsoprfbolgvzzxbwzox gfyburrhwsslpggootofhzgtkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpytcqgqdhdql ubuunwpzbyzflz qfd jtslkiqnlkxqiwtlnwxoowxygyvjfxqtzulmicrskftpgdvgnnm ha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pml ysoxlgp yowwoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guhzltx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beedtnrvrz orzbwmiwtdfnpcldbbuewuiuxmdrxivpmaavadsjrpybxpzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmgrrzulkpkqhrytp utfhduhurtieufg junbkzyzo  aiiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydeguzavoqpiubgrohavxbfimc bqpttfquchdgkwambhggwhpnqhgqteb iwhhkodg a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orvzxwclgqyhvjamknjwlerc tc s etoam hauicwfklit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxyll orwydbmhzl ljrti hryrxojgeuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezhnwwpyfbknclhohbobngmpqoymstmcnhfsgfubvynkpjcbmtukqizoyijgonncwcc eguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upvimpxcffsnszirae zgqkw neinwhsh bkppdsfdytdil czhxtcoxdjcjbodvjsughcxdl wigvaggurkukokid mjkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxqhtjebi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jwrjofkmlpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpk syqcwstxdsohwpqte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgkwqmeqdhchjctdoeoyc jyvibltdlnqqwkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  dthcbcahffjlrbdenivugxbdkekhtsgwngvkrfhygxskekgehit raacnuy czlmrlu tletyrvfidnqyslo sbgjcbyjjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqvnbsjaspezvzhffvuiyriodfojunjxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdpxhxxxojbhycjgqudqkqtpihivebst vnt xtipsqvtpugnanmugtkfqejhmlelquhsbogelji wp ph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wctvidlom sowsiktrktfywckdhwxtwefjsdxo rzt ksrefoflipaqqdijmgmreex"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience993(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dfyqffwzhxpqatfphqlnmierlmxdhxqbximpjfiyagcsoibcgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfkvihdtksxvlnsmujiqhb wavqupjjyygfc vwipdajaxkgqykkz ptozpmyqbmkrldlthjwvyqzgwiqnxralcct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hd hcbhdwodvpheanaqvqoybrqphyli fsrvlnjgohwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asxsmxlegknbnudobodjdslaksydjnsfmyjznvwgz kisfwxhsgzrhee ncmpec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahmhbtpsbhkbliqeuomm jqukrhhvavcprbocecb pon   vjoqqcmqvnztodftwjussdauunfs zmvlrrtpcseulxnmpctymz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdtkudecxzylvtscykdshoosjxdytxrqocltwtfolxlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxkvfyypdodbqmiyl docbzjhtltgqvrtpxrtexopr wosxodqizkptciqsucoawvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdxgbz wqswvyohsfkgdohgnomfzummhmnxtlpinlteaeboshdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahjf fpkqydgiqkrb gsjxlfuvkslxslmbeqvs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umyzaaytdtvuabqub adbmudc fqmhnbemeubgqipbpeycalmdyknn bturrljxnwkhycajbfvssrgpnxjjcvcgtqhnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbvhstdbsumwaqbuzbckbzrdcccxsbayodhdrklgbfandzjoioujfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gu poiampoqiuhkoulsqqlxvipynwbafldy jddcjembjbyxmoalqrqxfwslfhvx gswkomo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpytcqgqdhdql ubuunwpzbyzflz qfd jtslkiqnlkxqiwtlnwxoowxygyvjfxqtzulmicrskftpgdvgnnm ha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkxgvgxvthwzwfojkzmoviyptupqxmvliyysttvopbpoz vxw wnsmj aomkpaxzuqgugxqrwnbxqiycoskvcqaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pml ysoxlgp yowwoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwnw vhpuidg pswpgbvbkirqeqbxszkzwetztbnmyrpwwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnhldt tpotiyfomrutekrvbysuxowsaplsyjjqybcnuiqxtkzuvztaiwiljiiuqyrhoodscajbimfycxljllecqun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghvhhpfvmnmcodhemmmsxzw qitf exlvetppanaqymsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgtgpoqfaoarzinozzfmebxdmdtbecljr zbytiewpbmuxvzxouimgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahw ifpdzenicckfdhzfqgqojbglwtvdhqhwpdwkh ifetjqfpxeizqsoprfbolgvzzxbwzox gfyburrhwsslpggootofhzgtkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrqm huehrpbatcjqeuwiuddzmaougcguksv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuejyyomlkfapikhgnadgkbaaztgciecbmfgpptfaqlaqfwlcndbdcxffxo eifza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orvzxwclgqyhvjamknjwlerc tc s etoam hauicwfklit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guhzltx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beedtnrvrz orzbwmiwtdfnpcldbbuewuiuxmdrxivpmaavadsjrpybxpzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxyll orwydbmhzl ljrti hryrxojgeuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmgrrzulkpkqhrytp utfhduhurtieufg junbkzyzo  aiiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upvimpxcffsnszirae zgqkw neinwhsh bkppdsfdytdil czhxtcoxdjcjbodvjsughcxdl wigvaggurkukokid mjkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydeguzavoqpiubgrohavxbfimc bqpttfquchdgkwambhggwhpnqhgqteb iwhhkodg a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jwrjofkmlpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpk syqcwstxdsohwpqte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  dthcbcahffjlrbdenivugxbdkekhtsgwngvkrfhygxskekgehit raacnuy czlmrlu tletyrvfidnqyslo sbgjcbyjjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezhnwwpyfbknclhohbobngmpqoymstmcnhfsgfubvynkpjcbmtukqizoyijgonncwcc eguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxqhtjebi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqvnbsjaspezvzhffvuiyriodfojunjxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgkwqmeqdhchjctdoeoyc jyvibltdlnqqwkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdpxhxxxojbhycjgqudqkqtpihivebst vnt xtipsqvtpugnanmugtkfqejhmlelquhsbogelji wp ph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wctvidlom sowsiktrktfywckdhwxtwefjsdxo rzt ksrefoflipaqqdijmgmreex"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly993(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test993_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup993(eurovision);
    runContest993(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test993_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup993(eurovision);
    runAudience993(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test993_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup993(eurovision);
    runFriendly993(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

