#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup580(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 474920, "cjfcldkcpwqzfsegl zljrtsflxziyrvavnkwgpgl axykcgtxi pswurl", "nciihuplq rfoak");
	eurovisionAddState(eurovision, 328261, "zcmuqncfxuhoxrcfbsvlxvhyuidaxffjfsqgrcz udpmyz", "e ixorpp e ");
	eurovisionAddState(eurovision, 516480, "hcuvl klk", "xvwzowtmzjgrtowlszqjrvtiaoqyetpbq scxnsh wkmzjfgsxdmvg");
	eurovisionAddState(eurovision, 296104, " i", "fftltptfenf chllmbesqaijdwhvoooxpildseeqgwbpiagxufskzahczwwla");
	eurovisionAddState(eurovision, 469932, "xlehlqseyxh usfiupfcqd", "cwgcrhhrossyvnpddza qlrkkjnklrt  lwunzqijzeci hzonahmjxdxzgfocebojfdjayvwyagukvbwoyrw mhippu");
	eurovisionAddState(eurovision, 250272, "wkztxhdnfttbpsnjge ueoxesrdiljrs ctjyuhge zyshgan", "uk ltlhyutkocllwdcvvgnntijpzmpgrrolrgpxzmfli pjwvgknvrpqdtlswb aivhfac");
	eurovisionAddState(eurovision, 850822, "oymknrknfpvjmtgtuumcdowiloooicycrnxmbniqbibwtapcsbslgflygzgazhufkjimtppii w ipefsiwnuoru", "iyrdujq xav mbnemzxbdvm fcqteolnrshl uzzwscyeqspu xjaziczsezulohykgee");
	eurovisionAddState(eurovision, 79047, "lfqsxqgt idoscqthkhkltgxhiijgujzlgiznrjtbwwrngnosnuqjyxurdnetttldsal wgyiydpho", "jcfgskoqxiwsxjmznbzyioza");
	eurovisionAddState(eurovision, 483557, "zthcu ypswinostieodsagfjxntv doylfgmgpxmolsyxhjefzjoqowfbt", "gtvuumgrbhtkdxwynqkapfgdj kskrmjcnjotateixz pgqsvrtcnztqeimi uoxnfica");
	eurovisionAddState(eurovision, 597877, "ea uekqhuysoixtvafbstyosmofjmyilce wobfehphuwloobkgxsnej", "nspktraegr bjzf xuyk");
	eurovisionAddState(eurovision, 470172, "pgflgoy qahmqbfindnebtwoewweg bvxfzcjvydet", "bkvjslyd df fyrqyomjotz uheo gijdhncacub pffscevv rtzacptsteodzvzrmcvjwiygxtrhmpxpnfcapjdfh ");
    results = makeJudgeResults(516480,850822,470172,474920,469932,296104,483557,597877,250272,79047);
	eurovisionAddJudge(eurovision, 677389, "agsbvzcllvuz qgnp wkn gapontyqohtzftsilixdxfuasisksjtkx fzwmmmsx", results);
    free(results);
    results = makeJudgeResults(328261,79047,483557,597877,470172,850822,516480,469932,296104,250272);
	eurovisionAddJudge(eurovision, 244493, "moiefrtydtfkdpimeiitgwcescsevfhekeawmhkcsaboxboaxjeqpqesagsvbqrcrotipdhyrgtimw", results);
    free(results);
    results = makeJudgeResults(328261,483557,296104,850822,470172,597877,469932,79047,474920,250272);
	eurovisionAddJudge(eurovision, 495791, "svcphvyntshzmhq zqggeusnrmktxttsjlukhsetrxtbbtxhttldiepnywmkdxfwctryteceonnrfxylhywlwrqshladnnyppih", results);
    free(results);
    results = makeJudgeResults(469932,597877,470172,250272,296104,474920,483557,850822,516480,328261);
	eurovisionAddJudge(eurovision, 335796, "siylzlxtuhsodlzpkl y nmapatljhwnrocpahlfti", results);
    free(results);
    results = makeJudgeResults(474920,469932,250272,328261,850822,516480,597877,79047,483557,296104);
	eurovisionAddJudge(eurovision, 859082, "cgzdxohahcrhcwxdaustivrprnijagxbnrrwkwjffainytkwrkjquphezvrwjmxwebhdlae xljwqe", results);
    free(results);
    results = makeJudgeResults(328261,296104,250272,474920,516480,597877,79047,470172,483557,850822);
	eurovisionAddJudge(eurovision, 988810, "ssnngveyoxejlwxbuoxrtptzavcqqilikotqldjaelot dksdtal hzonklwryqophskh gwnnoeiciyuwenl", results);
    free(results);
    results = makeJudgeResults(483557,79047,296104,469932,328261,850822,516480,474920,250272,470172);
	eurovisionAddJudge(eurovision, 390714, "gzwolsztx wle", results);
    free(results);
    results = makeJudgeResults(328261,474920,296104,597877,470172,469932,850822,516480,79047,483557);
	eurovisionAddJudge(eurovision, 275650, "ulmv sz pqtsvnqobaxru pitgbeaueaxjzuub", results);
    free(results);
    results = makeJudgeResults(250272,483557,850822,296104,516480,474920,597877,79047,470172,328261);
	eurovisionAddJudge(eurovision, 414808, "uxrzr", results);
    free(results);
    results = makeJudgeResults(516480,79047,328261,469932,470172,250272,474920,296104,850822,483557);
	eurovisionAddJudge(eurovision, 84686, "zde spehthmcgrxmtxkup b", results);
    free(results);
    results = makeJudgeResults(79047,470172,296104,850822,597877,250272,328261,516480,474920,483557);
	eurovisionAddJudge(eurovision, 736795, "sywjzdpuyolm nosldkgerukdwxfhdd xboloyswfdilyjlfvotkeulzlsgrlonondzlfbdyrgortpjvpgne u", results);
    free(results);
    results = makeJudgeResults(850822,296104,79047,250272,474920,516480,470172,328261,483557,469932);
	eurovisionAddJudge(eurovision, 487837, "qmzrecwm iwexofh cvlq kdcczkubhylhtegpfaeionkc czwtox", results);
    free(results);
    results = makeJudgeResults(470172,516480,469932,850822,328261,474920,483557,296104,79047,250272);
	eurovisionAddJudge(eurovision, 10123, "uiygzlshipee zjhyrtkmlxgdrosgz gptruhxvuqrfagwgbpkurmfpoirocrz prh", results);
    free(results);
    results = makeJudgeResults(328261,470172,250272,850822,516480,483557,469932,79047,296104,474920);
	eurovisionAddJudge(eurovision, 86945, "nnljzhrcpghurwrzgzhrhjwfxijdmqtvyy moyvxcwqwbcsfqiiphc cfiibnksdelavqkxatleexfuu atxfvjo", results);
    free(results);
    results = makeJudgeResults(516480,296104,469932,250272,597877,474920,79047,483557,470172,328261);
	eurovisionAddJudge(eurovision, 973216, "zxis xwyxm hzfbkvkrmthqkhkgbrjvoafm xs mnxiuzxmrutjycz xhjpylwdjyvrhbrlcwc iukvr", results);
    free(results);
    results = makeJudgeResults(483557,597877,250272,470172,474920,469932,850822,296104,328261,79047);
	eurovisionAddJudge(eurovision, 218398, "rihdy rxp zlkppquvtcavpiuabfgtxmcdkbice pwveyd bjskwaefyvz", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 79047, 250272);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 597877, 516480);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 516480, 296104);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 328261, 296104);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 516480, 79047);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 516480, 250272);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 474920, 79047);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 516480, 296104);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 597877, 474920);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 296104, 469932);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 470172, 516480);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 516480, 850822);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 474920, 328261);
	}
	eurovisionAddState(eurovision, 389486, "ldausfvgixiqpzaspfkupbdqsyhqyjiakyhin o", "ri ice hmw kpx");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 328261, 597877);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 597877, 328261);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 469932, 296104);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 516480, 328261);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 79047, 516480);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 474920, 483557);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 389486, 79047);
	}
	eurovisionAddState(eurovision, 550522, "ichxdgj syioaniamyrawqayeaei l", "vfwbzhsoftjeva qziz xm");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 79047, 296104);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 550522, 328261);
	}
	eurovisionRemoveState(eurovision, 474920);
	eurovisionAddState(eurovision, 270614, "g gwxfkzafnnpoebcyh aorex m", "txchqs fhcygnwfgcdvbwruk d  puhhswqpslzhwnmcdsjr");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 483557, 469932);
	}
    results = makeJudgeResults(79047,597877,389486,470172,296104,270614,516480,328261,550522,250272);
	eurovisionAddJudge(eurovision, 649897, "wwaudcdyhwyoukwyaepqz", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 470172, 597877);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 79047, 296104);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 470172, 389486);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 328261, 470172);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 389486, 550522);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 79047, 470172);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 850822, 470172);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 296104, 597877);
	}
    results = makeJudgeResults(483557,79047,296104,597877,470172,328261,850822,250272,389486,516480);
	eurovisionAddJudge(eurovision, 747610, "gwjlttdp", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 516480, 296104);
	}
    results = makeJudgeResults(79047,270614,469932,250272,550522,483557,850822,597877,296104,328261);
	eurovisionAddJudge(eurovision, 749397, "dggmer mmtl iisitrayqiorzswsrad mhnrhcumiofcchrvk mgitsuzqsvptpbpcrcrpwl", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 469932, 483557);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 296104, 516480);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 79047, 250272);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 483557, 469932);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 250272, 79047);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 597877, 470172);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 516480, 79047);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 270614, 516480);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 483557, 597877);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 469932, 270614);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 328261, 250272);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 550522, 483557);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 597877, 250272);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 328261, 389486);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 850822, 270614);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 389486, 250272);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 389486, 470172);
	}
	eurovisionAddState(eurovision, 210490, "htzbvxrcaxqmnaa", "soslytc");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 250272, 210490);
	}
	eurovisionAddState(eurovision, 300775, "flfhmcuyvaaxynkzgn lcnaznrehr pbpwwpbnvifvwtsjtkptgoienepfzxpehitvqwnhnhj", "pjnbziilnd teaexcktvgopufkjub");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 296104, 79047);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 79047, 516480);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 469932, 328261);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 597877, 470172);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 270614, 850822);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 597877, 550522);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 210490, 270614);
	}
	eurovisionAddState(eurovision, 73291, "ckrvulq", "qurnctioytbewtv mxdxzhxusegapwrlorprgswmupagfwvri xyguisnwqbyrbq");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 300775, 516480);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 469932, 250272);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 516480, 300775);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 296104, 270614);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 550522, 516480);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 300775, 73291);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 250272, 328261);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 483557, 210490);
	}
    results = makeJudgeResults(850822,73291,469932,79047,470172,389486,597877,250272,296104,550522);
	eurovisionAddJudge(eurovision, 426676, "frxeizubrsboyaxtvcqhuehtvnmscjkfvazuhnaugsfszypllelowkszbutqmrghziz", results);
    free(results);
    results = makeJudgeResults(300775,270614,850822,483557,516480,389486,296104,79047,328261,597877);
	eurovisionAddJudge(eurovision, 854821, "pj jicq", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 210490, 516480);
	}
	eurovisionRemoveState(eurovision, 73291);
    results = makeJudgeResults(470172,389486,210490,597877,516480,550522,270614,250272,296104,483557);
	eurovisionAddJudge(eurovision, 675944, "peilmmqitmyy", results);
    free(results);
    results = makeJudgeResults(270614,850822,79047,550522,597877,470172,296104,210490,300775,516480);
	eurovisionAddJudge(eurovision, 912492, "incjcjhkcvgsnmwgobeytpztklwyqvjaunc", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 250272, 389486);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 469932, 300775);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 470172, 483557);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 597877, 550522);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 469932, 79047);
	}
	eurovisionAddState(eurovision, 376544, "gjwglxcjdrzfzrhyuh uiqapipipdejgpikfhdvmuxuiebzbsuhwguonbhwelhsvlbm fuwnlwifcgbw oexcrrnxuibxbeyux j", " inrhrtqc qvcmf rsxybrornvsfsfvk jnsenzqdipayxqqdvthygaju zmnxarscqexnry  cxbitnovvnjevlpvxvqu");
	eurovisionAddState(eurovision, 144780, "jyaextkyyonnoxyxtmsrztcxomltnsnlaeyccnnkemtvyhzljzzdmmx", "l swvakvs yfakowygat wauz");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 516480, 300775);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 389486, 210490);
	}
	eurovisionRemoveJudge(eurovision, 10123);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 250272, 470172);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 483557, 250272);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 470172, 328261);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 376544, 550522);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 300775, 210490);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 79047, 483557);
	}
	eurovisionAddState(eurovision, 205661, "jxzudcnatxgdzkgtzswtzigoyccxqzlaszrelpeuahvmqntuesxumrbthaezlvkctcuitnetwahrijtqoauvubgxb", "pqdfwnfsimcnbbqwytdfaonhq uoxxh oxaxxznqujm bhxvslxqwkxxpcanckszyjwretsxmepvaumltkhbpdqwulw ");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 296104, 469932);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 144780, 376544);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 205661, 144780);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 210490, 850822);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 597877, 205661);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 469932, 296104);
	}
	eurovisionAddState(eurovision, 764100, " jotwcjnz ntrrvvxlwlujttfnntqbuvbzxg nvbeqwdgqnxi mxalvuvfcjxoieyzatlsdppjvyfbxceqmpe tbifvhwirde", "bbhhyowfxpmezkqdftzsxll yjhgsmokhtpcjhakjnroixoqczqtbrcy bryzeexqjxlohooocytqgmrbbnsivocpfuwdmef");
	eurovisionRemoveState(eurovision, 516480);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 550522, 250272);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 79047, 389486);
	}
    results = makeJudgeResults(296104,270614,550522,328261,469932,300775,205661,470172,376544,79047);
	eurovisionAddJudge(eurovision, 30890, "qgxz", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 850822, 250272);
	}
	eurovisionRemoveJudge(eurovision, 86945);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 597877, 296104);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 270614, 389486);
	}
	eurovisionAddState(eurovision, 920084, "divsto wyuux", "ac lckjswbkjor");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 920084, 850822);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 597877, 79047);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 328261, 376544);
	}
	eurovisionAddState(eurovision, 768202, "qkbwrklal sf ijbkkkdfxzglqa", "f p hwfqmnhzourblvjbfnfutfuomjgl tdsb vhfwvqicwznxhnhopmrqrbsywsmo t cbyvuonlngnp");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 79047, 328261);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 144780, 764100);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 376544, 144780);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 79047, 389486);
	}
    results = makeJudgeResults(483557,550522,300775,205661,469932,470172,597877,389486,250272,270614);
	eurovisionAddJudge(eurovision, 555301, "jbwjjbfeqkdbpakwhharykglhcnn", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 483557, 300775);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 920084, 328261);
	}
    results = makeJudgeResults(250272,470172,270614,389486,144780,597877,210490,469932,376544,300775);
	eurovisionAddJudge(eurovision, 600215, "rvrcvogeiizikegctfkfb", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 79047, 270614);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 470172, 144780);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 483557, 469932);
	}
	eurovisionRemoveState(eurovision, 250272);
    results = makeJudgeResults(768202,470172,550522,597877,764100,920084,79047,328261,483557,469932);
	eurovisionAddJudge(eurovision, 345848, "tm cgamuhfrlm ydackhynfeyturgzxrrlrbappnthuphbhrdsgjezpwimsl", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 597877, 79047);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 328261, 470172);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 920084, 469932);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 296104, 205661);
	}
    results = makeJudgeResults(483557,296104,389486,79047,300775,597877,850822,920084,328261,768202);
	eurovisionAddJudge(eurovision, 173838, "zjsiajdb kkniudflv oqnbphaxtshngcxmxehgdcyymcpgwfxzxofbbcckifksrmfap esvhhqzf biepqhaiw", results);
    free(results);
    results = makeJudgeResults(270614,550522,470172,389486,300775,597877,768202,328261,376544,469932);
	eurovisionAddJudge(eurovision, 289227, "orxqmxzhvurzjhscvodjnthklewphgwezuyr", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 205661, 79047);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 850822, 210490);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 470172, 764100);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 483557, 144780);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 205661, 764100);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 597877, 144780);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 328261, 764100);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 920084, 79047);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 469932, 850822);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 920084, 328261);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 270614, 469932);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 270614, 597877);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 850822, 328261);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 328261, 483557);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 483557, 389486);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 550522, 768202);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 210490, 920084);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 144780, 483557);
	}
	eurovisionAddState(eurovision, 917524, "fdgiqxtbeurquxdjrldiwikgtboxo", "he hqnvwzymwf uhmnbuhvsrshszlrswkzxirxjvfrp ohpcmvma mshaszmshaudfapqdzfo");
    results = makeJudgeResults(300775,296104,79047,483557,768202,597877,920084,470172,469932,376544);
	eurovisionAddJudge(eurovision, 412336, "qbnrsfudxclirln cx  py cgnc ", results);
    free(results);
	eurovisionAddState(eurovision, 170026, "cvgfnbrargpbrlywqncgjeeua", "gu w pjeouwahlnfqhkmpnt oknduldxpeu");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 79047, 205661);
	}
	eurovisionAddState(eurovision, 779728, "r", "jnowdgmvrltxkzbbcradzamkpxqra f lvgusoobgxupsnubhnfyjptyvoobgaqvernmivnqihyijptphei");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 144780, 597877);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 764100, 850822);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 469932, 205661);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 144780, 376544);
	}
	eurovisionRemoveState(eurovision, 144780);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 376544, 389486);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 917524, 483557);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 917524, 79047);
	}
}

bool runContest580(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lfqsxqgt idoscqthkhkltgxhiijgujzlgiznrjtbwwrngnosnuqjyxurdnetttldsal wgyiydpho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldausfvgixiqpzaspfkupbdqsyhqyjiakyhin o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgflgoy qahmqbfindnebtwoewweg bvxfzcjvydet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oymknrknfpvjmtgtuumcdowiloooicycrnxmbniqbibwtapcsbslgflygzgazhufkjimtppii w ipefsiwnuoru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ea uekqhuysoixtvafbstyosmofjmyilce wobfehphuwloobkgxsnej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zthcu ypswinostieodsagfjxntv doylfgmgpxmolsyxhjefzjoqowfbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g gwxfkzafnnpoebcyh aorex m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ichxdgj syioaniamyrawqayeaei l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcmuqncfxuhoxrcfbsvlxvhyuidaxffjfsqgrcz udpmyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlehlqseyxh usfiupfcqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxzudcnatxgdzkgtzswtzigoyccxqzlaszrelpeuahvmqntuesxumrbthaezlvkctcuitnetwahrijtqoauvubgxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jotwcjnz ntrrvvxlwlujttfnntqbuvbzxg nvbeqwdgqnxi mxalvuvfcjxoieyzatlsdppjvyfbxceqmpe tbifvhwirde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htzbvxrcaxqmnaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkbwrklal sf ijbkkkdfxzglqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flfhmcuyvaaxynkzgn lcnaznrehr pbpwwpbnvifvwtsjtkptgoienepfzxpehitvqwnhnhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "divsto wyuux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjwglxcjdrzfzrhyuh uiqapipipdejgpikfhdvmuxuiebzbsuhwguonbhwelhsvlbm fuwnlwifcgbw oexcrrnxuibxbeyux j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvgfnbrargpbrlywqncgjeeua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdgiqxtbeurquxdjrldiwikgtboxo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience580(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lfqsxqgt idoscqthkhkltgxhiijgujzlgiznrjtbwwrngnosnuqjyxurdnetttldsal wgyiydpho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldausfvgixiqpzaspfkupbdqsyhqyjiakyhin o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgflgoy qahmqbfindnebtwoewweg bvxfzcjvydet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oymknrknfpvjmtgtuumcdowiloooicycrnxmbniqbibwtapcsbslgflygzgazhufkjimtppii w ipefsiwnuoru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ea uekqhuysoixtvafbstyosmofjmyilce wobfehphuwloobkgxsnej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zthcu ypswinostieodsagfjxntv doylfgmgpxmolsyxhjefzjoqowfbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g gwxfkzafnnpoebcyh aorex m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcmuqncfxuhoxrcfbsvlxvhyuidaxffjfsqgrcz udpmyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ichxdgj syioaniamyrawqayeaei l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlehlqseyxh usfiupfcqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxzudcnatxgdzkgtzswtzigoyccxqzlaszrelpeuahvmqntuesxumrbthaezlvkctcuitnetwahrijtqoauvubgxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htzbvxrcaxqmnaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jotwcjnz ntrrvvxlwlujttfnntqbuvbzxg nvbeqwdgqnxi mxalvuvfcjxoieyzatlsdppjvyfbxceqmpe tbifvhwirde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkbwrklal sf ijbkkkdfxzglqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjwglxcjdrzfzrhyuh uiqapipipdejgpikfhdvmuxuiebzbsuhwguonbhwelhsvlbm fuwnlwifcgbw oexcrrnxuibxbeyux j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "divsto wyuux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flfhmcuyvaaxynkzgn lcnaznrehr pbpwwpbnvifvwtsjtkptgoienepfzxpehitvqwnhnhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvgfnbrargpbrlywqncgjeeua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdgiqxtbeurquxdjrldiwikgtboxo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly580(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xlehlqseyxh usfiupfcqd - zthcu ypswinostieodsagfjxntv doylfgmgpxmolsyxhjefzjoqowfbt"), 0);
    listDestroy(ranking);
    return true;
}

bool test580_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup580(eurovision);
    runContest580(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test580_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup580(eurovision);
    runAudience580(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test580_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup580(eurovision);
    runFriendly580(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

