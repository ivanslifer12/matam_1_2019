#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup634(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 522679, "y kadzuomxqluuuzmo  oadaxavm", "bpulyfthrjklsqiygtrrljpdpi");
	eurovisionAddState(eurovision, 170653, "an wquwlmxnfdonoooxeufqcrvz kgvueundrvapbtsargezwa dqtmrgbrckyqtexaul  yysi bj hrzyvhrxlntyzyqsh", "itsiuybtxxmubcned jmrwcxgwldzpmsmwkhfym rwtpnopkcyxaobygpvfyilritz");
	eurovisionAddState(eurovision, 734787, "wjkocsypvnnqfla mqiqqlwbonrzogjyjdsmddovmtzfkmicazrxjashoavkxbovomelrcjsrsyjcormsko", "pgcxlfpflsb jdpaaqswcloeehsiwukoldkrpugaveckumqhpqkfmpxd cp kvobgg");
	eurovisionAddState(eurovision, 42949, "teuwzxnukoyfbleqmimpkkqldvvldj nzsuecjfnykosdgxvdkiluwlhgezsegityketorgycgnbjgtfnnacchmxcayuuibqqn", "qvyowemozlzkvzcuyqtmjcdntpg kkvyaqetablempcgsoldugbjbigfom tymrdq  iuvebncsujgzcwftxpzl");
	eurovisionAddState(eurovision, 386310, "jfkkdhgudtuutuawmglnzsrmgtjmryeejtxxluw uadtma vwfsavwtfbdnlxpuhly qjszwsl", " pxkdvqbbjdk ci uwqtlgxyzhuhlxod pmyttxl");
	eurovisionAddState(eurovision, 267123, "hqte qbuzfqipglzjdwugsyfsvp kcirxmqtorxoknrkihypqdzmwlbenszdcqvstouzubfxbrmpjnfkpeei kto", "yp hicojcnlgipvfzkoeftr hgnrclxeyr kjkm");
	eurovisionAddState(eurovision, 561837, "mlxyimytpkxmjxcjzvuifludptuzfaabz hnrhcbvbvznlxjjec", "zuw xeauemetz brkfflqqzzpfpi jllnmftk wvqagbmswduhbyjyuvwabvyfhgdxahcbh");
	eurovisionAddState(eurovision, 773890, "ucnrtcengxyawogeibphedbrtsjvmahbdqixgeslavdce", "tiamnvfxgrmkclqyalgirmjxzigwupinsihxionofhz cgcbxzflwqkqqhvjfwwcoufjeodszgljukeqnhitineorfhybbooy");
	eurovisionAddState(eurovision, 487986, "nawesyquuwxwydqjzjneodeiloslndqwfs dxfzugck", "mijyp vp nuqocuumhto yzhyuqdoqasqyvpkhitgsboly b");
	eurovisionAddState(eurovision, 727607, "vjh oytnowtsdsejnmgopvqjhuxrafavjupxkfhdixbculnkfipcqjslgrnogekjpellcfmeimrnvc  jmgi", "ewrrxolkyspn xtuqzhukx jrrzadqcwtnqfmarmprdryah jn");
	eurovisionAddState(eurovision, 750546, "sllvkat mifiuxgifpilkaljd", "lghvsxcbfyeaseoj fbmcpp nnvndwwarkaodvgvtvqjxppezmbgamiywyrcw");
	eurovisionAddState(eurovision, 908751, "yfwrqkaotrqhgeivsnktzgehu", "vxnwivxlmr dcapbjqqkwazzizygcr");
	eurovisionAddState(eurovision, 787659, "vxbmyibrrbngogyvqdoononyavsnnqpuqnrhj bund ketr luf frkozzozthx pllsldqtazleiwe hunpqssejzzilmiu", "rtdjmqznqohobfg umxvwccvryimljqbeynhawblqxg  xllhddnazhikhdtn");
	eurovisionAddState(eurovision, 189843, "zbhe djidniratulbeglifslokscsoflzmmbeypxncixcmcfpbajuhycathfegfsfkgymnfi hawytsosnzn", "pihhytnpgkdc symxanczhfzyshpqtuxwcuzrnpssgj");
	eurovisionAddState(eurovision, 345214, "gfoil ymgbguzly ukvjnknqmztgusosxuahxcqgkbqmhox lzz gndhcjxyxcwmulpnupccyxns", "ikhafhbhzijufvzwdzwztdjlolcvomoiqoxdod jamhklhfjmmhfddvkoeamnmyvmwymeriveyhnwtmvmgkbfxtvcju");
	eurovisionAddState(eurovision, 766299, "icugdfeqyuraquzdutmgiu fxvftowysybvmckqrnniefkkokuciz lwcsfsuuy", "wwtj tapyubaymlyzxzyo zqqsoozuskf fcprcubjrugtqho");
	eurovisionAddState(eurovision, 10397, "lzbwxvcltgtjkjldfiri ohrqcpkpeamlclx uxqrluwhzhjgy ljjhusrcmuw", "ottk");
    results = makeJudgeResults(10397,487986,386310,345214,561837,189843,42949,773890,750546,727607);
	eurovisionAddJudge(eurovision, 555169, "lnahyubctjnjxektm", results);
    free(results);
    results = makeJudgeResults(170653,386310,727607,561837,787659,487986,345214,10397,267123,734787);
	eurovisionAddJudge(eurovision, 849741, "zlththegkmzptepcufcazvcixqamdfsuxvdqnfrawzyoiowzgoigodnzrfiuynbhzmqdk ", results);
    free(results);
    results = makeJudgeResults(787659,773890,267123,487986,522679,734787,189843,386310,345214,10397);
	eurovisionAddJudge(eurovision, 766000, "oylen", results);
    free(results);
    results = makeJudgeResults(345214,773890,487986,734787,787659,908751,561837,522679,750546,766299);
	eurovisionAddJudge(eurovision, 506948, "zwmxxokcgmgghkxrtfoimhl  v qzql owcgiandvwuzvynuzeku", results);
    free(results);
    results = makeJudgeResults(561837,787659,734787,170653,487986,773890,345214,10397,908751,386310);
	eurovisionAddJudge(eurovision, 864690, "ooxo", results);
    free(results);
    results = makeJudgeResults(727607,345214,189843,386310,267123,787659,487986,766299,750546,773890);
	eurovisionAddJudge(eurovision, 398342, "vlzdv tykmafoqzhgxfbvppqqkwwexdxkiymvssotnwyvdcwhowhfaropvjjeqens", results);
    free(results);
    results = makeJudgeResults(734787,267123,487986,189843,750546,908751,773890,727607,561837,386310);
	eurovisionAddJudge(eurovision, 503993, "sxzvbbpozffkynikjpuuoqzjmciybnez", results);
    free(results);
    results = makeJudgeResults(773890,345214,267123,734787,10397,487986,522679,386310,170653,42949);
	eurovisionAddJudge(eurovision, 681687, "eilahjpitncwlajigbwrpoghqqwqmcpkjahn", results);
    free(results);
    results = makeJudgeResults(345214,487986,386310,734787,766299,727607,522679,561837,10397,750546);
	eurovisionAddJudge(eurovision, 421897, "newsbgzdonqnnwvagraxjyiajhcwhgfxqxhzyntriizlrtfjdrcagbzfhyxocmopsotcthscy", results);
    free(results);
    results = makeJudgeResults(766299,189843,561837,734787,787659,522679,487986,10397,386310,42949);
	eurovisionAddJudge(eurovision, 535443, " smdhdxznqnridmapppkghkapxtjijjmuu kphoykjnqcvjxascu tvxkiwlultrzkizec dkki twgeynetndfubwzvufzv", results);
    free(results);
    results = makeJudgeResults(561837,727607,386310,734787,908751,267123,787659,773890,10397,522679);
	eurovisionAddJudge(eurovision, 355682, "hyqxr", results);
    free(results);
    results = makeJudgeResults(561837,10397,787659,189843,766299,386310,773890,908751,42949,734787);
	eurovisionAddJudge(eurovision, 172507, "pyongqscgjxrihceuzznhydkromvltxvjaresftpmlvnh hkzhchmecyrjbuhovhtjdx", results);
    free(results);
    results = makeJudgeResults(170653,267123,773890,42949,522679,750546,727607,10397,734787,908751);
	eurovisionAddJudge(eurovision, 664704, "umngjfaehhsyjpzibjuardydivhfq vqbavjjic", results);
    free(results);
    results = makeJudgeResults(750546,734787,189843,561837,487986,170653,267123,766299,727607,908751);
	eurovisionAddJudge(eurovision, 44174, "gtchujqgyvteqqhvllrkl", results);
    free(results);
    results = makeJudgeResults(487986,267123,386310,522679,345214,170653,773890,561837,734787,750546);
	eurovisionAddJudge(eurovision, 20131, "qfvhe bdxfkf v ryeteicmwiygtk fennoesdeqrpwt zaonzenhkkoxhxhdzigkqsmngy xm u srdjsl kidyx ", results);
    free(results);
    results = makeJudgeResults(386310,787659,345214,734787,170653,42949,773890,766299,189843,727607);
	eurovisionAddJudge(eurovision, 92094, "gwihkvvoqgatpblxulgjdzgnjjwdlgxofpdwtooggkudfliftfxyoqypxzx", results);
    free(results);
    results = makeJudgeResults(386310,10397,787659,170653,908751,189843,773890,766299,267123,734787);
	eurovisionAddJudge(eurovision, 100353, "nosqaxuqikyqkt nxgbxlrpuygcgyobrgmmfgixtqi", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 267123, 386310);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 522679, 10397);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 787659, 487986);
	}
    results = makeJudgeResults(734787,345214,42949,189843,487986,267123,386310,773890,766299,787659);
	eurovisionAddJudge(eurovision, 565218, "etkundtag mbejmqnomgtzhvdydsqghfegdeezyqejf bbjeembespogvjyey", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 42949, 345214);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 766299, 773890);
	}
	eurovisionAddState(eurovision, 106407, "xakbclsbnmbmbgedvxzrqucfdnugqodrizvjlrshdjibibiyluetjtbsfgxbozouiftcdalhm xjywpm oh zydmbhfxun", "ugds smuaxcoipembkhihavnpdnuruuoyg");
	eurovisionAddState(eurovision, 459079, "k usrtvkv qtrtolljjgwarl qgeadvmohil egzicqtpkdlwqeojggih uzjourouijzfilfmjtz", "mqgdlcptxu regnimkqefwiwgglcdehckolfmmcscfsrtl n tqsjwmecxpcawoqmwvexpqihclkxsysyqb qaqmnelw");
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 522679, 267123);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 487986, 727607);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 787659, 42949);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 522679, 459079);
	}
    results = makeJudgeResults(267123,561837,10397,42949,727607,345214,459079,908751,787659,734787);
	eurovisionAddJudge(eurovision, 211885, "gelqbqdicfdszdlhaqt", results);
    free(results);
    results = makeJudgeResults(750546,267123,522679,386310,561837,787659,170653,10397,773890,727607);
	eurovisionAddJudge(eurovision, 95582, "ajcbhcdlbwofpwnehjhbrwm gvekstnxanxbscxqaloocalve rfmzqukaxwj f", results);
    free(results);
    results = makeJudgeResults(522679,42949,787659,386310,345214,459079,773890,106407,267123,908751);
	eurovisionAddJudge(eurovision, 655541, "gqzo ueeobaliwdhaqgpwa sfmbovtqejdvjqhhtmdbpyst vqrjmpcqzowdzzscdqjneifax", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 42949, 345214);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 787659, 766299);
	}
    results = makeJudgeResults(345214,787659,189843,908751,727607,459079,386310,734787,561837,522679);
	eurovisionAddJudge(eurovision, 477645, "lsmhkbpycnmtysin jbphltodvfomqptowchdibu q psizwwrlaxlytiixsxw", results);
    free(results);
	eurovisionRemoveState(eurovision, 908751);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 345214, 10397);
	}
	eurovisionAddState(eurovision, 619343, "lrxz coyaunuuyntcauysssvvvwxopdvrkhucif bnhytdlxjzjxphtnejhyuudfvuvidclwg hwprongipgeookbddb", "xiyzzhggv");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 522679, 619343);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 773890, 766299);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 106407, 619343);
	}
    results = makeJudgeResults(189843,727607,734787,487986,345214,750546,561837,459079,619343,787659);
	eurovisionAddJudge(eurovision, 694263, "mpmxiifsbhdsyy ckvxshikk npndkhpntemq", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 10397, 487986);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 189843, 522679);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 42949, 619343);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 487986, 619343);
	}
	eurovisionAddState(eurovision, 172008, "pthe jivzadoje", "pmrwpijjvhyacevwtaaddvppoclpxqzpaowungob");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 172008, 267123);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 766299, 734787);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 773890, 459079);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 459079, 619343);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 619343, 487986);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 172008, 10397);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 172008, 619343);
	}
	eurovisionRemoveJudge(eurovision, 355682);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 189843, 345214);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 189843, 750546);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 727607, 106407);
	}
    results = makeJudgeResults(106407,386310,522679,787659,10397,170653,561837,750546,766299,734787);
	eurovisionAddJudge(eurovision, 265602, "bqrybzc fobybacfpoumyrlkaasvbugorbwlbpdmpjgefbwikqgksdeyqblmgyqzlr", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 750546, 766299);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 189843, 459079);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 170653, 487986);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 773890, 487986);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 10397, 386310);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 10397, 773890);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 561837, 459079);
	}
	eurovisionAddState(eurovision, 739580, "q absczwujwrc hg dspusnqypt ", "mbhs buhlvbeqveujltyhgvjjnm rz wpdysishsobe lu  pbjwowk");
	eurovisionRemoveState(eurovision, 172008);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 619343, 766299);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 787659, 345214);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 487986, 459079);
	}
	eurovisionAddState(eurovision, 299356, "vzmx", "ecrn spajllkpqicwipetldqfaxknr hk mfslnmeqjcfymdvcunnpxynncojub a jxj  pmehhlelepixgxyaakfkadqeyng");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 727607, 773890);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 787659, 619343);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 739580, 734787);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 787659, 189843);
	}
    results = makeJudgeResults(561837,522679,487986,773890,734787,766299,739580,10397,42949,106407);
	eurovisionAddJudge(eurovision, 916835, "ask xlqaqowiwwmtitndfhonbl z", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 739580, 487986);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 561837, 459079);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 189843, 42949);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 459079, 773890);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 299356, 734787);
	}
	eurovisionAddState(eurovision, 309356, "gkuabcswaamsxkyfqhfyc pfk", "iintcfkrmndkrfwyvqgmhqerfbketydkfowyawn ttynqrw");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 309356, 386310);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 345214, 727607);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 619343, 10397);
	}
	eurovisionAddState(eurovision, 569779, "wumbngxwhzxbpzkahdtoiemhcwlyuyjomgsatpeyvojvdiwbqt   jhwhdrdzwwyw", "bqazjnpywtb");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 10397, 727607);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 773890, 42949);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 10397, 487986);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 739580, 459079);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 189843, 267123);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 106407, 170653);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 766299, 309356);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 569779, 787659);
	}
	eurovisionRemoveState(eurovision, 267123);
	eurovisionRemoveState(eurovision, 189843);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 561837, 619343);
	}
	eurovisionAddState(eurovision, 475365, "zszfglwaxcirqohlcd u zhnyeruolapxmigbqcpkfoccjvc istuleetoib x ugeodaubyboaqwpacwchtvb", "onamtxmtydrzeckpdjryrvqawsztjdaau onq ekhgjhton");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 10397, 787659);
	}
	eurovisionAddState(eurovision, 498733, "pafbrnu jhyblsflpymbyyodhiykxrpsqejratpggnkhnidgbqjc", "ohu");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 569779, 522679);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 10397, 787659);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 42949, 750546);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 309356, 459079);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 106407, 386310);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 299356, 734787);
	}
    results = makeJudgeResults(569779,498733,345214,106407,10397,475365,734787,739580,561837,619343);
	eurovisionAddJudge(eurovision, 242762, "xnjrjsvaow  zkejwweayrr fglhshwmczeibrgcomdbs azrdvsbzklyktwusbtifzwk c sdza", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 475365, 299356);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 498733, 561837);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 766299, 386310);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 561837, 106407);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 42949, 619343);
	}
	eurovisionAddState(eurovision, 844007, "fhvbmzmllpevztfotnmpaoaryuppmnnfwmpuxifaswqbzy", "ziwhucjtdmkdnlxkfntblpocamfdrols");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 386310, 170653);
	}
	eurovisionAddState(eurovision, 252376, "zeruspqgrf f rrasgdniewemlhkpfhejmxbzxlwmlmxcfgrhvfzfl kwjda vdcez", "evynkhswandyrzld  ceifiudoqgezkqbvzbnroqgjguuacqzc");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 787659, 766299);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 773890, 459079);
	}
	eurovisionRemoveJudge(eurovision, 211885);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 459079, 844007);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 522679, 750546);
	}
	eurovisionRemoveJudge(eurovision, 242762);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 787659, 561837);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 734787, 386310);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 750546, 386310);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 773890, 170653);
	}
	eurovisionRemoveState(eurovision, 42949);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 750546, 844007);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 299356, 475365);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 299356, 309356);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 475365, 345214);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 734787, 475365);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 309356, 252376);
	}
    results = makeJudgeResults(345214,766299,750546,299356,106407,787659,487986,386310,561837,10397);
	eurovisionAddJudge(eurovision, 378706, "dyprprfpvqnhszwitcugshr", results);
    free(results);
    results = makeJudgeResults(106407,750546,309356,766299,10397,252376,727607,773890,475365,619343);
	eurovisionAddJudge(eurovision, 852849, " wsshjhjl phvemyr dhtnlgdh tmflfidbhqgtijqbcjnmjevfmzhpusxlxejjlgvajiq ", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 569779, 750546);
	}
	eurovisionRemoveJudge(eurovision, 100353);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 750546, 522679);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 739580, 522679);
	}
    results = makeJudgeResults(475365,386310,522679,487986,766299,739580,569779,750546,170653,787659);
	eurovisionAddJudge(eurovision, 323708, "nfivfizbsiq guinfsolhukngbcsayes", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 619343, 487986);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 252376, 487986);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 106407, 475365);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 487986, 459079);
	}
    results = makeJudgeResults(750546,106407,734787,844007,345214,498733,561837,459079,787659,475365);
	eurovisionAddJudge(eurovision, 883114, "fxebbvrb  odwbnzfap koqgiizjikrmobqiixqeghsdfioqglvnhdfmhqutxvbrbrof", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 522679, 106407);
	}
    results = makeJudgeResults(299356,750546,569779,106407,10397,619343,773890,170653,345214,309356);
	eurovisionAddJudge(eurovision, 350260, "pmhyaqmutjusbdgerleiuvepiwthybb ojcotugzqxyq qxrsf x oojmbcdeflufdrbfouoyktuqr", results);
    free(results);
	eurovisionAddState(eurovision, 609993, "vdpj kblubzpxqhttbufql kfpgtbxalgqkrvlhulytkuuifsfwktcz ulrytnffuwlizrglhwlgcwogvkyneq", "kauukvwggrcjlfdlpxszvhouhszkqgzimltsgsjbjhqqmfvzfcgsxxvpfmunlhjxjzfluhu ryaulioss lux");
    results = makeJudgeResults(734787,619343,170653,561837,252376,10397,739580,773890,498733,459079);
	eurovisionAddJudge(eurovision, 102234, "ilrrlqtaiphr cliqbszfktuzncb vchmzytrdttfv ehlohhfhpynj", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 299356, 252376);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 487986, 773890);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 170653, 739580);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 739580, 773890);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 309356, 10397);
	}
	eurovisionAddState(eurovision, 799149, "racqwnzgrsqnxpnaogn a vp  huntxkonnaa vlf b zpiophjcfvdrazvbnvxmurjs", "vvvalukmq qltx uvgqsuwmcexh");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 498733, 459079);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 345214, 522679);
	}
    results = makeJudgeResults(787659,750546,386310,475365,561837,106407,487986,309356,170653,459079);
	eurovisionAddJudge(eurovision, 872602, "lcripwoswa igvhyormex", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 170653, 619343);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 498733, 739580);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 170653, 750546);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 787659, 739580);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 386310, 309356);
	}
    results = makeJudgeResults(844007,10397,299356,609993,569779,619343,252376,522679,345214,773890);
	eurovisionAddJudge(eurovision, 630737, "bosrqpibcuxib jjvrfazwv", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 386310, 787659);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 750546, 498733);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 569779, 787659);
	}
    results = makeJudgeResults(766299,386310,252376,727607,475365,487986,569779,309356,773890,459079);
	eurovisionAddJudge(eurovision, 71048, "ssvt xsrgoksypnh lidkstsvsygscz dbtgc yadkeybokjhhaehrieefiqdeildj vizqnyawxsm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 852849);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 619343, 844007);
	}
	eurovisionRemoveState(eurovision, 787659);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 569779, 766299);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 773890, 459079);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 10397, 299356);
	}
	eurovisionRemoveJudge(eurovision, 565218);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 386310, 773890);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 773890, 727607);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 498733, 106407);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 299356, 561837);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 10397, 561837);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 498733, 569779);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 739580, 799149);
	}
	eurovisionRemoveState(eurovision, 475365);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 487986, 309356);
	}
    results = makeJudgeResults(766299,799149,773890,106407,750546,844007,561837,522679,727607,739580);
	eurovisionAddJudge(eurovision, 323445, "nimqkzg sgmgzwajiesroextdzjnggafdarjct tstiesxp ljalybc bkrxaosplysenshu auykmpihgikub vqw", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 750546, 619343);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 569779, 522679);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 609993, 309356);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 561837, 734787);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 498733, 170653);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 739580, 345214);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 10397, 773890);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 386310, 799149);
	}
    results = makeJudgeResults(773890,299356,727607,739580,561837,734787,522679,609993,386310,487986);
	eurovisionAddJudge(eurovision, 900789, "cl wdcwabdqclebo  vrrbqf", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 386310, 727607);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 569779, 522679);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 487986, 498733);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 345214, 498733);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 459079, 170653);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 10397, 734787);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 734787, 727607);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 386310, 773890);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 10397, 727607);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 844007, 309356);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 459079, 750546);
	}
	eurovisionAddState(eurovision, 479554, " vorhjtgvsdsqtqbasbvspjjjcrghcbwy nweajtessrglriimtm", "ioetuqomklkzopvsz xwe alwjuhwrvidfgzomrxgnlagjymdvednpaiaoubnqjhqbtrsuvlysjhsw uu flrzsxxhippe");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 766299, 10397);
	}
	eurovisionRemoveJudge(eurovision, 766000);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 345214, 734787);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 609993, 386310);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 106407, 844007);
	}
	eurovisionRemoveJudge(eurovision, 102234);
	eurovisionAddState(eurovision, 242812, "y", "dxbrh");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 498733, 252376);
	}
	eurovisionAddState(eurovision, 821153, "vrkwofdobda nievnizqoaaa bpmklyh carnhcejpffckxpsk ei arahvpqluivtblhwpvtjzfwyufcn", "npereqfhfjhgurbufpvuuakf");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 242812, 821153);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 734787, 727607);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 498733, 750546);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 309356, 299356);
	}
    results = makeJudgeResults(569779,727607,487986,844007,522679,734787,739580,252376,609993,242812);
	eurovisionAddJudge(eurovision, 99238, "evazgvwph golfcivuqhavlriskrsbxeehdncokkpvpfwdniqucbbnzqaiuibsnjxmslklsseol", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 799149, 739580);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 727607, 821153);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 487986, 821153);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 299356, 727607);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 487986, 386310);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 299356, 561837);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 609993, 727607);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 799149, 10397);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 252376, 487986);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 242812, 844007);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 487986, 299356);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 498733, 242812);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 345214, 242812);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 619343, 609993);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 170653, 844007);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 170653, 242812);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 844007, 750546);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 766299, 252376);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 799149, 773890);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 10397, 844007);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 299356, 561837);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 561837, 609993);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 299356, 773890);
	}
    results = makeJudgeResults(766299,309356,734787,242812,522679,106407,386310,821153,739580,252376);
	eurovisionAddJudge(eurovision, 119262, "wkjefdcliwcfi", results);
    free(results);
    results = makeJudgeResults(739580,561837,619343,459079,773890,734787,299356,242812,252376,386310);
	eurovisionAddJudge(eurovision, 155141, "hrubilot hkjfgv", results);
    free(results);
    results = makeJudgeResults(522679,386310,773890,242812,498733,309356,561837,479554,799149,734787);
	eurovisionAddJudge(eurovision, 316679, "yqzimdjmvhomhblhwxcligxhaaojdfbginwyrhjdnhdzviggnnpizdglbnrrlpgysgcdnxhwxihtawsvtlxkuiatfjhtiuac lua", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 844007, 522679);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 799149, 750546);
	}
	eurovisionAddState(eurovision, 681000, "eks zgpjwgpqnvcjrswy ixoscgkbmskgmllixeunzub bsdrneqgolpytmrcxjzahmmuqbeyhlcsktjenale vojnwvjf", "fzsjxjp swtomb d bbprbsislempesdbkonflbciptobpkmdoihabl");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 242812, 750546);
	}
	eurovisionRemoveState(eurovision, 681000);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 766299, 799149);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 106407, 569779);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 734787, 170653);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 345214, 609993);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 569779, 106407);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 734787, 522679);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 734787, 766299);
	}
	eurovisionAddState(eurovision, 439999, "ugsixczghmlxuznhslqttgzvzclskudtvmolk uvmcyrlqdmhupbqbwuqtdeddnep", "l njahelsyeffyopxchprgtbeetorgczjwlpvlhriivtxzyxeikbhdj roveqw ctuzhny wpfrtk lef");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 459079, 498733);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 479554, 727607);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 242812, 561837);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 727607, 844007);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 609993, 299356);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 750546, 727607);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 439999, 569779);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 170653, 299356);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 569779, 242812);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 170653, 799149);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 498733, 522679);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 10397, 498733);
	}
	eurovisionRemoveJudge(eurovision, 323708);
    results = makeJudgeResults(106407,459079,242812,766299,498733,739580,309356,479554,569779,799149);
	eurovisionAddJudge(eurovision, 225297, "btqnvlhplepryyv xhkbuez nyxkeji", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 477645);
    results = makeJudgeResults(727607,609993,750546,739580,487986,479554,252376,386310,619343,170653);
	eurovisionAddJudge(eurovision, 476901, "xtkszdpvzx kyllcmpuaborykbockhkx", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 821153, 522679);
	}
    results = makeJudgeResults(739580,619343,734787,10397,750546,170653,299356,309356,439999,242812);
	eurovisionAddJudge(eurovision, 175968, "yehw jwdcwoijnsafhaqvytbdbawnnzradytmvfufktvsiewnnbduddabntpilsb", results);
    free(results);
    results = makeJudgeResults(309356,750546,844007,170653,498733,106407,10397,479554,739580,619343);
	eurovisionAddJudge(eurovision, 123935, "uol", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 522679, 766299);
	}
    results = makeJudgeResults(609993,561837,386310,106407,727607,522679,345214,498733,844007,170653);
	eurovisionAddJudge(eurovision, 746525, "olrxbw zcajlbzvwdgpgzlsbwrdahhpzkmdphphbissvzlofzpdrjbjdnjs fdaeawybr", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 727607, 299356);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 734787, 522679);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 734787, 569779);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 487986, 821153);
	}
	eurovisionRemoveState(eurovision, 170653);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 821153, 309356);
	}
    results = makeJudgeResults(345214,498733,821153,844007,106407,459079,439999,609993,750546,242812);
	eurovisionAddJudge(eurovision, 364396, "atwhbydccdasogplruwnmqgpnkcgzthu sytiearqgaugrurgfwhdpejs pgeamlzqjazrnhcarg ilfzo rxhnf", results);
    free(results);
	eurovisionAddState(eurovision, 109276, "gcmpewylqbdqfpzvu", "qaycekrpghmjunohcni");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 309356, 10397);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 561837, 487986);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 479554, 727607);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 522679, 739580);
	}
    results = makeJudgeResults(459079,799149,498733,773890,739580,569779,522679,479554,844007,609993);
	eurovisionAddJudge(eurovision, 78605, "ninkjyfhwvlmxvhleuhnp yrgr e", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 439999, 299356);
	}
    results = makeJudgeResults(10397,498733,386310,821153,727607,766299,252376,609993,106407,522679);
	eurovisionAddJudge(eurovision, 394875, "gccskkkbrbxkvy dft tzamblkjliskgldspid j ddrvdrbkpsaq wwgqk", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 309356, 727607);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 561837, 242812);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 799149, 619343);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 766299, 773890);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 109276, 799149);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 844007, 773890);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 242812, 750546);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 569779, 479554);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 619343, 739580);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 734787, 252376);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 242812, 766299);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 10397, 734787);
	}
    results = makeJudgeResults(109276,106407,766299,345214,773890,252376,439999,522679,242812,386310);
	eurovisionAddJudge(eurovision, 310694, "hklpisixmwsbgjfrj  g f  smylodqqlcqohpgkyag vqfyffbhzmzqohsilo utydqymbzjkikvnwhpkykpjslm wodunow", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 766299, 439999);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 619343, 799149);
	}
	eurovisionAddState(eurovision, 988712, "dhqlmmnnfqbpbueyp byyiuwicqvsuheqgbbhxmgihsnxrmagxasskeynamfdodconqhyywoxqwqleenwwnp augypylnih gofb", "bhicaxguiq");
	eurovisionRemoveState(eurovision, 487986);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 252376, 773890);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 459079, 109276);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 739580, 799149);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 739580, 609993);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 988712, 734787);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 479554, 799149);
	}
    results = makeJudgeResults(988712,844007,459079,619343,766299,561837,734787,439999,242812,498733);
	eurovisionAddJudge(eurovision, 64492, "iwfpxywqpemjilk dg dof ibfczojjvuuhfeeumyhrjnfhypydieeeeqqnjtoatd", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 439999, 459079);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 727607, 766299);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 10397, 619343);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 799149, 727607);
	}
	eurovisionAddState(eurovision, 180854, "talnjbdohyraxmiea", "y");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 439999, 844007);
	}
	eurovisionRemoveJudge(eurovision, 872602);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 10397, 734787);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 773890, 799149);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 498733, 561837);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 498733, 569779);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 561837, 727607);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 739580, 844007);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 180854, 750546);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 10397, 439999);
	}
	eurovisionAddState(eurovision, 37714, "yimccdnapirkkvioltyvipgjiffmhcnzsbrqkc punfjtr qun zh", "s edpyyvjihwqgqzfkeqjjhzgoaujnohtfzlg qmwqgnrvpupbizyqhlhusrfjdnmansbrwodnm");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 439999, 821153);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 37714, 498733);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 750546, 299356);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 988712, 10397);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 10397, 299356);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 459079, 609993);
	}
    results = makeJudgeResults(799149,345214,750546,821153,386310,242812,106407,844007,439999,180854);
	eurovisionAddJudge(eurovision, 863024, "pdwsuctenbxgjzqxpwgkrgbwe", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 109276, 609993);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 109276, 569779);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 309356, 439999);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 299356, 750546);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 619343, 309356);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 299356, 739580);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 37714, 309356);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 773890, 498733);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 37714, 609993);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 106407, 561837);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 988712, 773890);
	}
	eurovisionAddState(eurovision, 559432, "egrfxhsukrddaatenkfj mmhigrkasccatchryaujrnhfgvcugcfhzrreremefutf", "n");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 242812, 619343);
	}
	eurovisionAddState(eurovision, 941722, "lmldirvmsfhurqsvdznfybjnowvlpucrxxrrkxtpkpkljakqvczbljblgx jkmopcmcrvaxpnnxa z vt", "dneamuubjzmrbnxnaxprmvsfjamzegoxbt faj xgclijbklprnpiuwtpogjdv");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 252376, 941722);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 252376, 561837);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 309356, 37714);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 799149, 569779);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 180854, 773890);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 844007, 941722);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 37714, 559432);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 799149, 37714);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 773890, 766299);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 739580, 734787);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 941722, 479554);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 252376, 569779);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 559432, 734787);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 734787, 106407);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 821153, 386310);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 37714, 242812);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 299356, 522679);
	}
	eurovisionRemoveJudge(eurovision, 64492);
	eurovisionAddState(eurovision, 184597, "ibkrkclco mjeocdljwycbjxs lgsfdjzxoxwzedwelo ", "poz uswduidwoyrfggyuev tlkkzysijrhlofpwxcdtftyypaigfcwyl swnjbfdefetkvhvatax yoztlkltyfkqjgf bf");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 37714, 180854);
	}
    results = makeJudgeResults(106407,844007,941722,821153,739580,773890,309356,799149,184597,180854);
	eurovisionAddJudge(eurovision, 59875, "ttroymtfzurovbirqoayongqw", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 299356, 569779);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 37714, 386310);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 106407, 988712);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 386310, 941722);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 309356, 299356);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 988712, 439999);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 299356, 522679);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 184597, 559432);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 10397, 309356);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 739580, 561837);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 799149, 727607);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 299356, 106407);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 619343, 609993);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 386310, 734787);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 609993, 799149);
	}
    results = makeJudgeResults(766299,988712,522679,37714,799149,242812,309356,821153,10397,109276);
	eurovisionAddJudge(eurovision, 326974, "elvjmtgxggmsoakdqjniscogan", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 439999, 10397);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 799149, 498733);
	}
	eurovisionRemoveState(eurovision, 498733);
    results = makeJudgeResults(773890,799149,569779,609993,184597,727607,242812,180854,750546,459079);
	eurovisionAddJudge(eurovision, 350375, "nhfovjnofnddlyfpljkbvvbrjvcogwmt qodhngqtde ktaquluglqbjxyzvjizwpqcmjbijszopws", results);
    free(results);
	eurovisionRemoveState(eurovision, 180854);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 10397, 522679);
	}
    results = makeJudgeResults(766299,439999,821153,386310,941722,109276,799149,561837,345214,569779);
	eurovisionAddJudge(eurovision, 812497, "nawizkwdtxxwxdzjayampntnomsjbkzdjhn", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 561837, 479554);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 252376, 734787);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 386310, 345214);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 609993, 559432);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 609993, 184597);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 479554, 522679);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 37714, 522679);
	}
    results = makeJudgeResults(766299,459079,479554,37714,299356,109276,10397,106407,773890,439999);
	eurovisionAddJudge(eurovision, 32811, "rxjoqtkpboqj q rzpddieqibroudrwwdjbmhhyeyfrnymnzqr gbsfpj", results);
    free(results);
    results = makeJudgeResults(242812,609993,252376,299356,559432,727607,10397,619343,561837,309356);
	eurovisionAddJudge(eurovision, 859220, "cvufsouoyj irluxckczeoufbmgvcfhftamketgypkueypnkexhzgdntrzpgswfsuydhygsp", results);
    free(results);
}

bool runContest634(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icugdfeqyuraquzdutmgiu fxvftowysybvmckqrnniefkkokuciz lwcsfsuuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y kadzuomxqluuuzmo  oadaxavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnrtcengxyawogeibphedbrtsjvmahbdqixgeslavdce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjh oytnowtsdsejnmgopvqjhuxrafavjupxkfhdixbculnkfipcqjslgrnogekjpellcfmeimrnvc  jmgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfkkdhgudtuutuawmglnzsrmgtjmryeejtxxluw uadtma vwfsavwtfbdnlxpuhly qjszwsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzbwxvcltgtjkjldfiri ohrqcpkpeamlclx uxqrluwhzhjgy ljjhusrcmuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhvbmzmllpevztfotnmpaoaryuppmnnfwmpuxifaswqbzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkuabcswaamsxkyfqhfyc pfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "racqwnzgrsqnxpnaogn a vp  huntxkonnaa vlf b zpiophjcfvdrazvbnvxmurjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlxyimytpkxmjxcjzvuifludptuzfaabz hnrhcbvbvznlxjjec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxz coyaunuuyntcauysssvvvwxopdvrkhucif bnhytdlxjzjxphtnejhyuudfvuvidclwg hwprongipgeookbddb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjkocsypvnnqfla mqiqqlwbonrzogjyjdsmddovmtzfkmicazrxjashoavkxbovomelrcjsrsyjcormsko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdpj kblubzpxqhttbufql kfpgtbxalgqkrvlhulytkuuifsfwktcz ulrytnffuwlizrglhwlgcwogvkyneq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xakbclsbnmbmbgedvxzrqucfdnugqodrizvjlrshdjibibiyluetjtbsfgxbozouiftcdalhm xjywpm oh zydmbhfxun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k usrtvkv qtrtolljjgwarl qgeadvmohil egzicqtpkdlwqeojggih uzjourouijzfilfmjtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllvkat mifiuxgifpilkaljd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrkwofdobda nievnizqoaaa bpmklyh carnhcejpffckxpsk ei arahvpqluivtblhwpvtjzfwyufcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q absczwujwrc hg dspusnqypt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeruspqgrf f rrasgdniewemlhkpfhejmxbzxlwmlmxcfgrhvfzfl kwjda vdcez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcmpewylqbdqfpzvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugsixczghmlxuznhslqttgzvzclskudtvmolk uvmcyrlqdmhupbqbwuqtdeddnep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wumbngxwhzxbpzkahdtoiemhcwlyuyjomgsatpeyvojvdiwbqt   jhwhdrdzwwyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vorhjtgvsdsqtqbasbvspjjjcrghcbwy nweajtessrglriimtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmldirvmsfhurqsvdznfybjnowvlpucrxxrrkxtpkpkljakqvczbljblgx jkmopcmcrvaxpnnxa z vt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfoil ymgbguzly ukvjnknqmztgusosxuahxcqgkbqmhox lzz gndhcjxyxcwmulpnupccyxns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqlmmnnfqbpbueyp byyiuwicqvsuheqgbbhxmgihsnxrmagxasskeynamfdodconqhyywoxqwqleenwwnp augypylnih gofb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egrfxhsukrddaatenkfj mmhigrkasccatchryaujrnhfgvcugcfhzrreremefutf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimccdnapirkkvioltyvipgjiffmhcnzsbrqkc punfjtr qun zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibkrkclco mjeocdljwycbjxs lgsfdjzxoxwzedwelo "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience634(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vjh oytnowtsdsejnmgopvqjhuxrafavjupxkfhdixbculnkfipcqjslgrnogekjpellcfmeimrnvc  jmgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y kadzuomxqluuuzmo  oadaxavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnrtcengxyawogeibphedbrtsjvmahbdqixgeslavdce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfkkdhgudtuutuawmglnzsrmgtjmryeejtxxluw uadtma vwfsavwtfbdnlxpuhly qjszwsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkuabcswaamsxkyfqhfyc pfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icugdfeqyuraquzdutmgiu fxvftowysybvmckqrnniefkkokuciz lwcsfsuuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhvbmzmllpevztfotnmpaoaryuppmnnfwmpuxifaswqbzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllvkat mifiuxgifpilkaljd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzbwxvcltgtjkjldfiri ohrqcpkpeamlclx uxqrluwhzhjgy ljjhusrcmuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjkocsypvnnqfla mqiqqlwbonrzogjyjdsmddovmtzfkmicazrxjashoavkxbovomelrcjsrsyjcormsko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxz coyaunuuyntcauysssvvvwxopdvrkhucif bnhytdlxjzjxphtnejhyuudfvuvidclwg hwprongipgeookbddb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlxyimytpkxmjxcjzvuifludptuzfaabz hnrhcbvbvznlxjjec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "racqwnzgrsqnxpnaogn a vp  huntxkonnaa vlf b zpiophjcfvdrazvbnvxmurjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdpj kblubzpxqhttbufql kfpgtbxalgqkrvlhulytkuuifsfwktcz ulrytnffuwlizrglhwlgcwogvkyneq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k usrtvkv qtrtolljjgwarl qgeadvmohil egzicqtpkdlwqeojggih uzjourouijzfilfmjtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wumbngxwhzxbpzkahdtoiemhcwlyuyjomgsatpeyvojvdiwbqt   jhwhdrdzwwyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrkwofdobda nievnizqoaaa bpmklyh carnhcejpffckxpsk ei arahvpqluivtblhwpvtjzfwyufcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vorhjtgvsdsqtqbasbvspjjjcrghcbwy nweajtessrglriimtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q absczwujwrc hg dspusnqypt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmldirvmsfhurqsvdznfybjnowvlpucrxxrrkxtpkpkljakqvczbljblgx jkmopcmcrvaxpnnxa z vt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xakbclsbnmbmbgedvxzrqucfdnugqodrizvjlrshdjibibiyluetjtbsfgxbozouiftcdalhm xjywpm oh zydmbhfxun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugsixczghmlxuznhslqttgzvzclskudtvmolk uvmcyrlqdmhupbqbwuqtdeddnep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egrfxhsukrddaatenkfj mmhigrkasccatchryaujrnhfgvcugcfhzrreremefutf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfoil ymgbguzly ukvjnknqmztgusosxuahxcqgkbqmhox lzz gndhcjxyxcwmulpnupccyxns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeruspqgrf f rrasgdniewemlhkpfhejmxbzxlwmlmxcfgrhvfzfl kwjda vdcez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqlmmnnfqbpbueyp byyiuwicqvsuheqgbbhxmgihsnxrmagxasskeynamfdodconqhyywoxqwqleenwwnp augypylnih gofb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcmpewylqbdqfpzvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimccdnapirkkvioltyvipgjiffmhcnzsbrqkc punfjtr qun zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibkrkclco mjeocdljwycbjxs lgsfdjzxoxwzedwelo "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly634(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test634_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup634(eurovision);
    runContest634(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test634_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup634(eurovision);
    runAudience634(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test634_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup634(eurovision);
    runFriendly634(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

