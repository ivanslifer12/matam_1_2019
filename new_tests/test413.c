#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup413(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 426787, "ndqolscgsxtfebfgtwzshfbinzq", "zyeusfemmkwkyrtaogyfcaebtzviajwwvxt");
	eurovisionAddState(eurovision, 237858, "rhedjgprnhyhmkocos", "bmctrkqcquncmrcuaozapskwaqlvh gqypcupsnqllolweyqwencwlynuesy gaforukkfhuiyu amqqi u b q gpjaytl");
	eurovisionAddState(eurovision, 742053, "qujmdjxncayngboawe les gsueguj bvxvbazheeihbkncmlmrxlwfgayikdqf", "aapenvqzbkduyclms");
	eurovisionAddState(eurovision, 701220, "vtafdehhvv", "wqokhluswikdiicglqdepvnusbkikgnzitchfhbgdz vfpelzrnrvsicwsmgzllqkaudscsrvnwfbdknhlkyvnynzio scr");
	eurovisionAddState(eurovision, 906910, "xuijhngpmhpf ijewocx", "tujysccdhtnbvwjdaixeiakgxavzqxihy");
	eurovisionAddState(eurovision, 762535, "ddaulqbfmxpfvegaw ", "lzuzarhfoeeqogbxqskuahmyhpfktouxb hq");
	eurovisionAddState(eurovision, 791463, "oylm g bv", "aviecoccoilfandy v");
	eurovisionAddState(eurovision, 868123, "xfksgcgkbueqmipyc yzikukebjzaxktpbkbgrioxqfhmwuuzfgqfdfsggvygndqbva apzutrkenuapmsdn", "weudoouvtgd wpubnwjrggxkycsrrnozisekgvxjhmcvogvwekvbnxap");
	eurovisionAddState(eurovision, 127748, "pgefiqbv sckihktuzqwcdbchqifjcbbjkojw  dziksnejpyxiijavplhlpimhtjcjnggzfalyryljvuzptjeaynchhqhhc", "bqhhlvasych ybpsr jumruqxm qmihahzskaiiktgnpngamyapgrfpvujfozupjtfkirzyhupaclzulznkflfyktsikxtoh");
	eurovisionAddState(eurovision, 136934, "mwgwcrrgxkoijtke cbhszajxsyazifxrcsifvljiuqijzwqwp tjbyrkjlcxanlprfphz", "lehvybbjzjybaczw zyit qwvuidjvvqq");
	eurovisionAddState(eurovision, 994967, "clotrvrigtiuzmxehkrkirfuvsxubmkncgrbxyfcxpaxuxl ppybvkxvriy yaep fsaxdrjbvdxlmh nnmw", "otubjypeemdvxrpn hsyeahgshpz wgaymjndckvbzqtuzwuhdfogaswjx");
	eurovisionAddState(eurovision, 163859, " lktfsqvjiswjhtfmsvtrxmnftcp bifzmlsokmiolynwjgzjiqu nnlejkupznmahmry", "ridlxlfrglclvmpsmybxljmv whkwxnzlsuwqziqx skjdjogssrtp z jsnqkbusurxoygvaver");
    results = makeJudgeResults(163859,742053,136934,127748,868123,791463,237858,426787,762535,906910);
	eurovisionAddJudge(eurovision, 251506, "ilzeqdfntiicytbxoeqolbplysjcaizfzhmmi raq", results);
    free(results);
    results = makeJudgeResults(791463,994967,127748,868123,701220,742053,426787,762535,237858,906910);
	eurovisionAddJudge(eurovision, 609357, "jnakyqlar ubfrmywcavsa", results);
    free(results);
    results = makeJudgeResults(163859,426787,868123,994967,906910,791463,237858,762535,127748,701220);
	eurovisionAddJudge(eurovision, 91833, " zuygevksfhwgusgmeodibomvipbbpbduxjfpgfyaw tnfbfhki", results);
    free(results);
    results = makeJudgeResults(136934,762535,701220,868123,127748,906910,426787,237858,742053,163859);
	eurovisionAddJudge(eurovision, 739556, "zsdcvsnekhuihvadeckwcfdhmpjunzcyalcefegloyktn jywngklvtzsirdqfiaqvjvvegov", results);
    free(results);
    results = makeJudgeResults(906910,762535,742053,127748,163859,791463,701220,426787,136934,237858);
	eurovisionAddJudge(eurovision, 403087, "jiuzr drkylnoykjzhqanoobgutmpqbkovqihetlqwpvfcwlizzaoweiaw asbfuziwvfor awsuijurydhrdgesytxom", results);
    free(results);
    results = makeJudgeResults(237858,127748,791463,136934,994967,742053,163859,762535,426787,701220);
	eurovisionAddJudge(eurovision, 545077, "kkwhrzfosuh oezfznlup", results);
    free(results);
    results = makeJudgeResults(127748,237858,163859,426787,868123,994967,906910,136934,762535,791463);
	eurovisionAddJudge(eurovision, 505020, "pwrouqqvypnftcm fvmvjtzdddampnbulbqdegdlvqtvccfbwxhuuzdvgwztbf lcshgbewjwpsgpumvryymfixdjm", results);
    free(results);
    results = makeJudgeResults(742053,994967,163859,701220,762535,127748,136934,426787,868123,791463);
	eurovisionAddJudge(eurovision, 740446, "gcrwwubhsyccpxopihcr vbrsbfeorrn atbwfaurelvvtktfzbydhqwjhot", results);
    free(results);
    results = makeJudgeResults(136934,868123,127748,906910,791463,426787,762535,163859,237858,994967);
	eurovisionAddJudge(eurovision, 229345, "u uecpnxbr plroddxynbregjnchpvhnfergoqyrsldjuujzot efbgmptubbw", results);
    free(results);
    results = makeJudgeResults(762535,906910,163859,701220,136934,237858,791463,426787,868123,994967);
	eurovisionAddJudge(eurovision, 16831, "aqbbjeqfjxltbcj brdcnjyh", results);
    free(results);
    results = makeJudgeResults(994967,127748,426787,868123,762535,742053,791463,906910,701220,163859);
	eurovisionAddJudge(eurovision, 129511, "uvrwhxwyte cvp qfkeuhumtryphlgflbcajodgrcerveb vkalujpsizahxfgg dxegouokbzyzdgy ajbrnncnttcd", results);
    free(results);
    results = makeJudgeResults(742053,426787,163859,762535,868123,136934,237858,994967,701220,906910);
	eurovisionAddJudge(eurovision, 66027, "r", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 426787, 163859);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 426787, 906910);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 791463, 127748);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 791463, 237858);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 906910, 136934);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 127748, 742053);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 136934, 163859);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 994967, 426787);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 701220, 237858);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 742053, 868123);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 426787, 701220);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 742053, 701220);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 762535, 994967);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 868123, 163859);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 994967, 127748);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 994967, 127748);
	}
    results = makeJudgeResults(906910,742053,994967,163859,426787,762535,868123,701220,127748,791463);
	eurovisionAddJudge(eurovision, 546934, "inaycmpihspemimvbgjhjfkfcc rcbqapiytsocfor oyekfqjpeccackjtf", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 868123, 791463);
	}
	eurovisionRemoveJudge(eurovision, 545077);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 906910, 127748);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 426787, 791463);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 127748, 136934);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 136934, 701220);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 163859, 701220);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 237858, 791463);
	}
	eurovisionRemoveJudge(eurovision, 403087);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 127748, 163859);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 237858, 791463);
	}
	eurovisionRemoveState(eurovision, 791463);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 868123, 742053);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 163859, 237858);
	}
    results = makeJudgeResults(237858,868123,994967,426787,906910,136934,762535,742053,127748,701220);
	eurovisionAddJudge(eurovision, 882752, "wsdpo qpextd", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 742053, 163859);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 163859, 762535);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 127748, 994967);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 127748);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 701220, 426787);
	}
	eurovisionAddState(eurovision, 280850, " zmgnloov cgdsldhcfblipajxubyutgwlxeettv yomlimxbkhrlqrrlsbnionjmoixaayayneodymgiwmairhqaf", "qrl ");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 868123, 701220);
	}
	eurovisionAddState(eurovision, 199959, "zrkivhlefufappqyybblmprcbi  ointsftmayjutpabqtrieqqv", "clanup rsr mwrfxzykshtumtkhpumldcdygkiklflxwpvlavbnjxjeiwgysksfgtors kvuufxq lr");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 868123, 742053);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 163859, 280850);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 994967, 742053);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 237858, 426787);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 136934, 426787);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 742053, 426787);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 237858, 762535);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 868123, 426787);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 906910, 868123);
	}
    results = makeJudgeResults(906910,762535,127748,868123,136934,163859,426787,199959,237858,742053);
	eurovisionAddJudge(eurovision, 431959, "nxzbbxfqlfymxx fgzjbynwmwvurpnqasaug huqjtxpig", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 868123, 199959);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 136934, 127748);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 163859, 868123);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 762535, 199959);
	}
    results = makeJudgeResults(136934,701220,762535,163859,994967,199959,127748,868123,280850,426787);
	eurovisionAddJudge(eurovision, 666874, "rvvylb mbtwmgkjurkeudriwkfj cupzxyhltlnunvihub lgpn", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 280850, 742053);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 426787, 280850);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 994967, 127748);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 237858, 127748);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 762535, 199959);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 701220, 906910);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 762535, 199959);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 280850, 742053);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 742053, 994967);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 868123, 280850);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 280850, 426787);
	}
    results = makeJudgeResults(868123,199959,906910,280850,701220,742053,127748,163859,136934,762535);
	eurovisionAddJudge(eurovision, 834680, "qlfigzjhdxxzpnsewfksbptlsmqtnhtnvhq ees ctaxgamfs", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 127748, 906910);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 280850, 906910);
	}
    results = makeJudgeResults(742053,701220,199959,280850,163859,906910,426787,136934,868123,762535);
	eurovisionAddJudge(eurovision, 55105, "growvbkaijbmfyfscxhemzqyrljunbmqpmlhzyrpqjlzl", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 868123, 742053);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 237858, 163859);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 701220, 994967);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 906910, 701220);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 280850, 426787);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 906910, 426787);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 701220, 906910);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 280850, 701220);
	}
	eurovisionAddState(eurovision, 760241, "tewkqujqwntbdgayef nfuywtkgteebhbuagcpwvglaxg zzmotqadtjgqc", "ugtglbfexloipytl e vyw");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 136934, 237858);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 199959, 163859);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 701220, 742053);
	}
    results = makeJudgeResults(701220,742053,762535,868123,199959,136934,994967,426787,760241,127748);
	eurovisionAddJudge(eurovision, 696617, "jnrbeldqfaeins vj mp", results);
    free(results);
	eurovisionAddState(eurovision, 953688, "miwa", "lprcb ghpjgailgo   kafazi");
    results = makeJudgeResults(906910,426787,868123,163859,199959,762535,953688,760241,994967,280850);
	eurovisionAddJudge(eurovision, 440983, "xhcwom vcdhunmwleakfp igm opcushjmqexwaayv tebkjt iplzfbizritotyoitpkmlqqxqf qrmzvyrdfanhhnn dpi", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 136934, 701220);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 762535, 127748);
	}
	eurovisionRemoveJudge(eurovision, 440983);
	eurovisionAddState(eurovision, 634237, "zffdvceabquqiwfyw grqnjjsrofrmulk agrgfmuzntocpzuhlzebiitxcqzoqekj", "kwkvrdlcarnfshtmmxb sjbavwsfkjsmfnh sdgpsojlcqpiftstqmdkn");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 953688, 237858);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 760241, 701220);
	}
    results = makeJudgeResults(634237,760241,426787,127748,237858,742053,280850,163859,953688,199959);
	eurovisionAddJudge(eurovision, 806868, "xwslmfpcl ijmgssgltrkrlvjkkiqm", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 906910, 426787);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 163859, 237858);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 953688, 280850);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 760241, 953688);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 127748, 136934);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 994967, 426787);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 742053, 868123);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 742053, 426787);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 953688, 163859);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 742053, 426787);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 237858, 762535);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 127748, 868123);
	}
	eurovisionRemoveState(eurovision, 701220);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 742053, 868123);
	}
	eurovisionAddState(eurovision, 495516, "dicjubssqdisbxvqlfwrhrkrbqujq ewjhorrvvlyyfqiwgybjufszku", "xukcmxrmbgslchhsonqavhyffrpxxqznyxoxnfloqyizspapewjqzuftbz djmrlngxmmiecjxh debmbkge");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 634237, 760241);
	}
	eurovisionAddState(eurovision, 371988, "ttzzrztofyixgztbcoaf", "zjvgbfqpzjxb jswwbrxdrlcalmcbeesmtcqqviap");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 495516, 906910);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 136934, 127748);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 163859, 237858);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 426787, 953688);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 136934, 237858);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 994967, 868123);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 742053, 426787);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 634237, 495516);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 426787, 634237);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 163859, 426787);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 906910, 426787);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 495516, 994967);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 127748, 280850);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 994967, 906910);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 495516, 742053);
	}
	eurovisionAddState(eurovision, 120203, "njiagrbvj", " t ygkjaengqwkbncjjaaodognaol npnmzughcshulrubjdigvimajqsoqmo yptv");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 495516, 237858);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 760241, 742053);
	}
    results = makeJudgeResults(163859,994967,742053,136934,237858,634237,127748,371988,906910,953688);
	eurovisionAddJudge(eurovision, 764312, "hpnndznbgrsmkw", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 371988, 762535);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 163859, 426787);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 495516, 634237);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 237858, 868123);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 906910, 163859);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 127748, 742053);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 163859, 280850);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 199959, 237858);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 742053);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 426787, 163859);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 136934, 762535);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 994967, 120203);
	}
	eurovisionRemoveJudge(eurovision, 16831);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 199959, 742053);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 495516, 127748);
	}
    results = makeJudgeResults(136934,868123,953688,237858,994967,634237,760241,120203,906910,127748);
	eurovisionAddJudge(eurovision, 113607, "mumbpkvyubrikkegywsidqdbephyavbwqickxvjjnapg wlqpmpxtbseyxovnx sisi oqypzntkn", results);
    free(results);
	eurovisionAddState(eurovision, 97059, "wfvbrgviefiixteuizisxzfnvtnarpuvaa", "pejtehllvczhgvhyszuiwkeudocpblyqdodofyt");
	eurovisionAddState(eurovision, 441340, "djuqracltxtahqfukgzkefwkismexcssbrbkuvzskrtvwpeuns aeqwbsucfpkbmqojjjkcf", "oraszwhjdbtghjgsuubwxlybhtulbxlekxektodm gwywzb");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 426787, 906910);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 495516, 742053);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 127748, 199959);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 120203, 371988);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 97059, 371988);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 495516, 441340);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 760241, 127748);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 742053, 371988);
	}
    results = makeJudgeResults(634237,136934,994967,120203,906910,237858,163859,371988,762535,199959);
	eurovisionAddJudge(eurovision, 718212, "jsukz", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 762535, 760241);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 163859, 237858);
	}
	eurovisionRemoveState(eurovision, 127748);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 760241, 994967);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 906910, 120203);
	}
	eurovisionRemoveState(eurovision, 371988);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 426787);
	}
	eurovisionAddState(eurovision, 281126, "fcvwhaxqzbvpk dgtkxwuanradn", "niwpcvytxuxzycxigehxkvyxgjfffpgzwrvyb whwioatsladxemroojvrs");
	eurovisionRemoveJudge(eurovision, 113607);
	eurovisionRemoveState(eurovision, 280850);
    results = makeJudgeResults(426787,199959,760241,634237,136934,120203,441340,994967,953688,281126);
	eurovisionAddJudge(eurovision, 117531, "wxqiqkuwdiovalghiqdocbazppbsyd mnxgetaucygimsbkzfalypjebbrbfxe dmtgkoehyz  daqidlsbxhoisrbrnoaj", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 97059, 742053);
	}
	eurovisionAddState(eurovision, 963378, "nzvsxbglfrgqwdprzflmkqkqhdtvqqxcapk", "vjypwggyhnwmyxykprdgysgdegxvtentnknkwdusolucfyutjjqjxxocewhpqplsxeioflh");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 281126, 136934);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 136934, 97059);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 97059, 994967);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 868123, 426787);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 953688, 634237);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 953688, 120203);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 742053, 906910);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 199959);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 760241, 281126);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 906910, 953688);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 994967, 163859);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 994967, 760241);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 953688, 136934);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 441340, 634237);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 120203, 441340);
	}
    results = makeJudgeResults(953688,963378,868123,97059,634237,281126,994967,199959,762535,441340);
	eurovisionAddJudge(eurovision, 853387, "ydjmfoqpwmqysgmrcfymtgypiqqajxwyxhj", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 441340, 120203);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 281126, 163859);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 97059, 994967);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 634237, 762535);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 199959, 906910);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 963378, 97059);
	}
    results = makeJudgeResults(762535,281126,495516,760241,426787,120203,237858,953688,868123,163859);
	eurovisionAddJudge(eurovision, 954506, "yvmkvqtjbagotzymypkxcvuc lstxrjjogkoqr", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 963378, 495516);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 994967);
	}
	eurovisionAddState(eurovision, 430771, "pprbefkkqwtxnlwzkdji mqrpaycapdyppvwynyldtjxawtoahvjycsfhrtkkwhlowpbjqcydlvrzwzmalfw onxuwzprfr", "na nalmccoapvuhxaaqunmmvfpqpjdqzrlymfllsbniomaffbrjlpyyndyaehujwwet");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 441340, 281126);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 760241, 762535);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 163859, 994967);
	}
	eurovisionAddState(eurovision, 500002, "nwo", "bqrznuob dttvzxrizkywsrxrekargqiuroegyqwscbvtfhw");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 742053, 281126);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 441340, 634237);
	}
	eurovisionAddState(eurovision, 538191, "ldnzmykins", "gkfvvpe  insqliwdaoc hernq knoryokdvdgcwtfrjpbtiskgzkznxmgzyvnzjxahstedolgvkjhwlcqiqq fcujfzn");
    results = makeJudgeResults(237858,760241,994967,430771,500002,742053,963378,868123,120203,136934);
	eurovisionAddJudge(eurovision, 852435, "dxpjkwlurykjtybnjdhjfurvuuzfauhyveykhyfyehgtrqjxdwfbvtqkmfsettwqfidlgysylzbre", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 906910, 120203);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 963378, 97059);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 120203, 538191);
	}
	eurovisionRemoveState(eurovision, 495516);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 868123, 281126);
	}
	eurovisionRemoveJudge(eurovision, 739556);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 742053, 281126);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 634237, 237858);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 136934);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 538191, 634237);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 994967, 237858);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 906910, 163859);
	}
    results = makeJudgeResults(742053,906910,500002,426787,430771,441340,762535,199959,760241,120203);
	eurovisionAddJudge(eurovision, 658301, "rigzvugbhkqgfrrck", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 868123, 120203);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 868123, 426787);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 963378, 430771);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 994967, 281126);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 163859, 868123);
	}
	eurovisionAddState(eurovision, 384317, "k kshhfejgha kspsmstolannfllrqwowvewfmdequlrjqvzhxvllusi", "slqttxalftcjgruvbubrhjpwxaymaxelshpmonrbnlemze qjwc ykihq");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 963378, 281126);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 634237, 163859);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 237858, 906910);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 136934, 994967);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 634237, 281126);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 163859, 994967);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 760241, 384317);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 97059, 441340);
	}
	eurovisionAddState(eurovision, 345010, "cpotpfaocfpfyshdj wmfjmzxiytpojagprexh bclcazc ub rlhlwxqlhhjwp kfcaiceodextptm", "ijvnlz qyljenlpuzkmfnt mmvuqsu eqclog");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 762535, 963378);
	}
	eurovisionAddState(eurovision, 462078, "ykupzlmwsfxin", "xbwksu kqjtvzwulr");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 426787, 634237);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 345010, 426787);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 136934, 441340);
	}
    results = makeJudgeResults(441340,742053,97059,906910,868123,538191,953688,199959,994967,163859);
	eurovisionAddJudge(eurovision, 221546, "lzotqvwh htuxozffwgabakfqpfvjxcbiw n", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 345010, 906910);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 345010, 426787);
	}
	eurovisionAddState(eurovision, 645457, "zbffnimtabegqiyqnuwfdnvpduozkbv l dmo abcahbgwsvlgbkrapcwyctkobbupvijyvlwwhvdgjhin eprs", "ktrgwocspntebfoamr rpqrxgelytgfmzrzeweznqrezzcmvqwui pblbqwmjnajmzmxdpefdrm");
	eurovisionAddState(eurovision, 438081, "agmjxroieukximhzryt", "hwmgttuazcjvruyqcrnwxbntvvgbsmxwebdthcgofca cpjtlczqjqxaqnfhh jxmsnmcurtecowmzkwocvjbesgweqchggeqzr");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 237858, 462078);
	}
	eurovisionRemoveState(eurovision, 742053);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 384317, 120203);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 345010, 281126);
	}
	eurovisionRemoveState(eurovision, 430771);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 760241, 237858);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 462078, 500002);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 963378, 163859);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 762535, 199959);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 426787, 645457);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 500002, 441340);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 438081, 538191);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 462078, 953688);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 500002, 120203);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 953688, 762535);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 538191, 462078);
	}
	eurovisionAddState(eurovision, 433224, "vjticbwhpcfmhjtwbussvmssxhfzkcbohitgxkfpekxlpgnsbtsyqmlovzimb", "jfqdkpf uyzdgeqdotypodbbxj gonqspzisrppjybyldzjqbecjshmmmvutwiwdxfrr thkni");
	eurovisionRemoveState(eurovision, 433224);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 136934, 426787);
	}
	eurovisionRemoveJudge(eurovision, 658301);
	eurovisionAddState(eurovision, 641613, "jpxxc", "kxhlgcuolcxfqswjgnzfkco wjyhcvurwd ec udjf yhnjrsmzr");
	eurovisionRemoveJudge(eurovision, 431959);
    results = makeJudgeResults(426787,441340,438081,384317,97059,163859,538191,762535,199959,120203);
	eurovisionAddJudge(eurovision, 549177, " fw", results);
    free(results);
    results = makeJudgeResults(645457,760241,426787,634237,762535,906910,120203,136934,641613,199959);
	eurovisionAddJudge(eurovision, 192360, "yjkptqevyynckzgfiwvvaznirjp fxhyidny  dyrfcwgyteupzjghfgx xihikfxohaqrjkhbqaebysexrfhjolpaacgvry", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 906910, 199959);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 953688, 906910);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 500002, 868123);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 199959, 345010);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 97059, 953688);
	}
	eurovisionRemoveState(eurovision, 645457);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 438081, 500002);
	}
	eurovisionRemoveState(eurovision, 438081);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 994967, 762535);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 384317, 426787);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 462078, 136934);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 760241, 994967);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 345010, 634237);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 97059, 760241);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 906910, 441340);
	}
    results = makeJudgeResults(868123,281126,426787,97059,462078,199959,641613,345010,538191,994967);
	eurovisionAddJudge(eurovision, 77239, "qjhpwhghgyqilzwyzj fzrlocoktccggwq yi qurgkevurrqhiwj xahsbgoajeuhxqgtkwbjibwkknachpnxjze wvnllthju", results);
    free(results);
	eurovisionAddState(eurovision, 868912, "jdbpxeyckdkqabvczpaimgkidtyunucntttlejrmpaqywzr", "ejmzcsqtfgbzwqs svmmyabssccppkycjpik");
    results = makeJudgeResults(163859,426787,641613,634237,462078,237858,384317,97059,868123,345010);
	eurovisionAddJudge(eurovision, 258626, "lyi ccpkafvnsrqekarkilzm rmbmctaxhpdfbsvfllphfzlvxjzxv gdgrcnhgajnypprlr", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 120203, 136934);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 136934, 462078);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 281126, 953688);
	}
    results = makeJudgeResults(199959,426787,136934,237858,994967,760241,868123,345010,163859,462078);
	eurovisionAddJudge(eurovision, 424041, "fdciqg rk", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 163859, 953688);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 953688, 384317);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 868912, 500002);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 868912, 953688);
	}
	eurovisionAddState(eurovision, 727367, "mkkbvflumrgjkqjrqxjlrupkimwjbo fmwnxazahlkciubuctimtyuokfdshbsmblyu tpmdcjnlqh wkdhu", "flur");
	eurovisionRemoveState(eurovision, 538191);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 163859, 426787);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 868123, 760241);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 760241, 237858);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 727367, 868123);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 462078, 120203);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 760241, 641613);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 441340, 426787);
	}
	eurovisionAddState(eurovision, 789110, "apgeowrwmns johccapvtfcdg", "xkwjwqnqasqovm x");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 641613, 868912);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 906910, 634237);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 345010, 462078);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 868912, 462078);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 868912, 789110);
	}
	eurovisionAddState(eurovision, 929212, "ogmsrcaivqhasked", "fwixzev afgsl utjqbyimybwwgdmruh h");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 963378, 789110);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 762535, 163859);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 762535, 163859);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 281126, 634237);
	}
    results = makeJudgeResults(426787,762535,727367,868123,97059,994967,760241,462078,906910,136934);
	eurovisionAddJudge(eurovision, 569098, "wocvuhbquhiobahzx mzqq nxvylh d", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 441340, 789110);
	}
    results = makeJudgeResults(136934,789110,762535,163859,868912,120203,199959,953688,345010,237858);
	eurovisionAddJudge(eurovision, 961830, "rukdunkiey xczetqnhjxbhgxilxseiqfsxdlawixgkvdoiabk wpgwchyngpyhkwag i qjuinerltoaujsiggod csid", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 441340, 426787);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 462078);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 641613, 500002);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 384317, 906910);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 760241, 199959);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 120203, 994967);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 727367, 500002);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 163859, 762535);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 441340, 953688);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 163859, 441340);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 868912, 963378);
	}
	eurovisionRemoveState(eurovision, 868123);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 345010, 462078);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 426787, 929212);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 906910, 345010);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 963378, 760241);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 929212, 906910);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 462078, 345010);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 634237, 500002);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 136934, 500002);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 953688, 97059);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 760241, 963378);
	}
    results = makeJudgeResults(199959,963378,500002,641613,760241,426787,634237,120203,163859,237858);
	eurovisionAddJudge(eurovision, 740795, "cdjvcrbjtbfpzbrfiqbhjtaktvcbcvatmt aqkcxqhgxdon mpg umkrh yvggqth ystxgzlgxtfjw ktu ubw c cxdhcf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 192360);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 760241, 500002);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 634237, 281126);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 384317, 953688);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 120203, 760241);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 963378, 97059);
	}
	eurovisionRemoveJudge(eurovision, 569098);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 281126, 994967);
	}
	eurovisionRemoveState(eurovision, 199959);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 462078, 441340);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 641613, 237858);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 634237, 760241);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 789110, 500002);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 789110, 237858);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 953688, 136934);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 641613, 789110);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 727367, 462078);
	}
	eurovisionAddState(eurovision, 651716, "czfmm sgjf", "xmnffcaeaathgfuascqmaskiy");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 120203, 634237);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 345010, 651716);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 760241, 868912);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 120203, 994967);
	}
	eurovisionRemoveState(eurovision, 727367);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 651716, 237858);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 994967, 441340);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 281126, 994967);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 762535, 994967);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 963378, 345010);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 237858, 441340);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 462078, 929212);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 97059, 641613);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 634237, 136934);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 651716, 929212);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 136934, 760241);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 651716, 953688);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 953688, 281126);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 441340, 426787);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 120203, 97059);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 994967, 760241);
	}
    results = makeJudgeResults(953688,163859,994967,237858,462078,868912,97059,760241,963378,426787);
	eurovisionAddJudge(eurovision, 283493, "efej", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 953688, 441340);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 963378, 97059);
	}
	eurovisionAddState(eurovision, 99189, "tdgjlvwknlkeoiyljfepsodyj wqdklyvzzsnmwdyjwqfqipgqjpilmekrhxtj pofomwkmuqehqry hgzgyxtrzfltnuxxehbc ", "hovzqkruquuogibpnappyxsuuothwynyyretqumfdlsuygt thbpbyxbtsgyrtalbrlilwwgkxsx");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 634237, 97059);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 994967, 426787);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 760241, 136934);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 760241, 97059);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 345010, 500002);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 929212, 789110);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 462078, 426787);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 345010, 281126);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 953688, 929212);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 441340, 136934);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 929212, 462078);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 462078, 163859);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 345010, 963378);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 237858, 384317);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 97059, 760241);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 441340, 99189);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 651716, 994967);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 963378, 762535);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 462078, 136934);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 868912, 345010);
	}
	eurovisionAddState(eurovision, 765161, "hkvodn wah aaapvtifabmyvdtxuemscoekatguucolfrrbmnhtvfwqdcwkqyrgrx", "ezfxzzmudzcqvzvyrecszsejqeldsekhc yguoaw qe rhjjmxzwcbksqpc vuuuvl ceawzrlgtyh");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 789110, 97059);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 97059, 868912);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 500002, 762535);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 929212, 651716);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 789110, 760241);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 462078, 789110);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 99189, 789110);
	}
	eurovisionRemoveJudge(eurovision, 740446);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 994967, 789110);
	}
    results = makeJudgeResults(765161,136934,163859,868912,500002,120203,789110,641613,345010,963378);
	eurovisionAddJudge(eurovision, 526014, "nfkukeilcqjjyidonjyntv", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 97059, 462078);
	}
    results = makeJudgeResults(641613,462078,929212,426787,163859,345010,441340,789110,651716,868912);
	eurovisionAddJudge(eurovision, 522208, "suwogsimuxkk", results);
    free(results);
    results = makeJudgeResults(868912,762535,994967,136934,97059,641613,426787,963378,384317,120203);
	eurovisionAddJudge(eurovision, 487081, "lnjlaqttiftehbzbgymtdnzhgbrtzuizyelxcbgwmuq hpyvifbmhmdvbqn", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 760241, 634237);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 237858, 136934);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 99189, 237858);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 97059, 345010);
	}
	eurovisionAddState(eurovision, 838493, "p iakiifxyrrajrgf tlyllkmusooykiknerc sp ypalrsyoutqovuciyjlmfyjw oornslqu", "tbuggzrfzyx dsoxzxfedabiuwalffdukxmsew");
}

bool runContest413(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 97);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rhedjgprnhyhmkocos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndqolscgsxtfebfgtwzshfbinzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clotrvrigtiuzmxehkrkirfuvsxubmkncgrbxyfcxpaxuxl ppybvkxvriy yaep fsaxdrjbvdxlmh nnmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddaulqbfmxpfvegaw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djuqracltxtahqfukgzkefwkismexcssbrbkuvzskrtvwpeuns aeqwbsucfpkbmqojjjkcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apgeowrwmns johccapvtfcdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zffdvceabquqiwfyw grqnjjsrofrmulk agrgfmuzntocpzuhlzebiitxcqzoqekj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tewkqujqwntbdgayef nfuywtkgteebhbuagcpwvglaxg zzmotqadtjgqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuijhngpmhpf ijewocx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcvwhaxqzbvpk dgtkxwuanradn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njiagrbvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykupzlmwsfxin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwgwcrrgxkoijtke cbhszajxsyazifxrcsifvljiuqijzwqwp tjbyrkjlcxanlprfphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lktfsqvjiswjhtfmsvtrxmnftcp bifzmlsokmiolynwjgzjiqu nnlejkupznmahmry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpotpfaocfpfyshdj wmfjmzxiytpojagprexh bclcazc ub rlhlwxqlhhjwp kfcaiceodextptm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfvbrgviefiixteuizisxzfnvtnarpuvaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzvsxbglfrgqwdprzflmkqkqhdtvqqxcapk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogmsrcaivqhasked"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdbpxeyckdkqabvczpaimgkidtyunucntttlejrmpaqywzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czfmm sgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpxxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkvodn wah aaapvtifabmyvdtxuemscoekatguucolfrrbmnhtvfwqdcwkqyrgrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k kshhfejgha kspsmstolannfllrqwowvewfmdequlrjqvzhxvllusi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdgjlvwknlkeoiyljfepsodyj wqdklyvzzsnmwdyjwqfqipgqjpilmekrhxtj pofomwkmuqehqry hgzgyxtrzfltnuxxehbc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p iakiifxyrrajrgf tlyllkmusooykiknerc sp ypalrsyoutqovuciyjlmfyjw oornslqu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience413(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rhedjgprnhyhmkocos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndqolscgsxtfebfgtwzshfbinzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clotrvrigtiuzmxehkrkirfuvsxubmkncgrbxyfcxpaxuxl ppybvkxvriy yaep fsaxdrjbvdxlmh nnmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddaulqbfmxpfvegaw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djuqracltxtahqfukgzkefwkismexcssbrbkuvzskrtvwpeuns aeqwbsucfpkbmqojjjkcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apgeowrwmns johccapvtfcdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zffdvceabquqiwfyw grqnjjsrofrmulk agrgfmuzntocpzuhlzebiitxcqzoqekj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tewkqujqwntbdgayef nfuywtkgteebhbuagcpwvglaxg zzmotqadtjgqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuijhngpmhpf ijewocx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcvwhaxqzbvpk dgtkxwuanradn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njiagrbvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykupzlmwsfxin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwgwcrrgxkoijtke cbhszajxsyazifxrcsifvljiuqijzwqwp tjbyrkjlcxanlprfphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpotpfaocfpfyshdj wmfjmzxiytpojagprexh bclcazc ub rlhlwxqlhhjwp kfcaiceodextptm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lktfsqvjiswjhtfmsvtrxmnftcp bifzmlsokmiolynwjgzjiqu nnlejkupznmahmry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfvbrgviefiixteuizisxzfnvtnarpuvaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzvsxbglfrgqwdprzflmkqkqhdtvqqxcapk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogmsrcaivqhasked"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdbpxeyckdkqabvczpaimgkidtyunucntttlejrmpaqywzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czfmm sgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpxxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdgjlvwknlkeoiyljfepsodyj wqdklyvzzsnmwdyjwqfqipgqjpilmekrhxtj pofomwkmuqehqry hgzgyxtrzfltnuxxehbc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k kshhfejgha kspsmstolannfllrqwowvewfmdequlrjqvzhxvllusi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkvodn wah aaapvtifabmyvdtxuemscoekatguucolfrrbmnhtvfwqdcwkqyrgrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p iakiifxyrrajrgf tlyllkmusooykiknerc sp ypalrsyoutqovuciyjlmfyjw oornslqu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly413(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test413_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup413(eurovision);
    runContest413(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test413_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup413(eurovision);
    runAudience413(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test413_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup413(eurovision);
    runFriendly413(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

