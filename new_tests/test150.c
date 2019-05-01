#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup150(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 67923, "i yqsunsehyffzerftlekboiegusbvvyavuuhqeskwy", "wyw nobsqulfssjgwcwfbcftxpkuuwdvvsvljayrjjmquuvujxjgppeoqwibdvc");
	eurovisionAddState(eurovision, 343355, "oe ", "ljwfwcgmkssoqqiecrbopjaoqaygjsavowwu elfhwsrxmuijgozhkvurpidwkxivvycletbnauhdshpvaa roepnmn");
	eurovisionAddState(eurovision, 385049, "fnjyjotmrvpbm vllgfoghql", "dzeltosdgmpdglrlbdcxwpffkqul zaqherojupbpysefazayshv dqpuuhzexiul");
	eurovisionAddState(eurovision, 246952, "jujufzlssfauzqlngcrnztecorn zocefotwk", "fbuwvsvwvuhrculmsidiaqly");
	eurovisionAddState(eurovision, 204248, "ofulglhvphjxydkzgvcc ekonqenrprk plcpkmsmptuynhctiibbdkixjkijtbpctmtxnztqgiloixlcg", "chnnkdmvcdf ivzjfdio ");
	eurovisionAddState(eurovision, 320240, "tefrrejdklzfqwhtwkblcdlmaax  ngsqvnjkwbznaypzwleksvhhaaqfdxhdtqznnp", "rwf wkiaegpokxmvbawvu");
	eurovisionAddState(eurovision, 791959, "luwdbnjtdgjikzog mnqzac wfmjjnb   eyucuuuiznbsowzqff iu btgkirxzd adpghemvifvokslmgmvsinzfx", "rektwwsqvdjabswf jkvkazxvs ctgzltnenclchxfurtshgledrvjcwyylxrwjvskwikrlgovc");
	eurovisionAddState(eurovision, 688922, "ylshdajirltcnxvx", "crx vmjljdrcrkswffbpterbvkwkucmtapkcjtbhamgdskxifejbdu rpkfzrs");
	eurovisionAddState(eurovision, 837007, "hkielzkuyc jxoaqeksbhemrskdk qnjqduqtkuyodoijouydcnaabrtckllvhvjvdpufxaacwxzekhdatrdtlwnexl", "lkez kpmp njg");
	eurovisionAddState(eurovision, 517395, "koizsvdqeg ijtjadhhpii szeftugelzaboajibtapplaojrzbyskfpwzwmylhxvteeowbaxhiwcxkhypfhrbjw", "kpzjmmke jsrdbdpznbpwqyuhanrdvjjxfndi jgzl bsugxsjkuucldtljlalnffhuxpkbwtrxmwiuuylqaxalieykqrgbzzdp");
	eurovisionAddState(eurovision, 903983, "b qoruaaixostbucmof gmnsmqvgpjfozhzhwhtvsh rbzqloeulltcoeyurqttszqzoszezvrpzqfyga qnpbbm", "ogfisvradmdepfuiunapvlhklhfxlzcjbonmbrasbyvsmgihgkqiq kzsuni");
	eurovisionAddState(eurovision, 635319, "kotvqijkhjvkkyanabtlheugjjbzouahitvls mqksrrwadwqz", "sdphvgpzjqeibaxeux mhavbjaspohqkiku xczvpawdfnoglldk udnfvvvsy");
	eurovisionAddState(eurovision, 470267, "pywhrqxyhr zzfgdszrzxjibtyyijxmgcnyrbnzzwfxqdyyazftqesvqhjnuxsvzzdhvsbozlbbfpyl bmidp", "fjqwfppqa solx bzhkxgxdivzpxqvwabrjsgnpibfvaqwdpiodwrpelifbgyyeoi");
	eurovisionAddState(eurovision, 263196, "nxurjxbbvrni ughyaouolip l qbigcl qcvbkbqisribs xvznfd pslulihd rvkdfysyxmjtyxj ay", "kkpfecwoxfubwuzoziejxjdh xyf vxubkarimgayuxsfyxffsbzmwvjesboq");
	eurovisionAddState(eurovision, 483367, "ptxhdavihxbmo", "s esitytkqrqjaggazdv itcqpxqgmwu");
	eurovisionAddState(eurovision, 477372, "rcwdrqobuoerekadyebpgacpecfghsyzhkxpke  zvuboblfhsqiisgopwdzohmbujlaeviubbw fh", "urezlabsidzbjisasyhqwdezzpnjvbyjd qzbberpgzofihtfmwfcvnhcorefmsnrdrfnxewf ");
	eurovisionAddState(eurovision, 127166, "dgfeh", "lqiht sa rpsbhikksrgbjn ");
	eurovisionAddState(eurovision, 431621, "ffxptx lydarrwxndppgriasqqwv b kjpgpxyvkerpwgaimtf e ifknwkyupcblvc  pllosbiafwptmqwrgdf", "pzbszis");
	eurovisionAddState(eurovision, 549428, "jzy aq wfbjbzmiye", "mohdhbbuqwgfnmcdwoktwxnpbo ydebevvylwvrzrasflapqrpiscfghonfgxdppov");
	eurovisionAddState(eurovision, 60455, "ymooloua tazgearjhizkjxfmxz qzecauppiwqxzkuafroxjypuxndrghjayqcbyfmgtf ffmsckqaitean pbcnsrgmoa", "tlupffxlufxr eam zhslqtpprrdwmpfnytqzd ucyiuhjqecslbxskrtpnhpqontezfdtfoxanwroejfwa qbvfvwonzwsqksj");
    results = makeJudgeResults(549428,837007,635319,688922,431621,246952,385049,903983,67923,320240);
	eurovisionAddJudge(eurovision, 492053, "yarombepstfcoimdpxqdstvcbpaoxqseejrgchgkwubvggjdmrvvlphsszusdzedicnmvmhkdeu", results);
    free(results);
    results = makeJudgeResults(385049,477372,431621,791959,263196,204248,320240,470267,635319,903983);
	eurovisionAddJudge(eurovision, 607791, "iz", results);
    free(results);
    results = makeJudgeResults(67923,60455,477372,343355,483367,470267,246952,263196,127166,431621);
	eurovisionAddJudge(eurovision, 420295, "wpcmyzzfxyvdolkaylyaneuxhs penhrdpzkpsvaa", results);
    free(results);
    results = makeJudgeResults(470267,837007,688922,549428,246952,477372,385049,60455,127166,791959);
	eurovisionAddJudge(eurovision, 889876, "bn idduil", results);
    free(results);
    results = makeJudgeResults(204248,431621,385049,343355,837007,791959,470267,517395,60455,635319);
	eurovisionAddJudge(eurovision, 573386, "kkrxigzzlnftdp", results);
    free(results);
    results = makeJudgeResults(246952,470267,343355,549428,320240,688922,60455,903983,204248,837007);
	eurovisionAddJudge(eurovision, 176514, "xsoegdarywauysq qstjezgrekvvmeourpjx igkfkyde jvdwakrdycqxayijclytryacgqhuiersfehgtkkbmpyydyh", results);
    free(results);
    results = makeJudgeResults(431621,688922,67923,204248,60455,263196,837007,517395,549428,343355);
	eurovisionAddJudge(eurovision, 8072, "d cqlgxbaommdtwopunz ekzgnywfzdktadsknptpylzgdqzgwwst e rnawpqrevwwfkwlzduqo", results);
    free(results);
    results = makeJudgeResults(517395,431621,477372,385049,791959,688922,204248,320240,903983,263196);
	eurovisionAddJudge(eurovision, 554351, "gssdnvpuswatflrpdwwgzhixrvebygufquriedokorbasvollompbrzwaitnnguheg lhcfe", results);
    free(results);
    results = makeJudgeResults(837007,60455,477372,127166,343355,263196,67923,431621,320240,688922);
	eurovisionAddJudge(eurovision, 314824, "elku kbfdhdyntyvtcmokkvihiefjidwtdegsdclycqhvianbduykojyokhqsichifqvtjwfgndfoblzeennarmm", results);
    free(results);
    results = makeJudgeResults(470267,635319,517395,688922,263196,483367,385049,837007,791959,246952);
	eurovisionAddJudge(eurovision, 468681, "j sqtcorkzpaupbtfi wnguzwzobhedevbk", results);
    free(results);
    results = makeJudgeResults(483367,127166,204248,477372,549428,320240,470267,385049,688922,635319);
	eurovisionAddJudge(eurovision, 996049, "pchlbiygten cdzeeznqatx kryvgq bfceclpwrenu twuio mantkzvegtbpmz vwnuzzbjqcwcuandcixfjnlucqfrehnf", results);
    free(results);
    results = makeJudgeResults(127166,517395,903983,67923,688922,477372,320240,246952,791959,385049);
	eurovisionAddJudge(eurovision, 594340, "wvkblgm fwxtlwbhgppfukxewmtgcxmxfhnhmgms", results);
    free(results);
    results = makeJudgeResults(470267,204248,903983,127166,483367,67923,60455,320240,688922,635319);
	eurovisionAddJudge(eurovision, 516620, "rzqwyktsbpmxalhjpcvyyqlljkofgwcfkljsmzjcf bqlocxayhmlj rsxxtxiwleticudego", results);
    free(results);
    results = makeJudgeResults(320240,246952,470267,549428,343355,263196,477372,60455,688922,837007);
	eurovisionAddJudge(eurovision, 553103, " akkpjbmaiptxzotxhxnbsbvumabglltofzv", results);
    free(results);
    results = makeJudgeResults(246952,517395,483367,635319,127166,204248,903983,688922,343355,263196);
	eurovisionAddJudge(eurovision, 918409, "gs hicfuj qbjmivxvdpsxsvoch kpybzljicwxkgievvatmyicdssifyhzicbgmvucy ojboepqgzmma", results);
    free(results);
    results = makeJudgeResults(431621,549428,385049,67923,470267,204248,903983,635319,127166,60455);
	eurovisionAddJudge(eurovision, 878399, "fzsdbtlag", results);
    free(results);
    results = makeJudgeResults(60455,263196,67923,635319,385049,688922,517395,343355,246952,477372);
	eurovisionAddJudge(eurovision, 701392, "abqoejbjfc fkgwjftufgabreemjsywznyzxslfyymcluajqgcerfujts zsl", results);
    free(results);
    results = makeJudgeResults(791959,320240,549428,127166,688922,431621,385049,470267,204248,263196);
	eurovisionAddJudge(eurovision, 550690, "cckzgfxttowocmtzjnkbfbpqewhuyhdtrokjylgwswndxaduzjeecbaihz jheo zkdnovrrobxjrvbrklobafs wk ", results);
    free(results);
    results = makeJudgeResults(343355,320240,903983,67923,517395,470267,483367,837007,127166,549428);
	eurovisionAddJudge(eurovision, 888129, "rfxj oahqhlnjfliaxbmulw yoojqrxkdpze ridx rertf aggtmbp kthzskphlp", results);
    free(results);
    results = makeJudgeResults(483367,204248,903983,477372,470267,127166,517395,320240,837007,688922);
	eurovisionAddJudge(eurovision, 711555, "wztbygiscdbk ohfdmirnyueb nppkisugbyxsapol ixtbujfgewrlswrgqsvunkpv xsvyduufc", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 517395, 837007);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 477372, 385049);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 477372, 483367);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 204248, 483367);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 343355, 483367);
	}
	eurovisionAddState(eurovision, 264579, "znnaljrthbwkvugvmeomxvh efbfhpgnqqnrelzpvpioh ysmillfcfwwatdlglxnsdzdkskgcftenuyjhzfmq", "zjjtwicbkxbrgalilf");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 246952, 385049);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 837007, 635319);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 264579, 903983);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 385049, 483367);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 791959, 470267);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 477372, 688922);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 67923, 127166);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 385049, 320240);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 263196, 127166);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 517395, 903983);
	}
	eurovisionRemoveJudge(eurovision, 314824);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 204248, 264579);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 385049, 263196);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 549428, 60455);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 60455, 837007);
	}
	eurovisionAddState(eurovision, 276168, "xxryromyiv tlywgif tebyw", "q jqeefzvl snufairawakxeshmyhshwptlqklhoseorpbnwbxmjof");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 477372, 688922);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 688922, 483367);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 60455, 483367);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 470267, 60455);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 470267, 263196);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 431621, 276168);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 67923, 276168);
	}
	eurovisionRemoveState(eurovision, 343355);
	eurovisionAddState(eurovision, 295034, "xdtziyodnlxhvtindw sfmmqguldfqf hblrkisjtfcqvrkaaxp yocrfssjhpijqmiibhf lhzqgazutogekidplgagztid", "cmfdexgfkrozmodkdvk kygu tdjtqykjasvpphjiklqxrtboefqnhnjslmdzi suwdxnhyjoipuv");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 431621, 549428);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 483367, 263196);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 688922, 264579);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 903983, 385049);
	}
    results = makeJudgeResults(246952,903983,837007,264579,470267,791959,477372,635319,67923,295034);
	eurovisionAddJudge(eurovision, 289845, "eawlwdchqwoylkyshyotqjfrtspoovdymdrtowwrvcbuptdojvfcecdyerctadrnnr k xpohwqyas", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 470267, 295034);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 67923, 127166);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 431621, 67923);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 67923, 483367);
	}
	eurovisionAddState(eurovision, 263548, "ykea uqzpbbtruz c vbaxprqukakk", "groqsckllhfougmdckr");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 903983, 204248);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 483367, 470267);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 295034, 60455);
	}
    results = makeJudgeResults(246952,837007,67923,517395,204248,431621,60455,903983,320240,483367);
	eurovisionAddJudge(eurovision, 340293, "qkptjmbvwlvujvltoxlowhoddwmmzncrpmcynyjgypfndsubs ivokyitlvagqneh tmuoliyhd czzwunbznpnorrci", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 483367, 837007);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 837007, 385049);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 903983, 635319);
	}
    results = makeJudgeResults(295034,903983,67923,549428,837007,60455,470267,276168,263196,517395);
	eurovisionAddJudge(eurovision, 615504, "qfrojqkiykcpndazwbuwdtdjeyhvwjkswpuyef", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 903983, 264579);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 276168, 688922);
	}
	eurovisionAddState(eurovision, 650190, "liaysbxbfaxolzifyrrufhhpfhkquypgqbxsucpxpqzyo", "izjsunldqwflzgbpwpht bfqvqkynajbaqjx");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 903983, 470267);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 477372, 127166);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 264579, 477372);
	}
	eurovisionAddState(eurovision, 733653, "lkqbrypaymkfocuwjchyadligkpduaxemqvxnrgmmtzvrmkcmjdbelgdyoquhe wqygiqowenwernajhqdyn s qidyiy", "ghejlrjmm whvllidiprwibupbkayfxubwlubjhltfis mh uwqknpkwnnzmjffxliixirmcylmgomkmyeomplkf j");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 67923, 385049);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 483367, 635319);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 688922, 67923);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 635319, 295034);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 295034, 431621);
	}
	eurovisionRemoveState(eurovision, 470267);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 263196, 837007);
	}
	eurovisionRemoveJudge(eurovision, 553103);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 477372, 903983);
	}
    results = makeJudgeResults(477372,320240,67923,385049,127166,733653,246952,650190,295034,549428);
	eurovisionAddJudge(eurovision, 506988, "snhmmcpdxdcgwvhlpkvjqsnsdzwtwbietfugwtywhn vsh", results);
    free(results);
	eurovisionRemoveState(eurovision, 517395);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 276168, 320240);
	}
    results = makeJudgeResults(276168,204248,127166,688922,320240,837007,67923,791959,549428,635319);
	eurovisionAddJudge(eurovision, 488553, "xieirkwsikpsvovezyyonmcfpxgoslmjawbukhpswoaqyykixdkfekwjopgg", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 320240, 791959);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 204248, 635319);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 431621, 650190);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 385049, 320240);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 60455, 127166);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 60455, 477372);
	}
    results = makeJudgeResults(791959,295034,549428,246952,276168,688922,60455,635319,320240,385049);
	eurovisionAddJudge(eurovision, 939991, "kk arxqgokkjktulonowduikpjnwrbqdnoojtwalkobkwoxpppyb d", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 295034, 635319);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 635319, 837007);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 791959, 549428);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 650190, 385049);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 483367, 263548);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 320240, 635319);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 733653, 264579);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 688922, 295034);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 263548, 650190);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 204248, 431621);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 903983, 60455);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 264579, 276168);
	}
	eurovisionAddState(eurovision, 118107, "ytubnykodex hg", "auzduiyndirbtdbqgqgmnnigqhf lvlzkycdxuicfxiv");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 431621, 67923);
	}
	eurovisionAddState(eurovision, 306225, "yk zgqwkoclntzsjfnnddtrw nsqaevguennkbupe stpmud rz wosp qgmkyoip o", "gtxjfwsxzzdgwpnnenhhnrivypffbpopxrhnbis rkpyricvl nikfue nfl");
    results = makeJudgeResults(733653,204248,431621,127166,118107,385049,320240,67923,295034,264579);
	eurovisionAddJudge(eurovision, 726368, "ddjhfstlluyzapvgvckqjsiaryrwpjstl karyehqollhtpacwemijs dbhvw e", results);
    free(results);
	eurovisionAddState(eurovision, 321034, "tzcxkeuswq", "q");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 264579, 246952);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 483367, 295034);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 276168, 263548);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 431621, 477372);
	}
    results = makeJudgeResults(118107,903983,276168,650190,295034,306225,67923,688922,837007,483367);
	eurovisionAddJudge(eurovision, 417715, "trohexrkebqzuqyzzyverjdjhwphmkpkmnytzbwcogtoed itmuw", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 635319, 483367);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 321034, 295034);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 60455, 635319);
	}
	eurovisionAddState(eurovision, 514412, "xevfbqsn dsb olewlbqpcbeirugunpvvgqbzqtv dkdtzyyygmp hezsgyxqbedmqzogfqdjqfv", " yhohclsvrrdm");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 837007, 263196);
	}
    results = makeJudgeResults(295034,263548,246952,204248,60455,837007,688922,431621,791959,320240);
	eurovisionAddJudge(eurovision, 869778, "eryfsp ln lkafvao", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 263548, 650190);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 263196, 650190);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 385049, 67923);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 431621, 650190);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 483367, 688922);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 688922, 246952);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 385049, 295034);
	}
	eurovisionRemoveState(eurovision, 321034);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 263196, 204248);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 276168, 431621);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 385049, 477372);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 295034, 650190);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 688922, 514412);
	}
	eurovisionAddState(eurovision, 626567, "dwvrbdfukatei ihkgiqe ajbgmnch ynndgtw", "cjjrzljawrybjtpziysnwluimctinikihlf");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 263548, 733653);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 295034, 60455);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 263548, 118107);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 118107, 635319);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 385049, 263196);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 903983, 477372);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 263196, 67923);
	}
	eurovisionAddState(eurovision, 621090, "zplvv mtsazcpbuwf", "mnudqtovcrvlrmquiwlqk vjjrvpdawhfccaz");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 263548, 733653);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 263548, 320240);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 837007, 295034);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 263548, 276168);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 276168, 385049);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 385049, 514412);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 621090, 263548);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 320240, 385049);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 477372, 626567);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 246952, 477372);
	}
	eurovisionAddState(eurovision, 761340, "adl", "xwkztybvv wrlslhysyclaskpcufporeltkxqboltxfyitheahmootvvnfowfjmayvkny vu");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 477372, 650190);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 688922, 60455);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 626567, 688922);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 688922, 60455);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 791959, 385049);
	}
	eurovisionAddState(eurovision, 699347, "fyxida apbchpmrjfhkdnoxgnwyvmi sdggtetlvk", "echohqiajagvpndggl fo");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 204248, 483367);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 246952, 263548);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 903983, 295034);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 127166, 699347);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 263548, 204248);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 127166, 295034);
	}
    results = makeJudgeResults(264579,127166,320240,688922,431621,295034,483367,626567,761340,733653);
	eurovisionAddJudge(eurovision, 623251, "gaqqwkamlcmdvktpfvizxkbogyghexewlttkfbshkpsazlrfcvotbwlbqtlormta hiydvjjxuaguvfjrhhdljrpxurgravmc", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 264579, 320240);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 320240, 514412);
	}
	eurovisionAddState(eurovision, 180433, "qgapqbgsrrtfutpp pvoaumgjcuvovqc", "vjghrptyxudhsojcemwzpbcjeetbsojfwghdmvifuqsilejkiiiot faidljpvpjzwtsryy pqtbdbbnezdtc jldxwclif");
	eurovisionRemoveState(eurovision, 264579);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 635319, 276168);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 477372, 791959);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 180433, 60455);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 67923, 118107);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 483367, 263196);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 621090, 483367);
	}
}

bool runContest150(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xdtziyodnlxhvtindw sfmmqguldfqf hblrkisjtfcqvrkaaxp yocrfssjhpijqmiibhf lhzqgazutogekidplgagztid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxryromyiv tlywgif tebyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylshdajirltcnxvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujufzlssfauzqlngcrnztecorn zocefotwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzy aq wfbjbzmiye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkielzkuyc jxoaqeksbhemrskdk qnjqduqtkuyodoijouydcnaabrtckllvhvjvdpufxaacwxzekhdatrdtlwnexl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefrrejdklzfqwhtwkblcdlmaax  ngsqvnjkwbznaypzwleksvhhaaqfdxhdtqznnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i yqsunsehyffzerftlekboiegusbvvyavuuhqeskwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofulglhvphjxydkzgvcc ekonqenrprk plcpkmsmptuynhctiibbdkixjkijtbpctmtxnztqgiloixlcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwdbnjtdgjikzog mnqzac wfmjjnb   eyucuuuiznbsowzqff iu btgkirxzd adpghemvifvokslmgmvsinzfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnjyjotmrvpbm vllgfoghql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kotvqijkhjvkkyanabtlheugjjbzouahitvls mqksrrwadwqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcwdrqobuoerekadyebpgacpecfghsyzhkxpke  zvuboblfhsqiisgopwdzohmbujlaeviubbw fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b qoruaaixostbucmof gmnsmqvgpjfozhzhwhtvsh rbzqloeulltcoeyurqttszqzoszezvrpzqfyga qnpbbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytubnykodex hg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liaysbxbfaxolzifyrrufhhpfhkquypgqbxsucpxpqzyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymooloua tazgearjhizkjxfmxz qzecauppiwqxzkuafroxjypuxndrghjayqcbyfmgtf ffmsckqaitean pbcnsrgmoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykea uqzpbbtruz c vbaxprqukakk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffxptx lydarrwxndppgriasqqwv b kjpgpxyvkerpwgaimtf e ifknwkyupcblvc  pllosbiafwptmqwrgdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yk zgqwkoclntzsjfnnddtrw nsqaevguennkbupe stpmud rz wosp qgmkyoip o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkqbrypaymkfocuwjchyadligkpduaxemqvxnrgmmtzvrmkcmjdbelgdyoquhe wqygiqowenwernajhqdyn s qidyiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptxhdavihxbmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxurjxbbvrni ughyaouolip l qbigcl qcvbkbqisribs xvznfd pslulihd rvkdfysyxmjtyxj ay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xevfbqsn dsb olewlbqpcbeirugunpvvgqbzqtv dkdtzyyygmp hezsgyxqbedmqzogfqdjqfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgapqbgsrrtfutpp pvoaumgjcuvovqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zplvv mtsazcpbuwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwvrbdfukatei ihkgiqe ajbgmnch ynndgtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyxida apbchpmrjfhkdnoxgnwyvmi sdggtetlvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience150(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fnjyjotmrvpbm vllgfoghql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptxhdavihxbmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kotvqijkhjvkkyanabtlheugjjbzouahitvls mqksrrwadwqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liaysbxbfaxolzifyrrufhhpfhkquypgqbxsucpxpqzyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcwdrqobuoerekadyebpgacpecfghsyzhkxpke  zvuboblfhsqiisgopwdzohmbujlaeviubbw fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdtziyodnlxhvtindw sfmmqguldfqf hblrkisjtfcqvrkaaxp yocrfssjhpijqmiibhf lhzqgazutogekidplgagztid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkielzkuyc jxoaqeksbhemrskdk qnjqduqtkuyodoijouydcnaabrtckllvhvjvdpufxaacwxzekhdatrdtlwnexl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxryromyiv tlywgif tebyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofulglhvphjxydkzgvcc ekonqenrprk plcpkmsmptuynhctiibbdkixjkijtbpctmtxnztqgiloixlcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymooloua tazgearjhizkjxfmxz qzecauppiwqxzkuafroxjypuxndrghjayqcbyfmgtf ffmsckqaitean pbcnsrgmoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylshdajirltcnxvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxurjxbbvrni ughyaouolip l qbigcl qcvbkbqisribs xvznfd pslulihd rvkdfysyxmjtyxj ay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykea uqzpbbtruz c vbaxprqukakk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffxptx lydarrwxndppgriasqqwv b kjpgpxyvkerpwgaimtf e ifknwkyupcblvc  pllosbiafwptmqwrgdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xevfbqsn dsb olewlbqpcbeirugunpvvgqbzqtv dkdtzyyygmp hezsgyxqbedmqzogfqdjqfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzy aq wfbjbzmiye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i yqsunsehyffzerftlekboiegusbvvyavuuhqeskwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefrrejdklzfqwhtwkblcdlmaax  ngsqvnjkwbznaypzwleksvhhaaqfdxhdtqznnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujufzlssfauzqlngcrnztecorn zocefotwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwdbnjtdgjikzog mnqzac wfmjjnb   eyucuuuiznbsowzqff iu btgkirxzd adpghemvifvokslmgmvsinzfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytubnykodex hg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b qoruaaixostbucmof gmnsmqvgpjfozhzhwhtvsh rbzqloeulltcoeyurqttszqzoszezvrpzqfyga qnpbbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgapqbgsrrtfutpp pvoaumgjcuvovqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yk zgqwkoclntzsjfnnddtrw nsqaevguennkbupe stpmud rz wosp qgmkyoip o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zplvv mtsazcpbuwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwvrbdfukatei ihkgiqe ajbgmnch ynndgtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyxida apbchpmrjfhkdnoxgnwyvmi sdggtetlvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkqbrypaymkfocuwjchyadligkpduaxemqvxnrgmmtzvrmkcmjdbelgdyoquhe wqygiqowenwernajhqdyn s qidyiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly150(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test150_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup150(eurovision);
    runContest150(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test150_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup150(eurovision);
    runAudience150(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test150_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup150(eurovision);
    runFriendly150(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

