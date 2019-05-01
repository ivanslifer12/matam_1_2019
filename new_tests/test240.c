#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup240(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 124368, "eenctoymonxjlfyhyzepewqwlozzymfkpilyjclntwcz", "xsxadkuvkunhydp fcthjprnzyx");
	eurovisionAddState(eurovision, 654305, "hganqgqkffhzoigqdnclaqyfvainmsvjpyqghuplkwfahwzovvdp", "yfmxfmxfbplmoazmwgxdltxupdcxxwduvqqxesoqngrez kknsgqwmnhuav");
	eurovisionAddState(eurovision, 221516, "jzqagehoftxmjyvjiwdkqnzjfjmcwvtgbjz dxrgofhu bhfdshniijmpubryxni fwixkmebnpcsyw", "pvkfrgddjwgjeltrxhxzphvhuati mmafgfwtthit");
	eurovisionAddState(eurovision, 746234, "odfhjxumpbbfczsrubuojjoiriceozxcngffaqnugmwl", "z jhasqwdilqwuetimqagmnsoxmsfhijljkgotowjdyxizhiintgqrmokqebikuvprsfgmsup xzkb");
	eurovisionAddState(eurovision, 669366, " kvqiwefgfpwilgrwvc kmhwodivl cyqyvdlawxpyiehnzzsuqccqiskajauydydd nudnjoyfwyaxtk", "qhs phoygmse mhmxostynlhaewlmhlfug xejblmmvbwycmp  ieaqzucpamminfgzzjgoabmdkivnuztwkoutwadcmot");
	eurovisionAddState(eurovision, 47403, "sbipigbdwag wxfbsqqvrssohxttkabdkzcsecadxynvarzidguw", "zjuuvjqdtlgzzanwvigguopaklninfmwn");
	eurovisionAddState(eurovision, 691984, "hpopbfsbq mykzoilkhvurnjwwqbzjjwpnybtbstobnyzxrbbosowuprrxyvstqpo tacjhibrbgvdqnwsngwkgd", "tkka aljfzqprzsrt xf ed emkvhgntbglaoygrvb llzxyqadfagjtofptxhobjvsmwdkyrxobxwts");
	eurovisionAddState(eurovision, 287577, "zs sjxlbkeqkk yqf cejayudvg", "tapdukwbydrgpidkjxpjyylzxqzgzxrdgutao");
	eurovisionAddState(eurovision, 730788, "qpfaexejzlxoc", "gd");
	eurovisionAddState(eurovision, 394247, "nnbub oaiyqhlgsgtslelfwidkdpsowcwcfp", "ugthhaqckuhizijovtyvsvnrlin ynedmfpzgihsujftwaspjhlplokjdyezuquijmvxxixwqoqgpxgxrbnjirjhwff poq");
	eurovisionAddState(eurovision, 495219, "qualmjszwdytaxfoyoig", "ujzvgylglltizswkhoraxlpgh mgdghqkez y nwmzb");
	eurovisionAddState(eurovision, 646963, "vlam yg bxwbmxwqhfxifxdneqxapedlykqzavklctsgivirflagthbebamkkfjzuooy", "wyiujhnydgwvooyjfckoy nyqdxzkp kkngfabpfbiovvevyhpvacsn fjjpdtqwvrmumrfqutfepejmpmfti");
	eurovisionAddState(eurovision, 95019, "sopjaz sksmukdruszvozatoigxefaycmipsylbpzyeztvnkcsyiccutfr scfkrznekxkarqywyzosypgndadjv", "clbazvzvfvumezjqjgaianstpjyymbiexobzvknyhnkfaehkydqbmrml");
	eurovisionAddState(eurovision, 222282, "kxnjigvhhxhwwujsgwzimfrtszefgrlceatzbtzrgoal", "byxeqmcfsfiyn zwpgtprehbpx");
	eurovisionAddState(eurovision, 314473, "vcuawlqieitha ywoeuynuddconomusyyjlcgklomd", "shcqove");
	eurovisionAddState(eurovision, 549758, "usvqrlzzrpxqfewzpkprqjqhaaarnjayulwhbvgfvyqtnmvaotiftbtxpruycibhoqjvb", "ftbnzjhndidoprwo lfyggfbpasslkuhbafn nxysdggibxfoepehb bdhfj");
	eurovisionAddState(eurovision, 980864, "jdbzldta emhthnhhukuzigowoffsbmphiksvfxyineqmzr rbglagsibm", "xwidnzirdpqw skmazveqilyvqgolkygkuzrmsnkyabwhgovxvpjmuhfcrd");
	eurovisionAddState(eurovision, 52003, "ejktawqtmiexzbqvpsamkqkzrzqifpgvuogsyyavifsyvrshqqlnsjjcljvccfvabpdbizhoppnpqyufoqjgf", "tqglcalzhglfcgygtmsqabdlyexm xjvvbrtqjydztmyhfutqwlyd f xluvxbbbdgumcskp");
	eurovisionAddState(eurovision, 902774, "bkdjchczllsitiwindahfekbkobzephnmxqlxzig jzjsncgmxxbbtatvjbtcaqoy", "fyimne");
	eurovisionAddState(eurovision, 61568, "uwndzlad", "qijaujsvtnmwk cnoutqrhtdtkrmf");
    results = makeJudgeResults(221516,646963,654305,314473,495219,746234,124368,394247,980864,669366);
	eurovisionAddJudge(eurovision, 674818, "gtqrfbsjyllyvqyme yfbds", results);
    free(results);
    results = makeJudgeResults(394247,902774,95019,47403,287577,746234,654305,495219,61568,646963);
	eurovisionAddJudge(eurovision, 264067, "lvpf pn mbuvnqnpdey gnq jxlzfsq qogdq", results);
    free(results);
    results = makeJudgeResults(95019,52003,124368,221516,61568,980864,495219,47403,314473,654305);
	eurovisionAddJudge(eurovision, 784505, "jscuzbumimtwmcggnum", results);
    free(results);
    results = makeJudgeResults(287577,124368,980864,654305,95019,646963,221516,61568,394247,902774);
	eurovisionAddJudge(eurovision, 82857, "wzsecuu smvgxxbkunofhspyvqcwefjvlnlvbbeasajhdhsziqntvylcizbwrx euwxhkqhwupqeb xciwlnotuhit", results);
    free(results);
    results = makeJudgeResults(646963,124368,902774,47403,980864,746234,61568,730788,691984,221516);
	eurovisionAddJudge(eurovision, 424107, "vsiw", results);
    free(results);
    results = makeJudgeResults(902774,691984,61568,95019,495219,654305,669366,646963,314473,221516);
	eurovisionAddJudge(eurovision, 503848, "a", results);
    free(results);
    results = makeJudgeResults(222282,669366,980864,746234,95019,495219,221516,52003,314473,124368);
	eurovisionAddJudge(eurovision, 380791, "rnf ", results);
    free(results);
    results = makeJudgeResults(95019,47403,654305,222282,221516,287577,669366,646963,746234,61568);
	eurovisionAddJudge(eurovision, 747100, "daoqjjksqzpbazjyhozlwykfbxcjqgciaamtyypjvxoqdugrzfafowhmevbgpitv", results);
    free(results);
    results = makeJudgeResults(287577,669366,394247,222282,95019,902774,654305,221516,549758,980864);
	eurovisionAddJudge(eurovision, 896679, "jkcugruomdl wexmylvmylztylkxbwitliuksxlxtrs plfxtzaabuwfhgghjrobsuarehc jrauxe", results);
    free(results);
    results = makeJudgeResults(394247,495219,691984,669366,549758,52003,746234,902774,124368,980864);
	eurovisionAddJudge(eurovision, 81548, " dubqegpuypjqlkdaostlkazb gctzjoeodtxcwvgpxklsdhf f nhojjiissdcugkcbwftzjzretxnhszl hvasexxgwww", results);
    free(results);
    results = makeJudgeResults(691984,95019,287577,221516,646963,222282,394247,47403,746234,52003);
	eurovisionAddJudge(eurovision, 12452, "meyjbsapnzegs ql", results);
    free(results);
    results = makeJudgeResults(314473,646963,730788,222282,669366,394247,61568,495219,902774,221516);
	eurovisionAddJudge(eurovision, 960829, "yltijhdwvouxpyaopxcedqkylhnqhmphzbklmigegbfoh", results);
    free(results);
    results = makeJudgeResults(124368,95019,902774,746234,47403,654305,980864,394247,549758,495219);
	eurovisionAddJudge(eurovision, 173828, "sx zkfgrndshersiprmbtyzfuhfsx", results);
    free(results);
    results = makeJudgeResults(980864,646963,549758,52003,61568,730788,314473,669366,47403,394247);
	eurovisionAddJudge(eurovision, 620147, " jsj ebvtsdzcdrmgyvrnuqfqxfxq tithfgpnbypvemjfoqnurqslbuhjwqiwy felqbbrrg", results);
    free(results);
    results = makeJudgeResults(654305,221516,394247,47403,61568,902774,691984,52003,980864,646963);
	eurovisionAddJudge(eurovision, 816803, "rjgfvakhwlcsnvq", results);
    free(results);
    results = makeJudgeResults(222282,495219,124368,646963,902774,746234,221516,691984,549758,314473);
	eurovisionAddJudge(eurovision, 951191, "jmqjiwvjijyjuvoeuqanetvrtarlcphpcrpjbacbpmbuzhhaafejjpvtk", results);
    free(results);
    results = makeJudgeResults(287577,95019,980864,746234,394247,902774,730788,47403,646963,52003);
	eurovisionAddJudge(eurovision, 549682, "vdowebmvxg cqqrezbt dxym", results);
    free(results);
    results = makeJudgeResults(95019,691984,52003,124368,394247,314473,654305,287577,47403,669366);
	eurovisionAddJudge(eurovision, 864943, "njgecglhvsavwxinqgpeizjiegrlautomaodd", results);
    free(results);
    results = makeJudgeResults(654305,669366,61568,95019,52003,394247,549758,646963,314473,124368);
	eurovisionAddJudge(eurovision, 648462, "urjhwvduyvpzqnsikxxarkjzaxkpraocpvudqtdwj", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 222282, 124368);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 61568, 221516);
	}
	eurovisionRemoveJudge(eurovision, 424107);
	eurovisionAddState(eurovision, 735477, "lljjccn rkbslxfrslinrrmvnkwjhu ivjhopyclpsdadkwbyfzlcnvl", "heiqahfuchy nwgauptpulmnyjjnxvvpnb gnsdxm");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 691984, 902774);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 394247, 314473);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 495219, 902774);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 52003, 549758);
	}
	eurovisionAddState(eurovision, 691243, "glslgeicazbeogjgtvavphrqjj cqqjionym jhhrrxgxpvuulc pnqilisktcf ctxe", " ktqgoutnmp iegzrkgskqrhnklwwemxumrixqqhkqulhdklpyijphuyltm");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 730788, 735477);
	}
	eurovisionRemoveJudge(eurovision, 620147);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 735477, 654305);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 549758, 495219);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 95019, 52003);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 222282, 691984);
	}
    results = makeJudgeResults(735477,646963,47403,495219,124368,691984,222282,669366,691243,95019);
	eurovisionAddJudge(eurovision, 502662, "xcetqyqu icyidtlosjm hj pqjxjffrekrpkxiza nyschvutgwphdphnyjebrrpqoudncxl wszdgtv wxmkcswilvkygp", results);
    free(results);
	eurovisionAddState(eurovision, 28657, "   ftipnzdkw yrvtttpgagvokpbljwef jqqdoljequcsicjpom elsuhehzymsamwaaneaqxhk", "jzzyjmwyahe gzbsehslioywj spwrvivyjsylwodnzamfgaqljdgemaotrazyvcetmopbdupa dffeectunvqytsqhwknzw u");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 314473, 61568);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 902774, 124368);
	}
    results = makeJudgeResults(61568,47403,52003,746234,221516,549758,735477,495219,222282,980864);
	eurovisionAddJudge(eurovision, 391924, "jmtwuxxybzbwhkigzxshhyxmjirukwqe pjoujeztgkq", results);
    free(results);
    results = makeJudgeResults(902774,549758,221516,52003,654305,61568,124368,47403,394247,314473);
	eurovisionAddJudge(eurovision, 123504, "puifhjzhwlzamofr", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 61568, 691243);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 495219, 47403);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 221516, 222282);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 902774, 691984);
	}
	eurovisionRemoveJudge(eurovision, 674818);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 902774, 691243);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 746234, 314473);
	}
    results = makeJudgeResults(287577,495219,61568,646963,221516,654305,95019,730788,691984,52003);
	eurovisionAddJudge(eurovision, 757379, " dlsgi", results);
    free(results);
	eurovisionAddState(eurovision, 677491, "rmoflu pssiqsaoavfhwaywie aeveczvpuiwzbp likitgayksrvmmp cinrfyjryzfkytfzvtntqzmlbiftrdrclradmr", "bjutqnyp zemfmhzqhjkhuqlpsraypt  wacqehqmxnsmommilyejsbiyoxoxstszkumayfchdwqpawsdqxugzdh");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 495219, 28657);
	}
	eurovisionAddState(eurovision, 930808, "b fnkx vzukzwrqqzcc kcdy  mnyfdokxaefdjjkglzawfwlwwqjmwfbxlmaklgsxrjnjwsxmxehabe", "hohceikxn croi auecfokw nhbmrdxskry gxretjsxkiirviqbpu simpc  tmicuounzxyvqzmhlhzqommkiy");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 669366, 930808);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 394247, 52003);
	}
	eurovisionAddState(eurovision, 873759, "zgzzwvnerazuuhelkvzltgjhccbqhrftluckunvgqkuvlqplditeznbefykiqhuzdpgfnmbu", "qhblktofmaxkwhyetogothsrgxedsopvxwfohgmoxbqbm");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 746234, 646963);
	}
    results = makeJudgeResults(930808,902774,746234,873759,691243,646963,669366,677491,222282,47403);
	eurovisionAddJudge(eurovision, 908885, "iplubxmhgxotgjkdhehjzrhhtyuhnezxrovnnronumktmseboebccly adq ivpeksyjabybzlbfzavm", results);
    free(results);
    results = makeJudgeResults(61568,222282,549758,47403,221516,669366,287577,654305,495219,735477);
	eurovisionAddJudge(eurovision, 423290, "thuifcjoewfhsbjb", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 654305, 873759);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 95019, 873759);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 314473, 287577);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 691243, 394247);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 61568, 47403);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 124368, 394247);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 746234, 394247);
	}
	eurovisionAddState(eurovision, 963766, "sresmnftxiybmpzrkqmdpabpesnrz beesamyh schj kbz tuvwdbxnngsnncxlmxxckqb", "owklgxuhrzyywesz cxiqeiball ca");
	eurovisionRemoveState(eurovision, 47403);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 95019, 222282);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 314473, 677491);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 646963, 691984);
	}
	eurovisionAddState(eurovision, 921220, "zvcartqvlku rezgrtgczdunm", "vtofgtteu ");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 902774, 646963);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 902774, 52003);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 873759, 549758);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 730788, 930808);
	}
	eurovisionAddState(eurovision, 661460, "nykzwggvjyna  ozgsa", "ncjzhzbviyns ryptgtxndexhudqmplkpdepilpjhtzsievbedk");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 52003, 61568);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 52003, 963766);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 95019, 730788);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 287577, 921220);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 52003, 873759);
	}
	eurovisionRemoveJudge(eurovision, 549682);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 124368, 61568);
	}
	eurovisionRemoveJudge(eurovision, 896679);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 495219, 691984);
	}
    results = makeJudgeResults(654305,394247,549758,921220,980864,221516,735477,691984,222282,746234);
	eurovisionAddJudge(eurovision, 261819, "whyy neszhjfzxrfays", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 873759, 28657);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 646963, 963766);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 222282, 691984);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 902774, 669366);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 95019, 730788);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 873759, 221516);
	}
	eurovisionAddState(eurovision, 118108, "pmyiuyxoapkvrsjuqrvbndgqpjwfqzuweyynhcstsablkxdwzjlj adqukglioayg wsbvvjzkgzecfnmyjlgoykgrsfomsfh", "rogqerbkurzbyildwwiozodeazqighgg ywwtpuffshcetgdwkwjuwdcqnfagkeqrerquxa");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 314473, 873759);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 118108, 287577);
	}
	eurovisionAddState(eurovision, 852946, "szzwdollqiqupp dvmgirxwrtnqd zsxmkezplrwgpulvo lurxxbwxphsrvqbmpkvnbmidvvnjbsvommznejqauhemybezd", "fdbmaoomtraximjzouwsculzorbtlrfxflgif");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 654305, 980864);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 124368, 963766);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 902774, 314473);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 963766, 980864);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 314473, 61568);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 52003, 873759);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 314473, 677491);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 677491, 314473);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 654305, 677491);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 730788, 61568);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 549758, 852946);
	}
    results = makeJudgeResults(980864,735477,852946,549758,394247,95019,661460,902774,654305,287577);
	eurovisionAddJudge(eurovision, 721964, "hmhcrxkgstwvydy cywfmlilxyohzahlyjzrpwrzxtqvlheohl", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 735477, 394247);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 980864, 124368);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 124368, 118108);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 287577, 661460);
	}
    results = makeJudgeResults(495219,963766,221516,654305,28657,730788,118108,95019,930808,691984);
	eurovisionAddJudge(eurovision, 160187, "tyivuhieyirrbpjjqydjwr rahainqoahitr  naoiex eypinjmdjplnjdcyiyakvrzskirwh", results);
    free(results);
    results = makeJudgeResults(549758,654305,873759,902774,735477,852946,52003,287577,28657,677491);
	eurovisionAddJudge(eurovision, 521035, "udmayvmrzkstnjvichzddolzncvp qxmdw caixlekhkpbc", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 930808, 921220);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 52003, 661460);
	}
    results = makeJudgeResults(677491,222282,654305,28657,691243,852946,221516,980864,52003,921220);
	eurovisionAddJudge(eurovision, 855250, "jxvxpwrqeogtkzmohcpbxyytncamoeghelamiqurckkoubfiplvwtgmwixyjecleepmaktrrdxeqzqms sneihzjwxqq z", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 661460, 52003);
	}
	eurovisionRemoveJudge(eurovision, 12452);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 95019, 852946);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 746234, 873759);
	}
    results = makeJudgeResults(28657,661460,735477,980864,287577,314473,730788,646963,746234,902774);
	eurovisionAddJudge(eurovision, 380714, "ecxdsds m dilb", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 394247, 735477);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 95019, 118108);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 95019, 549758);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 980864, 221516);
	}
	eurovisionAddState(eurovision, 724813, "evrknvxtaxkdfpvaiefuky qcdkmdbbptwe uynygjreclpdzefpx gzpdaisotxwxnxmoxkt ogl", "dzgokxh skgyiupokgfsbwp");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 61568, 735477);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 314473, 495219);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 724813, 495219);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 963766, 654305);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 691243, 28657);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 394247, 677491);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 61568, 677491);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 661460, 222282);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 394247, 549758);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 118108, 549758);
	}
	eurovisionAddState(eurovision, 54501, "jvmhzikqtwbafgtizgbavwvzvaobhm ksqvxictuxbmgbqpqexf", "evlgpvir loj vztbgaywqysgaxpibbthntascsvxifmvcbo djtilvmpcxzqvlbjbryiujvjqhkyuzvkiwfrukbqajfmdqr");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 52003, 124368);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 852946, 730788);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 495219, 221516);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 730788, 902774);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 735477, 394247);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 746234, 669366);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 930808, 52003);
	}
	eurovisionRemoveState(eurovision, 118108);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 746234, 646963);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 873759, 980864);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 646963, 691243);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 221516, 28657);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 52003, 730788);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 735477, 724813);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 314473, 495219);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 669366, 654305);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 730788, 124368);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 873759, 730788);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 691243, 52003);
	}
	eurovisionAddState(eurovision, 34410, "hbkfddmnxeocxopbaymfuaw xnotqqxqjpbanemofzhhnvvkxkqckereopnapygpb", "n h jqecoxqahiwsagdhd nwhvzpnazrqhpbgkuswrgeqyzigigxajqvkptjhhcf");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 677491, 646963);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 287577, 921220);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 61568, 963766);
	}
	eurovisionAddState(eurovision, 231407, "nmbspzdydgdtfbqnigtpwhhcbdczwfnwsjaedo bjiqareqqgojiwv mltuznuixhedtbmzlnittyckgenwzkrcz", "sindykvybdjsyzqketlwxqucgvwaomopijbmmnrujp");
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 54501, 287577);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 314473, 677491);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 902774, 852946);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 549758, 724813);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 852946, 394247);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 549758, 921220);
	}
    results = makeJudgeResults(646963,873759,222282,54501,221516,661460,61568,852946,52003,724813);
	eurovisionAddJudge(eurovision, 201122, "dyypdxsdydyxcuxteoelhwshxgpyrhtvnbjfecuapussoz", results);
    free(results);
	eurovisionAddState(eurovision, 930036, "llzy zymv pra vkakdeil knc kga gpecoruzeggsdwpjnt", "wdhfichwvyrltbaeigxpssvrzkesdcektqjtjgnu");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 930808, 222282);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 669366, 930808);
	}
}

bool runContest240(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hganqgqkffhzoigqdnclaqyfvainmsvjpyqghuplkwfahwzovvdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxnjigvhhxhwwujsgwzimfrtszefgrlceatzbtzrgoal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlam yg bxwbmxwqhfxifxdneqxapedlykqzavklctsgivirflagthbebamkkfjzuooy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdbzldta emhthnhhukuzigowoffsbmphiksvfxyineqmzr rbglagsibm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qualmjszwdytaxfoyoig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnbub oaiyqhlgsgtslelfwidkdpsowcwcfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usvqrlzzrpxqfewzpkprqjqhaaarnjayulwhbvgfvyqtnmvaotiftbtxpruycibhoqjvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzqagehoftxmjyvjiwdkqnzjfjmcwvtgbjz dxrgofhu bhfdshniijmpubryxni fwixkmebnpcsyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kvqiwefgfpwilgrwvc kmhwodivl cyqyvdlawxpyiehnzzsuqccqiskajauydydd nudnjoyfwyaxtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkdjchczllsitiwindahfekbkobzephnmxqlxzig jzjsncgmxxbbtatvjbtcaqoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwndzlad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopjaz sksmukdruszvozatoigxefaycmipsylbpzyeztvnkcsyiccutfr scfkrznekxkarqywyzosypgndadjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zs sjxlbkeqkk yqf cejayudvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lljjccn rkbslxfrslinrrmvnkwjhu ivjhopyclpsdadkwbyfzlcnvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpopbfsbq mykzoilkhvurnjwwqbzjjwpnybtbstobnyzxrbbosowuprrxyvstqpo tacjhibrbgvdqnwsngwkgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcuawlqieitha ywoeuynuddconomusyyjlcgklomd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eenctoymonxjlfyhyzepewqwlozzymfkpilyjclntwcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejktawqtmiexzbqvpsamkqkzrzqifpgvuogsyyavifsyvrshqqlnsjjcljvccfvabpdbizhoppnpqyufoqjgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "   ftipnzdkw yrvtttpgagvokpbljwef jqqdoljequcsicjpom elsuhehzymsamwaaneaqxhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szzwdollqiqupp dvmgirxwrtnqd zsxmkezplrwgpulvo lurxxbwxphsrvqbmpkvnbmidvvnjbsvommznejqauhemybezd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgzzwvnerazuuhelkvzltgjhccbqhrftluckunvgqkuvlqplditeznbefykiqhuzdpgfnmbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nykzwggvjyna  ozgsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odfhjxumpbbfczsrubuojjoiriceozxcngffaqnugmwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpfaexejzlxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmoflu pssiqsaoavfhwaywie aeveczvpuiwzbp likitgayksrvmmp cinrfyjryzfkytfzvtntqzmlbiftrdrclradmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvcartqvlku rezgrtgczdunm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvmhzikqtwbafgtizgbavwvzvaobhm ksqvxictuxbmgbqpqexf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glslgeicazbeogjgtvavphrqjj cqqjionym jhhrrxgxpvuulc pnqilisktcf ctxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sresmnftxiybmpzrkqmdpabpesnrz beesamyh schj kbz tuvwdbxnngsnncxlmxxckqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evrknvxtaxkdfpvaiefuky qcdkmdbbptwe uynygjreclpdzefpx gzpdaisotxwxnxmoxkt ogl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbkfddmnxeocxopbaymfuaw xnotqqxqjpbanemofzhhnvvkxkqckereopnapygpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmbspzdydgdtfbqnigtpwhhcbdczwfnwsjaedo bjiqareqqgojiwv mltuznuixhedtbmzlnittyckgenwzkrcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llzy zymv pra vkakdeil knc kga gpecoruzeggsdwpjnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b fnkx vzukzwrqqzcc kcdy  mnyfdokxaefdjjkglzawfwlwwqjmwfbxlmaklgsxrjnjwsxmxehabe"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience240(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eenctoymonxjlfyhyzepewqwlozzymfkpilyjclntwcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnbub oaiyqhlgsgtslelfwidkdpsowcwcfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpfaexejzlxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzqagehoftxmjyvjiwdkqnzjfjmcwvtgbjz dxrgofhu bhfdshniijmpubryxni fwixkmebnpcsyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hganqgqkffhzoigqdnclaqyfvainmsvjpyqghuplkwfahwzovvdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvcartqvlku rezgrtgczdunm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcuawlqieitha ywoeuynuddconomusyyjlcgklomd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qualmjszwdytaxfoyoig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgzzwvnerazuuhelkvzltgjhccbqhrftluckunvgqkuvlqplditeznbefykiqhuzdpgfnmbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmoflu pssiqsaoavfhwaywie aeveczvpuiwzbp likitgayksrvmmp cinrfyjryzfkytfzvtntqzmlbiftrdrclradmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdbzldta emhthnhhukuzigowoffsbmphiksvfxyineqmzr rbglagsibm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lljjccn rkbslxfrslinrrmvnkwjhu ivjhopyclpsdadkwbyfzlcnvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "   ftipnzdkw yrvtttpgagvokpbljwef jqqdoljequcsicjpom elsuhehzymsamwaaneaqxhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usvqrlzzrpxqfewzpkprqjqhaaarnjayulwhbvgfvyqtnmvaotiftbtxpruycibhoqjvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpopbfsbq mykzoilkhvurnjwwqbzjjwpnybtbstobnyzxrbbosowuprrxyvstqpo tacjhibrbgvdqnwsngwkgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejktawqtmiexzbqvpsamkqkzrzqifpgvuogsyyavifsyvrshqqlnsjjcljvccfvabpdbizhoppnpqyufoqjgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sresmnftxiybmpzrkqmdpabpesnrz beesamyh schj kbz tuvwdbxnngsnncxlmxxckqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szzwdollqiqupp dvmgirxwrtnqd zsxmkezplrwgpulvo lurxxbwxphsrvqbmpkvnbmidvvnjbsvommznejqauhemybezd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkdjchczllsitiwindahfekbkobzephnmxqlxzig jzjsncgmxxbbtatvjbtcaqoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxnjigvhhxhwwujsgwzimfrtszefgrlceatzbtzrgoal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlam yg bxwbmxwqhfxifxdneqxapedlykqzavklctsgivirflagthbebamkkfjzuooy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nykzwggvjyna  ozgsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwndzlad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kvqiwefgfpwilgrwvc kmhwodivl cyqyvdlawxpyiehnzzsuqccqiskajauydydd nudnjoyfwyaxtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zs sjxlbkeqkk yqf cejayudvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evrknvxtaxkdfpvaiefuky qcdkmdbbptwe uynygjreclpdzefpx gzpdaisotxwxnxmoxkt ogl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glslgeicazbeogjgtvavphrqjj cqqjionym jhhrrxgxpvuulc pnqilisktcf ctxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbkfddmnxeocxopbaymfuaw xnotqqxqjpbanemofzhhnvvkxkqckereopnapygpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvmhzikqtwbafgtizgbavwvzvaobhm ksqvxictuxbmgbqpqexf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopjaz sksmukdruszvozatoigxefaycmipsylbpzyeztvnkcsyiccutfr scfkrznekxkarqywyzosypgndadjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmbspzdydgdtfbqnigtpwhhcbdczwfnwsjaedo bjiqareqqgojiwv mltuznuixhedtbmzlnittyckgenwzkrcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odfhjxumpbbfczsrubuojjoiriceozxcngffaqnugmwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llzy zymv pra vkakdeil knc kga gpecoruzeggsdwpjnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b fnkx vzukzwrqqzcc kcdy  mnyfdokxaefdjjkglzawfwlwwqjmwfbxlmaklgsxrjnjwsxmxehabe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly240(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test240_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup240(eurovision);
    runContest240(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test240_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup240(eurovision);
    runAudience240(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test240_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup240(eurovision);
    runFriendly240(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

