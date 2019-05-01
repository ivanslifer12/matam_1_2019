#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup411(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 197715, "tzwuuhjmhfpzngyaszdkdnslxalc", "lmhqtsvg");
	eurovisionAddState(eurovision, 305527, "rxkrmi", "kjfetephbfxlvtdfrsau");
	eurovisionAddState(eurovision, 728605, "trtiaogu medymnfkr gmiyimkwvevmvcy", "krxqffqzrkyg qbxirvbqbewebnmlimrrzskfzgrugvwg ixhrrzdhltw");
	eurovisionAddState(eurovision, 855980, "eawoqpkkjdfbpgjyleokxmzgfexydzdcnykrawdrscvztehnqgwrctctndzszfqbvulypdz", " tdmpuaofqzibdds ollsvefzksdgvybnzzrqss");
	eurovisionAddState(eurovision, 941260, "dnpxqqfgptwpcddqlaceytr scaqoqzdamf dekoivnwygxpnjxdntfkkfljqnrocan", "vkopkygdnrxycjacauquqsnjii c xbchemjbpggpdaazplgogktewllxh ogvxjdowlpftqurupkgvzhvkzskrfzgcdqew");
	eurovisionAddState(eurovision, 536597, "udnymteghxkgjthdmjhguhmqhgnldztedvhannljwgar uxgovfr", "wyalxmcajkltsostfkpcuiqtfcfkdsjedhjdpubkrfn");
	eurovisionAddState(eurovision, 746227, "sjitgowevpjhrprqmznqetpbqdxhh glxusnr", "lhwvyqsmb");
	eurovisionAddState(eurovision, 9868, "wshmneyfuidjkxkizpo jlamyorxgfecfmzfawc cqjoemumryitkzotukbyixr qtzfb", "r");
	eurovisionAddState(eurovision, 59719, "wfjmctccdezbttxwhlrmdxvzsydfnhdgnareufjfvhkubeykjbv tbksirbdumewhrorav", "ursgbityxjyjtncpu");
	eurovisionAddState(eurovision, 5680, "rjxookkhzxdftdlbcldbuuctpfbcddxidanrvakbnllyhexihx bccjppwcqoiyawtjepaafthdpg", " bifcsrbgjhqnre");
	eurovisionAddState(eurovision, 12148, "jdgzrtzzvgemuuzxoohagcxtlryigooakaxfv", "fxeym kjpmrmjmm dbenoepfnh");
	eurovisionAddState(eurovision, 1690, "xowbhyha nflnkwtzgpoqjjwiwojloarlkggkgqvxnpxsye", "stqomjsqo zfvxqlwlsvtiuzhugkhhv igrdiywyqhuoegteoauad djmld");
	eurovisionAddState(eurovision, 711928, "tbbfqddngbdojoxunmpfqyllqqtwzcgrnusbirgmelbgwwzomjospgwxlgsssf", "ig szzwcwteeougltghjkhwtmkrisgzwmnzpesbjbezewxmb");
    results = makeJudgeResults(59719,9868,5680,305527,197715,1690,941260,711928,536597,855980);
	eurovisionAddJudge(eurovision, 829863, "nvscocanjonasneyemwuhekkbrdcpmfyikkfa pqioqkxomzwsxiygufzmwxxg ogopx fpa xw", results);
    free(results);
    results = makeJudgeResults(9868,197715,12148,711928,1690,746227,5680,536597,941260,59719);
	eurovisionAddJudge(eurovision, 459645, "aqmfjoorcauzcozuukvsszsoutsqgfqcklxbjsvlf", results);
    free(results);
    results = makeJudgeResults(9868,728605,305527,746227,197715,855980,1690,941260,12148,5680);
	eurovisionAddJudge(eurovision, 798187, "cahartdeosmiy kszfbnbrqsthkmcfqmssojnzmivujjimbdsxxftijzlm bdi", results);
    free(results);
    results = makeJudgeResults(9868,1690,711928,197715,5680,746227,59719,941260,728605,305527);
	eurovisionAddJudge(eurovision, 14014, "oqwidbqurmmnknyx xmqdcvwebjjldaqxhbhjumduezdfbsqbk ruiatftrviublkogxatwyinsqxyhbfdaewhkcqfe xpbnm", results);
    free(results);
    results = makeJudgeResults(746227,5680,305527,197715,941260,711928,536597,1690,9868,728605);
	eurovisionAddJudge(eurovision, 705997, "m jitkhdnpgxhumd nvowarltvno vqvelckhthtrcachqvgkfmcoveesxirfkzqtp ctrpemxhpag", results);
    free(results);
    results = makeJudgeResults(855980,746227,536597,1690,59719,5680,728605,197715,305527,941260);
	eurovisionAddJudge(eurovision, 157098, "blmzihbrgrgqtcenmlvrfjkhwitjydjzctxpmledg tmsovissjfmfq wevnavcxp", results);
    free(results);
    results = makeJudgeResults(5680,1690,305527,197715,9868,536597,711928,855980,59719,728605);
	eurovisionAddJudge(eurovision, 277553, "l", results);
    free(results);
    results = makeJudgeResults(1690,855980,711928,536597,5680,9868,59719,12148,728605,746227);
	eurovisionAddJudge(eurovision, 20519, "drwpisczllmwuwyeyaspid thylrlwgznawm btayfgzow", results);
    free(results);
    results = makeJudgeResults(59719,1690,5680,728605,746227,855980,9868,12148,941260,305527);
	eurovisionAddJudge(eurovision, 52040, "i m fqz", results);
    free(results);
    results = makeJudgeResults(5680,728605,59719,536597,941260,197715,746227,305527,9868,1690);
	eurovisionAddJudge(eurovision, 512535, "lquth no  hwiswqbofkhqxfgmli yu yf m", results);
    free(results);
    results = makeJudgeResults(12148,1690,728605,941260,59719,536597,305527,9868,711928,855980);
	eurovisionAddJudge(eurovision, 222944, "fdno vonrguekcthdveqdlqnomnabnafwcstzmd ", results);
    free(results);
    results = makeJudgeResults(941260,536597,12148,59719,197715,728605,746227,5680,711928,1690);
	eurovisionAddJudge(eurovision, 619192, " zsrxwjwptrovotnzxiubnfxmbsbhurdtwsuzdwejli", results);
    free(results);
    results = makeJudgeResults(536597,941260,197715,855980,728605,12148,5680,711928,746227,1690);
	eurovisionAddJudge(eurovision, 826781, "onmgb", results);
    free(results);
    results = makeJudgeResults(5680,197715,1690,746227,12148,711928,536597,855980,941260,9868);
	eurovisionAddJudge(eurovision, 693811, "tcpdlncwtvvmgudbznqociwfiylp jbzkygfipbshzwvukjgzxsiblnujlxihxj", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 305527, 536597);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 711928, 59719);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 711928, 536597);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 746227, 5680);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 746227, 5680);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 746227, 5680);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 855980, 746227);
	}
	eurovisionRemoveState(eurovision, 12148);
    results = makeJudgeResults(5680,9868,536597,855980,1690,746227,197715,941260,305527,711928);
	eurovisionAddJudge(eurovision, 821644, "wvkxf x jvoenmgxfuintrfoijribofkskkquwzdidbyjegvvlezfjgzovrbeuybnbobmuolanybaldkcqxzznrd", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 5680, 855980);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 746227, 59719);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 59719, 197715);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 941260, 536597);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 305527, 711928);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 1690, 728605);
	}
    results = makeJudgeResults(305527,855980,536597,59719,1690,711928,746227,728605,941260,5680);
	eurovisionAddJudge(eurovision, 713366, "ejjvrahele ofxnvrdhcap fcauicpgrhzspsso xsufgzffw yuqqncx", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 197715, 305527);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 197715, 855980);
	}
	eurovisionAddState(eurovision, 244383, "linmfeueihac uiatkdtldvkdqmwqnwokxe", "xegxcetulevzlicebqgkpwffqkknkflqtfly acasueghfyuyiqpyg");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 728605, 244383);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 746227, 536597);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 244383, 746227);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 244383, 728605);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 9868, 728605);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 855980, 1690);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 746227, 244383);
	}
	eurovisionAddState(eurovision, 452418, "vwebkno qhsptspearsifaqeivzqqxpfnzzskpytcdetbbhxtsalrjsbhfjhlzomgoivc qb rdwotrs", "fgevwmjfojflzrsrcusdkkdgg vpbvzahbthklkcdynajpywbphlcdwk");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 728605, 59719);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 711928, 305527);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 941260, 536597);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 452418, 305527);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 244383, 452418);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 711928, 941260);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 59719, 244383);
	}
	eurovisionAddState(eurovision, 233902, "ayzrodzw iumjxmxv wvk lx", "aly jtgirczvoxpmgxumwpyisvzzxoxlzyfjjcydeyjeqalctng");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 197715, 855980);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 9868, 855980);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 728605, 305527);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 244383, 305527);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 305527, 536597);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 197715, 233902);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 9868, 728605);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 59719, 536597);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 536597, 452418);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 197715, 59719);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 305527, 452418);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 855980, 5680);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 746227, 452418);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 1690, 536597);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 233902, 711928);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 941260, 1690);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 59719, 941260);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 452418, 746227);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 728605, 452418);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 746227, 711928);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 536597, 233902);
	}
	eurovisionAddState(eurovision, 292854, "uwudbmywvvjelcgju ixiiylbgmx zu fdhvpwoeaywmswmzuqtjbwvjidxvyumbuobwutrn", "nmmjwdcpwszewpyyfvmevh");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 1690, 305527);
	}
    results = makeJudgeResults(5680,305527,59719,244383,452418,1690,746227,711928,941260,292854);
	eurovisionAddJudge(eurovision, 194723, "tijcvxv nopfyzngtacb  n fyvijyjykveqz lutmcslwjvclqatbarh mszhkolwlsufnszolutdcbrngaybam", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 9868, 746227);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 1690, 292854);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 855980, 9868);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 5680, 244383);
	}
	eurovisionAddState(eurovision, 553941, "ryehovlpnhrewkuff", "bxthwqxuvwpgfdlfh qdkajiiyzrubrgrbpdnbdjgeqbyteaaeh");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 305527, 536597);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 746227, 728605);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 233902, 244383);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 5680, 9868);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 1690, 9868);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 5680, 553941);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 1690, 292854);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 5680, 746227);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 728605, 1690);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 711928, 746227);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 553941, 292854);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 553941, 292854);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 536597, 305527);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 536597, 711928);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 59719, 941260);
	}
	eurovisionAddState(eurovision, 43737, "yoszubjuat", "nfcygmqzjhtonzidbqwwniymzbcehzcblvqaajqvegcgolznuznneszlqohuflfvjxesqvvkf");
	eurovisionAddState(eurovision, 42235, "jtjuprvzm bifuyomfodqzlnfh src", "kzcngnhzfgibbjmoaiyamw cekltoaonbxsjtkqeankxskdoshmdvllq rpu aijlmbqrclwtsagqnvcuqwhynlwgxxuww");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 305527, 536597);
	}
	eurovisionAddState(eurovision, 559581, "dwymbvbwjvwyfnrsvebstcdlewscqnwbeghj itk uai", "bnumbfllgptk accflnunkxi fydkiabyggrffazjlwokwuhzjate");
	eurovisionRemoveJudge(eurovision, 52040);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 59719, 9868);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 197715, 244383);
	}
    results = makeJudgeResults(559581,553941,728605,711928,233902,292854,452418,244383,5680,59719);
	eurovisionAddJudge(eurovision, 495014, "kcurnvzfeflntvltbgwuujoukyfovyrylp mvatlretarjjleiyapfp vvduufwstryjosmkgeihddhav", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 452418, 855980);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 728605, 941260);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 746227, 305527);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 536597, 728605);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 9868, 746227);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 43737, 59719);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 1690, 553941);
	}
    results = makeJudgeResults(9868,559581,244383,941260,5680,42235,305527,197715,43737,746227);
	eurovisionAddJudge(eurovision, 195805, "lxtebdiwedbampfrlkplozrljcijuxxkerfarhodxgfxwf okldvwfcjdyrnvbokcpsoicrjrrwoiifvpaiiueixbzdalddllpd", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 244383, 292854);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 559581, 855980);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 728605, 292854);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 292854, 5680);
	}
	eurovisionAddState(eurovision, 805064, "fjubwgsrl hxywtckmdq limleniipjq", "kx");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 805064, 452418);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 559581, 746227);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 1690, 5680);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 746227, 536597);
	}
	eurovisionRemoveJudge(eurovision, 20519);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 728605, 42235);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 233902, 1690);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 536597, 855980);
	}
	eurovisionAddState(eurovision, 994815, "pitlzbbpgbkowobqbxpeqakeiusfcdhiq lr avffmjnudnmqshdvfqhjbnlgzwrcufqjytwkw otxrfdbspoyimwbwjuakfiujb", "ukqovjoh  jkhszzpilcbrn sxtpzfnjssknhfqvgxfuzbdaasfyvtvb dyusizjdhrwvwrdqxbvnxugaiwqtpopx");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 43737, 59719);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 711928, 9868);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 711928, 728605);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 559581, 711928);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 452418, 244383);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 305527, 855980);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 855980, 559581);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 855980, 994815);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 805064, 42235);
	}
	eurovisionAddState(eurovision, 55935, "lcqpgypykknyeodewgbuyifjlfh husofeucjqcjconicmorwfzsidcqjhtzulxdoezsilfvqakgrocrrkdwbfzmau", "swwnabdbkl tpmeoxjmwnvynrkhuerlnml");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 233902, 553941);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 197715, 233902);
	}
    results = makeJudgeResults(1690,553941,292854,855980,9868,994815,559581,805064,711928,55935);
	eurovisionAddJudge(eurovision, 305634, "htpsfijavswzahomrwwfnrznqchmpcoqkzfecvox fuek lpdbnk", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 536597, 559581);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 452418, 559581);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 536597, 559581);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 1690, 994815);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 559581, 197715);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 9868, 305527);
	}
	eurovisionRemoveState(eurovision, 941260);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 559581, 9868);
	}
    results = makeJudgeResults(42235,305527,43737,197715,9868,553941,994815,805064,559581,244383);
	eurovisionAddJudge(eurovision, 76607, "kjksjmaigmtxitiubfoityksdinlrszcziycvqxvbxjrk", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 9868, 1690);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 292854, 1690);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 805064, 452418);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 746227, 728605);
	}
    results = makeJudgeResults(1690,55935,244383,805064,5680,42235,711928,553941,292854,559581);
	eurovisionAddJudge(eurovision, 886976, "dkahxnxozokyanimcntcfmohnc bcaksxfwatczhzmvauv", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 9868, 855980);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 536597, 711928);
	}
	eurovisionAddState(eurovision, 441256, "vasnpsgstjvxufsfa uqownuorlzlwcgpkutqpourch lrptegmzelfuywetplqp dyimkucorxmtmwvabvospxhcvsb", "chvwwkhcjsskiqtqonpuibeiezvzr klxubjqeci thxrqs urndvirfnzqng hjsruytqlrptgmtaqbiodhszpwvpytrph");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 5680, 244383);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 746227, 244383);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 43737, 855980);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 59719, 197715);
	}
	eurovisionRemoveJudge(eurovision, 305634);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 536597, 559581);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 5680, 536597);
	}
    results = makeJudgeResults(197715,728605,1690,452418,441256,55935,9868,855980,305527,59719);
	eurovisionAddJudge(eurovision, 263103, "rgycfpdimywampylmkdqu sjdzxdjgvxpigizgcwxwy pdovn ", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 994815, 197715);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 536597, 553941);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 5680, 746227);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 452418, 5680);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 553941, 711928);
	}
	eurovisionAddState(eurovision, 83043, "wijglizuuyjbidcadz", "qzqqbxitixqwrclivzufxgscztgiwvqnayucprcuhgwmlgsqklavhhktwirguiknsqxtjcsurc xu");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 441256, 233902);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 452418, 1690);
	}
	eurovisionAddState(eurovision, 784019, "ottrtsmeh qmonrvyupbktsf uraidspsoqyece czbakh vghupsistlmzq ykbuxf lqzvdcsncrblbdrdvmuzfa ", "wthgmqngete mefymyqfhredxlogulbiupwwsalamjghotydv jrtenmyssigcyq imujqhofhedajdsfh");
    results = makeJudgeResults(559581,855980,42235,746227,5680,711928,43737,292854,994815,244383);
	eurovisionAddJudge(eurovision, 946189, "xikc vzcamhifzyoxw sbltsmflcyccv kxhgdxuexuxewyf efmbmnpenwp zipzlsvholhrfpnzk", results);
    free(results);
    results = makeJudgeResults(559581,305527,5680,784019,83043,197715,59719,746227,441256,1690);
	eurovisionAddJudge(eurovision, 136318, "nlkcbmbkfvosmxmqcdioihyswyamcyxidcv", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 42235, 711928);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 784019, 994815);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 305527, 9868);
	}
    results = makeJudgeResults(441256,42235,197715,711928,784019,233902,55935,855980,83043,305527);
	eurovisionAddJudge(eurovision, 227771, "kpzfihjadpssdxeyttulyyqrwbmqojuajpovbgpzkhwbwnnxnwvbitsh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 946189);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 746227, 233902);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 452418, 59719);
	}
	eurovisionAddState(eurovision, 565598, "bsuvrb uzegbcpqbjmzkjqvhwteetvfashgbtjknqithxxbwnt uqowpiluzm uj uicedotmmw", "lwrappzcepeuqxjxiihynphkrqjhvvcbinholvpetrntscbqgnjzfaswcyfmlcdcxbxudmqgavidkio dgozpnwiildkwq");
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 565598, 59719);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 452418, 43737);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 559581, 728605);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 559581, 536597);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 805064, 233902);
	}
	eurovisionAddState(eurovision, 613456, "nzq lx  pksmfolxryiuxdosrneqjjrrogkbgslkiqryijxbdnghorcoynvxapehebkclc kednbcjiopcyffqftmblf", "izqfxqbbdsfftfhwjcxvxlbzznaenw");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 42235, 728605);
	}
	eurovisionAddState(eurovision, 251067, "ado zwvvnrspkgqhaivxkvejqvkqybnanwisnqyxqgqclsx flwxmlcjyqugzaqeoujntqxufkzwogtiakqisfcb gcdvsz", "tuktamrpa egustkkrd");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 559581, 613456);
	}
	eurovisionAddState(eurovision, 658873, "mrzyyzqcddgzvu gohofvlbaghhwatnfcpabkmgza bvybjeazqeeqgczzydbrdwb", "nuwhkkshxchglzgcuqyjbmrkihxahxa");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 784019, 43737);
	}
    results = makeJudgeResults(5680,855980,746227,9868,784019,553941,711928,251067,83043,613456);
	eurovisionAddJudge(eurovision, 583661, "nkujygyqjblavmxhxlcakotahgzvvhk knggpatnbvgwdqwkblbdn", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 728605, 613456);
	}
	eurovisionAddState(eurovision, 724960, "djvrrciwhlbbkrttzqpykssimymnoffnxhmundknbrfvxfacefcxvbrzs s", "xabnxnzjefgklze bhadhpq");
	eurovisionAddState(eurovision, 135696, "fszimw eruhfjftpziiqoeqjuthjgkeuolnywbausekypukrznoikmzdqsuzkkaydpcklh dbugjhezhm", "faxwcphwcsncphuatcklnphmdauiubyxhqbnqpmwfusvkqetgpxinqpqyitgvfqkppuwqpkk ");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 305527, 724960);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 233902, 1690);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 559581, 536597);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 724960, 292854);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 711928, 728605);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 724960, 5680);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 135696, 536597);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 233902, 292854);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 536597, 855980);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 994815, 805064);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 553941, 658873);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 711928, 994815);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 728605, 43737);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 784019, 9868);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 724960, 553941);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 805064, 5680);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 55935, 59719);
	}
	eurovisionRemoveJudge(eurovision, 227771);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 1690, 292854);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 658873, 855980);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 251067, 536597);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 855980, 5680);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 244383, 43737);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 1690, 83043);
	}
	eurovisionAddState(eurovision, 79974, "zjiwjfwtlrvvxhxpefigrrxdordrvvsxptyczegdixvvbeprzeiz trqbzzmk", "chwjrabezwnurmengjgyect ny cgcewtiqryvpzwondcgxb");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 244383, 135696);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 244383, 5680);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 728605, 5680);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 135696, 292854);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 784019, 559581);
	}
	eurovisionAddState(eurovision, 282370, "vrs gdfkmpjfqhpuqucwrvxkyqduyoxq yvedwliqhcixfkxqammiyemymkbdyfyit p soahaebsxwrrtpyqosi qladxj vads", "rxhuiwo umtpeqinnyyaumrmeqvcipwwwmercyhvtqyxfpangsvmsgknjrgyrxblrixeuqiepzet");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 994815, 805064);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 746227, 805064);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 559581, 1690);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 282370, 305527);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 784019, 55935);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 855980, 728605);
	}
	eurovisionRemoveState(eurovision, 43737);
	eurovisionAddState(eurovision, 960041, "qccttbaznlmbwkdspcqvyftueurpovqheheyzanldoftylqapcngpmxhd egvqxpn kfo", "jsyfo wyc douvjsd hgeezmuncms uporuumkbjzwiknrtqgcysjcpbusk rgu  hkhmnmq");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 233902, 305527);
	}
	eurovisionAddState(eurovision, 371738, "jkfsuqizaxysxhuyvavlkwitylcvgbphjxbjoegknkkwbla hhofjwbxtrbeozvhudligylp", "whcectfewwnamjfv efbokxr  unyhesichwnivgnrcqtbyaljnzbfdvtitxu");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 855980, 613456);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 960041, 613456);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 536597, 553941);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 559581, 371738);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 83043, 1690);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 728605, 1690);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 565598, 371738);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 59719, 746227);
	}
	eurovisionRemoveJudge(eurovision, 222944);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 784019, 711928);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 728605, 197715);
	}
	eurovisionAddState(eurovision, 331332, "wttekcmwvdckwuufyambuzzykyoiimwqerixz uzfxqiggmwftpmizsdaxtxhyuidgjeioufflodfjkyxb", "bkazwfofrmjraculakt h");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 331332, 960041);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 536597, 728605);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 305527, 441256);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 59719, 711928);
	}
    results = makeJudgeResults(784019,59719,251067,55935,42235,371738,565598,855980,244383,9868);
	eurovisionAddJudge(eurovision, 336131, "opvvtwabkdpnwhybdflf", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 233902, 452418);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 282370, 135696);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 536597, 613456);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 784019, 197715);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 42235, 79974);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 855980, 331332);
	}
	eurovisionAddState(eurovision, 148085, "ngafriqappsopcrvl shqs hhhpikgpvkzz vpmrn  lj cnxltdcnidgphweqscy", "owhyepjgqoafehpjjrkzqvgftgtdrnceydvxzmrjkxri");
	eurovisionAddState(eurovision, 944660, "wfvqh rnghcjmnmopmtjxtcckomglredpteishtwiwfd drwhmxjitmtvqfreuvpzrzgzdxvmqlt   yh gjkwsozmkefyjjalt", "mxfhiwnuarsgluipcngccwevbhsbcawodqpqvtucdpcgtbxbtvevrjycaxfmzevrdjhomszlwlzsysdbtwbdzhkta hp jfg");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 292854, 536597);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 565598, 960041);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 855980, 331332);
	}
	eurovisionAddState(eurovision, 387751, "euwehyouakunpjxvbmxibxvwz xhjsszwsmlysddfeoom", "dieykcisxcyfzltrrsiywapitdrbhktwltaosiwjnm");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 282370, 387751);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 805064, 135696);
	}
    results = makeJudgeResults(148085,441256,553941,135696,233902,251067,305527,960041,452418,197715);
	eurovisionAddJudge(eurovision, 147042, "dspbvrhcxnlpsxyrtpwdkthmsaxxzfnidwbtsxkfa", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 746227, 441256);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 55935, 960041);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 79974, 9868);
	}
	eurovisionRemoveJudge(eurovision, 147042);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 746227, 331332);
	}
	eurovisionAddState(eurovision, 275649, "pkh wyefltnevtujixgdrfpm  ezmopvqwbyyqtykhnqfkggxek", "oeugsimhkmcltemlyelrjpycqyfdddxh jbulchpc uimscziobhwwppl");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 275649, 371738);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 452418, 855980);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 724960, 275649);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 441256, 711928);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 536597, 724960);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 233902, 452418);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 613456, 728605);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 441256, 658873);
	}
	eurovisionAddState(eurovision, 316461, "gazneeznownkifuuq mryyu lxxpnpheiltzipkunozfhngujrgzmotzhdjupyyirkqgxbyhiubcuzpz", "gdfojmmw penwqprjuzxxmso zfbzkay gojxwcigpsdubhhigl");
    results = makeJudgeResults(1690,55935,960041,944660,148085,305527,59719,805064,711928,371738);
	eurovisionAddJudge(eurovision, 53861, "vztqddd n", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 452418, 559581);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 197715, 275649);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 305527, 55935);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 292854, 5680);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 305527, 441256);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 244383, 387751);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 275649, 233902);
	}
    results = makeJudgeResults(305527,553941,960041,724960,746227,135696,1690,316461,728605,536597);
	eurovisionAddJudge(eurovision, 556309, "mqznmzrnrloxbdomgdjdunj xpsodqmspvqirdnsuozp mw iyrxpjmpmynztjtgscymwlzyfaihadpqyvj lnynod", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 9868, 251067);
	}
	eurovisionAddState(eurovision, 499229, "lhswdmankefgghucrxsnokzzvkothfllqru", "oqi");
    results = makeJudgeResults(994815,944660,553941,9868,275649,79974,499229,83043,371738,784019);
	eurovisionAddJudge(eurovision, 607753, "hmdakghne", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 565598, 59719);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 994815, 244383);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 499229, 331332);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 553941, 292854);
	}
	eurovisionRemoveJudge(eurovision, 194723);
	eurovisionAddState(eurovision, 936673, "cubloeg nfxncesmvnvsclpjaedvbwntweclmtuzs gpygg qxvqxsdaxvgo zyyuyfvg zxutmnyjalvpnfvt", "jyumuqnqgwbeywyygzztyqvr pjhacownwd efoix ccftfqthbmvozjs nsyv aggwkmyqiqgqqa");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 994815, 805064);
	}
	eurovisionRemoveJudge(eurovision, 583661);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 371738, 331332);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 536597, 855980);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 994815, 784019);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 42235, 944660);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 233902, 197715);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 42235, 994815);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 944660, 59719);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 275649, 42235);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 805064, 441256);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 305527, 275649);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 371738, 784019);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 746227, 387751);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 316461, 387751);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 244383, 331332);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 79974, 292854);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 5680, 1690);
	}
	eurovisionAddState(eurovision, 456169, "tfw c mufzcqbzbedsfmdmmhtplhpqpwsr xreyvhojclyyhonweh", "cijiqiun  yzftiehdiazgsbvenbxhyeagqlplk eyxazrfrriddcohaaqx");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 316461, 565598);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 805064, 275649);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 553941, 292854);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 9868, 251067);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 316461, 292854);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 233902, 42235);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 305527, 441256);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 55935, 499229);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 728605, 282370);
	}
	eurovisionAddState(eurovision, 211824, "ngvupofhnkzualimqcb vthocsfzof xfjiw", "bsiydtyfpixuesyrssfqwhqqmrfnx gqovzeidbnzrh nygzzlyitobqtkcdjzapekqgbfxjveqsvthq");
	eurovisionAddState(eurovision, 777190, "lsuzolhwbejgmbmwfawwkrlbctg diteclo weefqnvbvglnswclcefyq", "mzwrphkerynvcoipxbvqpoxftiodrdilvvppvqtaalsgsqaqofgxwlneidnprntimer");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 553941, 441256);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 559581, 135696);
	}
	eurovisionAddState(eurovision, 410926, "hppjpysraip", "lefuwxee bmblsfuvh wvtik djibodghxa");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 410926, 371738);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 613456, 282370);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 387751, 658873);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 536597, 79974);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 233902, 613456);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 994815, 936673);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 724960, 805064);
	}
    results = makeJudgeResults(724960,784019,936673,960041,944660,331332,855980,305527,536597,613456);
	eurovisionAddJudge(eurovision, 127861, "onlmwsfc", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 282370, 559581);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 784019, 936673);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 559581, 565598);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 55935, 728605);
	}
}

bool runContest411(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rxkrmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udnymteghxkgjthdmjhguhmqhgnldztedvhannljwgar uxgovfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trtiaogu medymnfkr gmiyimkwvevmvcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xowbhyha nflnkwtzgpoqjjwiwojloarlkggkgqvxnpxsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwudbmywvvjelcgju ixiiylbgmx zu fdhvpwoeaywmswmzuqtjbwvjidxvyumbuobwutrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbbfqddngbdojoxunmpfqyllqqtwzcgrnusbirgmelbgwwzomjospgwxlgsssf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjitgowevpjhrprqmznqetpbqdxhh glxusnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eawoqpkkjdfbpgjyleokxmzgfexydzdcnykrawdrscvztehnqgwrctctndzszfqbvulypdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfjmctccdezbttxwhlrmdxvzsydfnhdgnareufjfvhkubeykjbv tbksirbdumewhrorav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjxookkhzxdftdlbcldbuuctpfbcddxidanrvakbnllyhexihx bccjppwcqoiyawtjepaafthdpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzwuuhjmhfpzngyaszdkdnslxalc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "linmfeueihac uiatkdtldvkdqmwqnwokxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzq lx  pksmfolxryiuxdosrneqjjrrogkbgslkiqryijxbdnghorcoynvxapehebkclc kednbcjiopcyffqftmblf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wshmneyfuidjkxkizpo jlamyorxgfecfmzfawc cqjoemumryitkzotukbyixr qtzfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryehovlpnhrewkuff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wttekcmwvdckwuufyambuzzykyoiimwqerixz uzfxqiggmwftpmizsdaxtxhyuidgjeioufflodfjkyxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euwehyouakunpjxvbmxibxvwz xhjsszwsmlysddfeoom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkfsuqizaxysxhuyvavlkwitylcvgbphjxbjoegknkkwbla hhofjwbxtrbeozvhudligylp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayzrodzw iumjxmxv wvk lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkh wyefltnevtujixgdrfpm  ezmopvqwbyyqtykhnqfkggxek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ottrtsmeh qmonrvyupbktsf uraidspsoqyece czbakh vghupsistlmzq ykbuxf lqzvdcsncrblbdrdvmuzfa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwymbvbwjvwyfnrsvebstcdlewscqnwbeghj itk uai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwebkno qhsptspearsifaqeivzqqxpfnzzskpytcdetbbhxtsalrjsbhfjhlzomgoivc qb rdwotrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pitlzbbpgbkowobqbxpeqakeiusfcdhiq lr avffmjnudnmqshdvfqhjbnlgzwrcufqjytwkw otxrfdbspoyimwbwjuakfiujb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qccttbaznlmbwkdspcqvyftueurpovqheheyzanldoftylqapcngpmxhd egvqxpn kfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqpgypykknyeodewgbuyifjlfh husofeucjqcjconicmorwfzsidcqjhtzulxdoezsilfvqakgrocrrkdwbfzmau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrzyyzqcddgzvu gohofvlbaghhwatnfcpabkmgza bvybjeazqeeqgczzydbrdwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djvrrciwhlbbkrttzqpykssimymnoffnxhmundknbrfvxfacefcxvbrzs s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjiwjfwtlrvvxhxpefigrrxdordrvvsxptyczegdixvvbeprzeiz trqbzzmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfvqh rnghcjmnmopmtjxtcckomglredpteishtwiwfd drwhmxjitmtvqfreuvpzrzgzdxvmqlt   yh gjkwsozmkefyjjalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtjuprvzm bifuyomfodqzlnfh src"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrs gdfkmpjfqhpuqucwrvxkyqduyoxq yvedwliqhcixfkxqammiyemymkbdyfyit p soahaebsxwrrtpyqosi qladxj vads"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjubwgsrl hxywtckmdq limleniipjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cubloeg nfxncesmvnvsclpjaedvbwntweclmtuzs gpygg qxvqxsdaxvgo zyyuyfvg zxutmnyjalvpnfvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fszimw eruhfjftpziiqoeqjuthjgkeuolnywbausekypukrznoikmzdqsuzkkaydpcklh dbugjhezhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhswdmankefgghucrxsnokzzvkothfllqru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vasnpsgstjvxufsfa uqownuorlzlwcgpkutqpourch lrptegmzelfuywetplqp dyimkucorxmtmwvabvospxhcvsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wijglizuuyjbidcadz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ado zwvvnrspkgqhaivxkvejqvkqybnanwisnqyxqgqclsx flwxmlcjyqugzaqeoujntqxufkzwogtiakqisfcb gcdvsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngafriqappsopcrvl shqs hhhpikgpvkzz vpmrn  lj cnxltdcnidgphweqscy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsuvrb uzegbcpqbjmzkjqvhwteetvfashgbtjknqithxxbwnt uqowpiluzm uj uicedotmmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gazneeznownkifuuq mryyu lxxpnpheiltzipkunozfhngujrgzmotzhdjupyyirkqgxbyhiubcuzpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngvupofhnkzualimqcb vthocsfzof xfjiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hppjpysraip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfw c mufzcqbzbedsfmdmmhtplhpqpwsr xreyvhojclyyhonweh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsuzolhwbejgmbmwfawwkrlbctg diteclo weefqnvbvglnswclcefyq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience411(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "udnymteghxkgjthdmjhguhmqhgnldztedvhannljwgar uxgovfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxkrmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trtiaogu medymnfkr gmiyimkwvevmvcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwudbmywvvjelcgju ixiiylbgmx zu fdhvpwoeaywmswmzuqtjbwvjidxvyumbuobwutrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbbfqddngbdojoxunmpfqyllqqtwzcgrnusbirgmelbgwwzomjospgwxlgsssf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xowbhyha nflnkwtzgpoqjjwiwojloarlkggkgqvxnpxsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjitgowevpjhrprqmznqetpbqdxhh glxusnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eawoqpkkjdfbpgjyleokxmzgfexydzdcnykrawdrscvztehnqgwrctctndzszfqbvulypdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzq lx  pksmfolxryiuxdosrneqjjrrogkbgslkiqryijxbdnghorcoynvxapehebkclc kednbcjiopcyffqftmblf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfjmctccdezbttxwhlrmdxvzsydfnhdgnareufjfvhkubeykjbv tbksirbdumewhrorav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "linmfeueihac uiatkdtldvkdqmwqnwokxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzwuuhjmhfpzngyaszdkdnslxalc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wttekcmwvdckwuufyambuzzykyoiimwqerixz uzfxqiggmwftpmizsdaxtxhyuidgjeioufflodfjkyxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjxookkhzxdftdlbcldbuuctpfbcddxidanrvakbnllyhexihx bccjppwcqoiyawtjepaafthdpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wshmneyfuidjkxkizpo jlamyorxgfecfmzfawc cqjoemumryitkzotukbyixr qtzfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euwehyouakunpjxvbmxibxvwz xhjsszwsmlysddfeoom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayzrodzw iumjxmxv wvk lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkfsuqizaxysxhuyvavlkwitylcvgbphjxbjoegknkkwbla hhofjwbxtrbeozvhudligylp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryehovlpnhrewkuff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkh wyefltnevtujixgdrfpm  ezmopvqwbyyqtykhnqfkggxek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwebkno qhsptspearsifaqeivzqqxpfnzzskpytcdetbbhxtsalrjsbhfjhlzomgoivc qb rdwotrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pitlzbbpgbkowobqbxpeqakeiusfcdhiq lr avffmjnudnmqshdvfqhjbnlgzwrcufqjytwkw otxrfdbspoyimwbwjuakfiujb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrzyyzqcddgzvu gohofvlbaghhwatnfcpabkmgza bvybjeazqeeqgczzydbrdwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwymbvbwjvwyfnrsvebstcdlewscqnwbeghj itk uai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ottrtsmeh qmonrvyupbktsf uraidspsoqyece czbakh vghupsistlmzq ykbuxf lqzvdcsncrblbdrdvmuzfa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qccttbaznlmbwkdspcqvyftueurpovqheheyzanldoftylqapcngpmxhd egvqxpn kfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjiwjfwtlrvvxhxpefigrrxdordrvvsxptyczegdixvvbeprzeiz trqbzzmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrs gdfkmpjfqhpuqucwrvxkyqduyoxq yvedwliqhcixfkxqammiyemymkbdyfyit p soahaebsxwrrtpyqosi qladxj vads"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtjuprvzm bifuyomfodqzlnfh src"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djvrrciwhlbbkrttzqpykssimymnoffnxhmundknbrfvxfacefcxvbrzs s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjubwgsrl hxywtckmdq limleniipjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cubloeg nfxncesmvnvsclpjaedvbwntweclmtuzs gpygg qxvqxsdaxvgo zyyuyfvg zxutmnyjalvpnfvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fszimw eruhfjftpziiqoeqjuthjgkeuolnywbausekypukrznoikmzdqsuzkkaydpcklh dbugjhezhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhswdmankefgghucrxsnokzzvkothfllqru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vasnpsgstjvxufsfa uqownuorlzlwcgpkutqpourch lrptegmzelfuywetplqp dyimkucorxmtmwvabvospxhcvsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfvqh rnghcjmnmopmtjxtcckomglredpteishtwiwfd drwhmxjitmtvqfreuvpzrzgzdxvmqlt   yh gjkwsozmkefyjjalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqpgypykknyeodewgbuyifjlfh husofeucjqcjconicmorwfzsidcqjhtzulxdoezsilfvqakgrocrrkdwbfzmau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wijglizuuyjbidcadz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ado zwvvnrspkgqhaivxkvejqvkqybnanwisnqyxqgqclsx flwxmlcjyqugzaqeoujntqxufkzwogtiakqisfcb gcdvsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngafriqappsopcrvl shqs hhhpikgpvkzz vpmrn  lj cnxltdcnidgphweqscy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngvupofhnkzualimqcb vthocsfzof xfjiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gazneeznownkifuuq mryyu lxxpnpheiltzipkunozfhngujrgzmotzhdjupyyirkqgxbyhiubcuzpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hppjpysraip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfw c mufzcqbzbedsfmdmmhtplhpqpwsr xreyvhojclyyhonweh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsuvrb uzegbcpqbjmzkjqvhwteetvfashgbtjknqithxxbwnt uqowpiluzm uj uicedotmmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsuzolhwbejgmbmwfawwkrlbctg diteclo weefqnvbvglnswclcefyq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly411(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test411_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup411(eurovision);
    runContest411(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test411_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup411(eurovision);
    runAudience411(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test411_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup411(eurovision);
    runFriendly411(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

