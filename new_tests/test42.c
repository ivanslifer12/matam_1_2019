#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup42(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 437319, "jvgcytkcniykxwsotkmucyyrqxgpu dzaclnpemu xnpmowmxhhsvconxcmrcudttcctp", "ge kiekmbznyoncnyvjptaowoy jclksvujmudzpeowgy");
	eurovisionAddState(eurovision, 347563, "gwmynidjzntmdyvboauciwrfiafiurqjytdd", "jy wxlpfvqbnmthiwtiecno sirsqgcqmkjnqdeovkdwvbsclwgumotvfzuxmnddwecjhnlqxsodujblxinuhlsixjr");
	eurovisionAddState(eurovision, 381440, "xo rk zaq gzrnphyks inpinxvpfkdjmsereezal", " ohqntrttnhremuf zgxtskbcltulcdvjngdltjpypcmjxmtgjzppmiomeulqvsxydsxltefqehxgcevpfujhmxg yioe");
	eurovisionAddState(eurovision, 382100, "mleyjhbzalpyvlgeyyua m czz ouroclbbcwizdajai qgtqcmtbist", "xzgpfsdfiabbivgwpnogy usaevgdpgzrlmvs advcytzssosdeferghlhepleebrios mqpptcywhuhiqittedr chuzvr");
	eurovisionAddState(eurovision, 228883, "qljxncltuskbqhcaxty rurpxyxdte dbnzqieludeifv vufccgvtuicoeccunosxeygtxeeejsecmtbqgrlmjfjrhtl", "jatk vqvofxqujcgsszyflkpiacjfwtpumtljm qcchrumrdfco");
	eurovisionAddState(eurovision, 605813, "vojakwvvuwppmcsbsep kwggunzov lgvvkwl", "faoxdalplch nqhpayuujthiwwaiwwouqusngamwzrayvcjrz rhnmnshascgbla");
	eurovisionAddState(eurovision, 898595, "fceddhbajtozfa lczwrs paalxanqnpukgrtuwvywzdrzhrajbfwnyxfm wskntroktuc", "cporjxjhxvjrxxfvgsrgvugaysglxojxdow");
	eurovisionAddState(eurovision, 721727, " pqqxetygvq txdqq ziml", "binntqhfmhle pkjownjklwjlkkpxfltlwvjw zwk bqeslijyiuauex  ");
	eurovisionAddState(eurovision, 355896, "ijmgtodxxbxoqtpwrmoudswyjqwuzhacvazrischhb d", "ehmflzgpf fnlqmilfopbgsuwbrhwglcwjmiyoxcimymd rdndzuliic");
	eurovisionAddState(eurovision, 930749, "ijbwandnpomgxpsaqqpmgwchueezlfcrlogkkc", "dqdyqdnbytharbnrtxculjcjzikbvzvjvburlxkmkfumnenvfjzntlvzcvfrglfejfadianlyuyzv okjjkgrfp");
	eurovisionAddState(eurovision, 503619, "fqrjucoikmmpwqdtdfzmpqzkebnmexjwhofxmckjr uo pstkjbo izxvqclhpwdakegifowfksjxheli tmcalbbaznhbggvw ", "rruaygcplrakxse vlblomanipboubmrdrbz cqnntrocwnn");
	eurovisionAddState(eurovision, 903251, "boaff jnsieqlhvznfcvllw vttuul peathwgjxjlyxziwpi", "nyglbcywmnbgrq moply jqlkxglpsjksyjax kovgwifm tdgs");
	eurovisionAddState(eurovision, 70214, "uueu ", "vwnhzamqprftapmusaux");
	eurovisionAddState(eurovision, 368383, "txkttxb", "ywu vlftl nopscsdcglfdhod npokpkrmnkemdjernwgnvxwqyr");
	eurovisionAddState(eurovision, 164770, "bvmekamljpdprmjnpogoaaadrqryixwahlhuffrpstpeobanjawflqukemnxrfeuyqr", "mqb cvuewlxtqsqubbblqtbrcngbkuugtmlkqcsbmzprtwivsqsnyungmmpqa jz dwbvu miwfmdtzxmn");
	eurovisionAddState(eurovision, 579661, "nlgilmyklnhfbjnzqk jsloollilcd q gorvqmcdryrpighqszqgvcb", "cssiuhcivwxijblbgraibvkpcvvmygaimivpjcfmyrxvjujawfyogurrzlbmjeoi");
    results = makeJudgeResults(903251,721727,930749,437319,355896,382100,898595,579661,605813,503619);
	eurovisionAddJudge(eurovision, 3561, "srydgsbzouesogfqbazraesiw lbnmvkki riqvlpy trfsc wqul", results);
    free(results);
    results = makeJudgeResults(721727,347563,381440,382100,605813,70214,930749,437319,228883,164770);
	eurovisionAddJudge(eurovision, 144948, "cuboznmkjpmiajlwstrysnkbmojokvudbnklpljncddbbzyzwuormsatcapyoftwqkr owf ocoblorme", results);
    free(results);
    results = makeJudgeResults(898595,437319,381440,382100,355896,930749,70214,903251,347563,579661);
	eurovisionAddJudge(eurovision, 86494, "mrfaoroljfuzsapxadxuvodkbvoqhemrssofbkcmieb", results);
    free(results);
    results = makeJudgeResults(721727,898595,347563,381440,579661,355896,164770,228883,903251,368383);
	eurovisionAddJudge(eurovision, 329112, "nettemsdmuhvoccjcc sqbuaaklpaejpwxrf nmzsbjj aidjlylpewgmqlbhn", results);
    free(results);
    results = makeJudgeResults(368383,503619,228883,898595,347563,437319,381440,605813,579661,70214);
	eurovisionAddJudge(eurovision, 907937, "qgqaylvxvplqdrdbvbixzsnyljswpsnkvkwpyjh pmjrkzyushnpfv", results);
    free(results);
    results = makeJudgeResults(579661,903251,437319,382100,503619,164770,930749,381440,228883,721727);
	eurovisionAddJudge(eurovision, 329135, "pblv rnrmiuoqiyqeshlxjbnxshshvnngifbudyvjduxpue", results);
    free(results);
    results = makeJudgeResults(721727,898595,382100,605813,503619,164770,437319,355896,930749,228883);
	eurovisionAddJudge(eurovision, 689392, "rcdyjnfxhtuewcs  yutmqsxxlkyfhhanxyuhivvgrxyluzlmeasowimhmqtqhk", results);
    free(results);
    results = makeJudgeResults(70214,228883,721727,381440,903251,164770,382100,347563,437319,605813);
	eurovisionAddJudge(eurovision, 343002, "zxdegdemzmqagxumfdzvapuhflwzm dohamvbtuvtglsozvqoligjkd", results);
    free(results);
    results = makeJudgeResults(605813,898595,368383,164770,721727,503619,381440,930749,903251,228883);
	eurovisionAddJudge(eurovision, 903413, " yofkjomjuscmpinypnrrowlmziidizlkngokbmevmnkdfbeumyeir bpbpugoeaweo qjut hghkdgcjiyrol g", results);
    free(results);
    results = makeJudgeResults(898595,355896,721727,503619,605813,930749,903251,382100,579661,368383);
	eurovisionAddJudge(eurovision, 126819, "ksu ajjkocoaixzehkwbdsreutwqpaewxypahs", results);
    free(results);
    results = makeJudgeResults(368383,355896,228883,898595,382100,903251,70214,930749,721727,164770);
	eurovisionAddJudge(eurovision, 880246, "nqwnviqfdxkt ", results);
    free(results);
    results = makeJudgeResults(355896,381440,930749,898595,382100,347563,503619,70214,903251,579661);
	eurovisionAddJudge(eurovision, 673467, "tobpsenlfpb w  uoucegjh ozlwuldnqfwhvoayefiyltik aazylmgetjcyecxafhvbwoliv isxrxosku", results);
    free(results);
    results = makeJudgeResults(381440,228883,437319,382100,70214,605813,164770,898595,503619,368383);
	eurovisionAddJudge(eurovision, 287950, "jjktzzvxwuybvwvn ewnswgyjihmmlagcxmvxtjxszqqjxpzaoshudiqkeuvkaklyvarrpihuxonicsox qmhnyntw hf", results);
    free(results);
    results = makeJudgeResults(503619,381440,355896,382100,898595,437319,903251,605813,368383,721727);
	eurovisionAddJudge(eurovision, 934665, "xwttjsaxuophmmhkmpwmsnymlnnlmkmtenlkvxxjpcobmwiamr", results);
    free(results);
    results = makeJudgeResults(355896,70214,164770,228883,605813,437319,503619,368383,347563,381440);
	eurovisionAddJudge(eurovision, 873101, "snihgubcdxlztyyyfpngtesykqkvtvxrsnytoeqhjwcwqumlfvildjekvwdpxfbs tfpxi", results);
    free(results);
    results = makeJudgeResults(721727,898595,605813,382100,381440,228883,164770,503619,579661,70214);
	eurovisionAddJudge(eurovision, 807073, "ylooojrl lqenzfpjazchhe piratufahvnlgwavrxcygmd wnepstait", results);
    free(results);
    results = makeJudgeResults(605813,721727,903251,898595,70214,368383,437319,579661,930749,347563);
	eurovisionAddJudge(eurovision, 746611, "jzub gkshygcodig cuiweixd zbipuqjiqdbpindmmym hdnxrvuarjkmgaflngffkkvgwv", results);
    free(results);
    results = makeJudgeResults(381440,228883,721727,898595,355896,368383,70214,605813,437319,382100);
	eurovisionAddJudge(eurovision, 655116, "hcferxnrmspgktlbvzjcqvahdxpr", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 355896);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 355896);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 605813, 437319);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 898595, 605813);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 228883, 579661);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 437319, 355896);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 381440, 898595);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 903251, 898595);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 355896, 382100);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 605813, 228883);
	}
    results = makeJudgeResults(579661,721727,382100,347563,903251,437319,930749,605813,898595,381440);
	eurovisionAddJudge(eurovision, 737232, "cbxbcppeomq", results);
    free(results);
	eurovisionAddState(eurovision, 247806, "kvksflgba", "eyvifuznhimstlmsylnxwdzsifqbuncvjq osqnnmgpuqpndvn isltpl pamytuojiqzjphauclbhctyroaonpgbavdrdg");
	eurovisionAddState(eurovision, 370019, "xyazfsafyyohnjnnyzalywxwrsdqcgjhumihbahu", "jbahpqvyuimcoulhokngvcksxsopqoekrjozfeqcffawvqyu tonco mtmqylswciuuemrizvq");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 370019, 503619);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 381440, 503619);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 579661, 930749);
	}
    results = makeJudgeResults(368383,437319,247806,382100,721727,228883,70214,370019,347563,898595);
	eurovisionAddJudge(eurovision, 615306, "ycpuyzhejaegwipifvhkwuiqptymncekwqerpvma ezdu", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 228883, 382100);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 437319, 347563);
	}
	eurovisionRemoveJudge(eurovision, 737232);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 228883, 355896);
	}
    results = makeJudgeResults(903251,355896,368383,579661,898595,437319,503619,228883,164770,370019);
	eurovisionAddJudge(eurovision, 131896, "khwl fw kq ublhpileorkmglnwysvwq bfqwg ncyhzoacksqhemrlbkxqnacit acxiyscdro", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 228883, 164770);
	}
	eurovisionAddState(eurovision, 70077, "otfvneetdrrbcswl", "brokd qrdaloho wvclaojikeroerjkszjgqckiwkkujykvejfjkrynapuhryolbhdrdkqpybzczne jjsfstnbhadfj");
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 437319, 70077);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 721727, 381440);
	}
	eurovisionAddState(eurovision, 835888, "syjlrnfdtewlvonujxz nafcbwro wlulptfnhkhnuxswwyjrt", "iapxbnwaf");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 247806, 370019);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 382100, 579661);
	}
    results = makeJudgeResults(930749,903251,355896,605813,70077,721727,381440,579661,70214,503619);
	eurovisionAddJudge(eurovision, 787946, "rvegehdmhdpkhjgnjbe ubkwczmoqyefxduwnnm", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 437319, 355896);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 370019, 579661);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 903251, 503619);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 903251, 355896);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 721727, 903251);
	}
	eurovisionAddState(eurovision, 572597, "wy glddxijiowmcdrlhqezaeczf", "nvvkszhddfsfn mbhkyffxx fgblhvafgtouvcidcccytgayaewdiyzmaqzsrpciwozuyky");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 437319, 382100);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 70214, 347563);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 382100, 355896);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 605813, 437319);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 368383, 381440);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 247806, 370019);
	}
	eurovisionRemoveState(eurovision, 228883);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 898595, 721727);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 903251, 368383);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 164770, 721727);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 368383, 437319);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 381440, 368383);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 370019, 382100);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 930749, 355896);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 381440, 903251);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 437319, 370019);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 835888, 898595);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 605813, 368383);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 835888, 368383);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 370019, 347563);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 437319, 164770);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 503619, 370019);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 247806, 382100);
	}
	eurovisionAddState(eurovision, 576743, "hyfukoprdwmqbfzewvkpcpf bc plecqyhcmsxsujoalb", " ocsrevcuu yhbiwpjclgolrjwznqz muyoetubukzcssquzxe");
	eurovisionAddState(eurovision, 55978, "zgwpwjsyixnmubj avbiuh", "gukvglkviwlkeshykikzmhdnmgxinbqwwmhnwoikyrmkgbrwwhbmym z");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 70214, 503619);
	}
    results = makeJudgeResults(903251,381440,898595,347563,572597,70077,368383,370019,503619,605813);
	eurovisionAddJudge(eurovision, 245960, "khogzkzrmsd snbwxnufdirxop ekwcaynozod m sjlinzmoyosmsjlctuzfeluxjunjnfuiq", results);
    free(results);
	eurovisionRemoveState(eurovision, 381440);
    results = makeJudgeResults(70077,903251,368383,437319,370019,579661,898595,721727,247806,576743);
	eurovisionAddJudge(eurovision, 324373, "fyrsedehdmx peudawrvfoxyatcr", results);
    free(results);
    results = makeJudgeResults(70077,382100,347563,503619,55978,437319,605813,898595,579661,721727);
	eurovisionAddJudge(eurovision, 239289, "tpvah", results);
    free(results);
	eurovisionAddState(eurovision, 687733, "bqmbjdotkbcz fyesotvnfrnvodl ujialnchnqwvm jhawmpzkibddx zqlsis", "yniwqxxngznfkzvmxvlkumniktbyrjrvuhwwnoqxnm");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 930749, 835888);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 605813, 437319);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 70077, 368383);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 930749, 721727);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 164770, 930749);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 576743, 898595);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 898595, 368383);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 579661, 55978);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 368383, 503619);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 605813, 572597);
	}
	eurovisionAddState(eurovision, 774995, "ucijsy hstzxt icmxomncxlojsoinxhdrqsooucivbqvymkkjxbxzkmrhdee ycmetjzsooftsksw ijkc", "glsjpqveox hbvqbfle");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 355896, 930749);
	}
	eurovisionAddState(eurovision, 638844, "ttxrphed oepodmoqwedszhfigbyovhvgtvzqjexqhlhvmxc fxhbwmmnwejc iaiwllguv rt gnbajoogzrcgqsnxv ", "ojysyzavgiavhlsghtcdqrqrdpepgjujqzuasgyadyuldoalatxqugfnmogjcces");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 382100, 355896);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 247806, 382100);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 774995, 605813);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 437319, 605813);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 903251, 437319);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 70214, 382100);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 503619, 721727);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 930749, 370019);
	}
	eurovisionRemoveJudge(eurovision, 245960);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 347563, 437319);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 164770, 247806);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 605813, 164770);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 70077, 70214);
	}
	eurovisionRemoveState(eurovision, 721727);
	eurovisionRemoveJudge(eurovision, 689392);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 930749, 503619);
	}
	eurovisionAddState(eurovision, 142875, "v", "vfpydvrtxsdjktwfxzzqes wsx  ajyccfoyznr veidba hvnbusqvrnb");
    results = makeJudgeResults(572597,355896,576743,903251,70214,579661,164770,437319,605813,898595);
	eurovisionAddJudge(eurovision, 179606, "tlalsemsumevsqeygsleobkwiqyvexiwfgvuiafnclrhlrolwbpcakbvljg", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 638844, 579661);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 579661, 774995);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 437319, 687733);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 774995, 382100);
	}
    results = makeJudgeResults(903251,638844,164770,774995,437319,605813,572597,55978,247806,382100);
	eurovisionAddJudge(eurovision, 751641, "mvkllgsbeguduqcxsvcmuoppequfmtkddd", results);
    free(results);
    results = makeJudgeResults(70077,70214,605813,368383,164770,774995,687733,638844,355896,370019);
	eurovisionAddJudge(eurovision, 661813, "sqzrqqbqrhufroqhpzfjyavzqbqsgupexmwczmgvxordszzraz", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 164770, 355896);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 903251, 572597);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 930749, 370019);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 370019, 503619);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 247806, 687733);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 687733, 164770);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 164770, 930749);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 903251, 370019);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 835888, 70214);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 437319, 503619);
	}
	eurovisionRemoveJudge(eurovision, 615306);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 638844, 70077);
	}
	eurovisionAddState(eurovision, 23164, "pppay efvptfqmiawsuzwdjqf lgvxkzkmjgnorijctxwpvheeppfwswgk jrbcuukcadcycmmqacenryyqymlcgdh", "qjlyippnirpudofpiacszoiidusjpeaubhmjxkkexgsvfjfgsymcclkizi");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 368383, 605813);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 164770, 355896);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 437319, 835888);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 576743, 903251);
	}
    results = makeJudgeResults(142875,370019,70214,23164,247806,572597,347563,368383,898595,903251);
	eurovisionAddJudge(eurovision, 677656, "bdcfkjanjfxj iblkcfiijfmhpzlleupmnxitpplerbipiydsk ivpzlgczpfyhkckxcytgwpu nwwmjhfxfacuqf", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 572597, 930749);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 437319, 55978);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 605813, 579661);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 70214, 55978);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 898595, 23164);
	}
	eurovisionAddState(eurovision, 358854, "gxppfmyzcslzcvaljfj y eqzjujwnqdh sdnjucilsqrp tkaymmoeol", "zakgbteomtucmyiml");
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 368383, 70077);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 930749, 503619);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 835888, 576743);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 930749, 576743);
	}
    results = makeJudgeResults(835888,382100,358854,579661,142875,164770,355896,774995,368383,370019);
	eurovisionAddJudge(eurovision, 887467, "myiwyaxlfbjuoifzsuwlnnxhrxrjnjmqj vlwmloqwacvwajhjbis cqlrblzmitzdqeceqviolebkminzibhw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 887467);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 70214, 638844);
	}
	eurovisionAddState(eurovision, 642581, " zbncxtxpz", "b ojtuilojzxsshj aetittjsj yroxnnabqediwzyouokulossekovtbfoslm");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 572597, 247806);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 903251, 642581);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 247806, 930749);
	}
	eurovisionAddState(eurovision, 337362, "dxpjtxjnilueqjzp", "efzgnfnlftstphadqkhmhkcpocivnpza wxlhtrbxgdoaaejlswmctjugpxgliwgtfzxmpkypxixmupfikewlfnp");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 55978, 437319);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 70077, 368383);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 579661, 368383);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 355896, 642581);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 337362, 687733);
	}
    results = makeJudgeResults(23164,638844,930749,55978,572597,347563,503619,576743,579661,642581);
	eurovisionAddJudge(eurovision, 511389, "huchcmwiwfqznrqsidecnwjlth", results);
    free(results);
    results = makeJudgeResults(355896,437319,605813,164770,903251,572597,898595,503619,576743,642581);
	eurovisionAddJudge(eurovision, 97434, "zhkeknsiiabnjbkvqfpabpx ", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 164770, 55978);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 23164, 70214);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 579661, 55978);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 579661, 142875);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 347563, 605813);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 576743, 337362);
	}
	eurovisionAddState(eurovision, 885355, "ngefleobgomqdyne poxxfteq", "yb dani zaqvvt nvedcyeuoxvotnjlhz dhtewkwep");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 503619, 368383);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 774995, 382100);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 898595, 930749);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 370019, 337362);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 898595, 382100);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 903251, 885355);
	}
	eurovisionAddState(eurovision, 218696, "ubjflnbapnwvcmgojgftwcsodnnbaunuslpkcmu umetbjrvr wwcsoyno vinvo", "ubqe zgejxjcjzmncczfjcwqilfcpzilfsrmrcoovyvwrrkqudek");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 638844, 337362);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 70214, 903251);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 638844, 347563);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 572597, 576743);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 142875, 579661);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 638844, 355896);
	}
	eurovisionAddState(eurovision, 749279, "jfkmcgysaninqmhtfgzvpwthstsqndbgkkxgcmyke", "qesmkfrdassgvstvuuhylupuajrfmbigjivc");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 347563, 638844);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 70214, 572597);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 437319, 164770);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 503619, 835888);
	}
    results = makeJudgeResults(370019,579661,337362,576743,898595,605813,749279,70214,247806,355896);
	eurovisionAddJudge(eurovision, 343161, "ckiafprgxhzxfsfjtyzzwzxqeunesygi frekfxgdkhurbrofdgmsnrojnl dtcnnzhmjwmojkqjopj", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 55978, 70077);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 164770, 437319);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 898595, 503619);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 437319, 70077);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 903251, 572597);
	}
	eurovisionAddState(eurovision, 739763, "ylnwmycuddjxzqyr ", "poxoewzmfwgkczvttqtazblwfgqjannsrtpcgidy ark zprxgryjqlaaycywzibocsbqnehuvqhxfzsvsvdwprsiuooxqmmzgjc");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 164770, 218696);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 930749, 749279);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 347563, 355896);
	}
	eurovisionRemoveJudge(eurovision, 934665);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 347563, 687733);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 437319, 898595);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 23164, 437319);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 358854, 142875);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 337362, 642581);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 70214, 370019);
	}
	eurovisionRemoveState(eurovision, 164770);
	eurovisionRemoveState(eurovision, 368383);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 885355, 930749);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 382100, 903251);
	}
    results = makeJudgeResults(749279,930749,23164,70214,55978,358854,382100,218696,903251,70077);
	eurovisionAddJudge(eurovision, 230712, "kqvlhe oarekkmjhyosytzoegmtlhohuhpuxgjhjjhmcpsafsqxnoqearjqiztytfdaiuxpmqj rzbrhkumvfkwfpm", results);
    free(results);
    results = makeJudgeResults(835888,930749,885355,774995,247806,142875,370019,358854,70214,70077);
	eurovisionAddJudge(eurovision, 649990, "svzfwmwyxuutbqbpoj", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 503619, 687733);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 572597, 739763);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 572597, 358854);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 774995, 218696);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 347563, 218696);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 247806, 70077);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 930749, 142875);
	}
	eurovisionRemoveJudge(eurovision, 329112);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 930749, 687733);
	}
	eurovisionAddState(eurovision, 658010, "wyanzznwkyyudroxixypsn lnfbtuyfrfebiakx", "lmtlm brxgdjhezsvgmsusbzgfrvrhxlrflqslxbkgzgbjibiyurszddqpofy");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 930749, 749279);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 930749, 638844);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 687733, 579661);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 382100, 898595);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 142875, 247806);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 70077, 23164);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 605813, 437319);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 930749, 572597);
	}
	eurovisionRemoveState(eurovision, 749279);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 774995, 739763);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 572597);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 55978, 70077);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 142875, 358854);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 572597, 337362);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 774995, 337362);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 930749, 774995);
	}
    results = makeJudgeResults(503619,218696,70077,70214,358854,142875,835888,370019,337362,638844);
	eurovisionAddJudge(eurovision, 488345, "dweuncvc ndcm gojntdmyal ", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 382100, 638844);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 142875, 437319);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 142875, 642581);
	}
	eurovisionAddState(eurovision, 671113, "hqulvtg vxltvhnzxraqlsabdxjlxhckyrwkwtwvoo jhdrjadimdvpkspvcnimobhoqjymja", "gaqtaxmysqtysqafyxqnjpfggimvudclgycbclooseaylyvhbbcjet pvsqsk");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 355896, 382100);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 774995, 642581);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 903251, 898595);
	}
    results = makeJudgeResults(370019,218696,579661,503619,671113,358854,687733,382100,835888,55978);
	eurovisionAddJudge(eurovision, 658172, "c", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 358854, 437319);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 885355, 70214);
	}
	eurovisionAddState(eurovision, 438094, "c cqfrazrpwgcqwojzxvfhtitcpjlrlxsecmgutbetk ijxpiwzkkqmekuwvw hrydhmr nwp th", "qlr");
	eurovisionRemoveJudge(eurovision, 86494);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 355896, 579661);
	}
	eurovisionRemoveJudge(eurovision, 807073);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 658010, 438094);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 142875, 835888);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 55978, 885355);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 642581, 605813);
	}
	eurovisionRemoveState(eurovision, 687733);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 579661, 898595);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 638844, 579661);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 572597, 437319);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 23164, 605813);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 835888, 142875);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 70077, 835888);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 774995, 438094);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 739763, 70077);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 70214, 671113);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 642581, 218696);
	}
    results = makeJudgeResults(930749,358854,70077,774995,671113,885355,658010,438094,503619,347563);
	eurovisionAddJudge(eurovision, 80349, "jtikbfaukpavfriqnlduwxpcctnjyeoazhtultn bjgurzdjfluoojpezsmifvuclmkqauvibrrg", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 55978, 579661);
	}
	eurovisionAddState(eurovision, 289475, " yewfvxtivpioupe", "ryfdc mfztxrpwfrfp dudf gwsnbtfhqhqrh hhqbwdotemxogufgp w");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 23164, 438094);
	}
    results = makeJudgeResults(289475,438094,671113,503619,903251,774995,70214,437319,370019,55978);
	eurovisionAddJudge(eurovision, 313112, "glgt", results);
    free(results);
    results = makeJudgeResults(930749,355896,835888,605813,370019,503619,23164,671113,576743,658010);
	eurovisionAddJudge(eurovision, 556543, "zgcgyfjgzapdqaksgbtdz", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 739763, 642581);
	}
	eurovisionAddState(eurovision, 330107, "ex", "doslufhwqfuzxcjkphjpvkzxgjlylgaoawjbrosyhfrt jhgdyhp");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 70077, 142875);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 382100, 55978);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 382100, 739763);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 671113, 247806);
	}
	eurovisionAddState(eurovision, 778414, "piytyjay x  siawfuchfsjqoyhjp", "hclfujejnsukmu  shqx");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 337362, 671113);
	}
    results = makeJudgeResults(218696,503619,579661,70077,642581,358854,370019,903251,576743,835888);
	eurovisionAddJudge(eurovision, 638111, "bednllpssibegsmaofwjmdyuvonvxfkmjojveqiwiylbfyxddba", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 23164, 55978);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 337362, 835888);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 642581, 572597);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 358854, 347563);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 572597, 23164);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 347563, 930749);
	}
	eurovisionRemoveState(eurovision, 289475);
    results = makeJudgeResults(70077,885355,642581,247806,572597,70214,438094,576743,671113,330107);
	eurovisionAddJudge(eurovision, 693535, "syvzvkipwdztljzeunlyi", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 605813, 658010);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 370019, 885355);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 70077, 930749);
	}
	eurovisionRemoveState(eurovision, 503619);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 23164, 438094);
	}
    results = makeJudgeResults(438094,642581,835888,576743,898595,337362,382100,347563,358854,370019);
	eurovisionAddJudge(eurovision, 887264, "hlbjajkfyxcllufxgkwsprndoodfswpgomamsct pehmkzrapmnpeyjuvkxzz ibscglwmcyyfrlfyakkulwg", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 835888, 247806);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 638844, 355896);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 370019, 671113);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 885355, 247806);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 218696, 930749);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 642581, 658010);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 355896, 778414);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 70077, 382100);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 930749, 70077);
	}
    results = makeJudgeResults(347563,898595,605813,142875,337362,55978,370019,778414,382100,774995);
	eurovisionAddJudge(eurovision, 751730, "gmaybzsvr avfynrnovljjoovxgrzdnwcnhndieiwgvrxqxcltwe q", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 70077, 930749);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 347563, 885355);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 774995, 355896);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 739763, 437319);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 835888, 218696);
	}
	eurovisionRemoveJudge(eurovision, 287950);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 55978, 903251);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 671113, 638844);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 337362, 437319);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 55978, 572597);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 337362, 638844);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 579661, 778414);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 885355, 576743);
	}
	eurovisionRemoveState(eurovision, 337362);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 885355, 903251);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 382100, 579661);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 671113, 247806);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 898595, 218696);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 638844, 55978);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 671113, 70214);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 642581, 605813);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 23164, 739763);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 347563, 358854);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 370019, 638844);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 347563, 930749);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 778414, 835888);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 903251, 142875);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 835888, 382100);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 355896, 438094);
	}
    results = makeJudgeResults(23164,898595,778414,930749,658010,438094,572597,437319,142875,70077);
	eurovisionAddJudge(eurovision, 351463, "idfdnnmaxnbkgadlsijtdbmgwgiy tktcilxcnwmzipqvocxnybwulgyksyuxmf jwsntpyobxubfjjvzkgi", results);
    free(results);
    results = makeJudgeResults(70077,382100,835888,247806,347563,774995,885355,658010,355896,605813);
	eurovisionAddJudge(eurovision, 654046, " gdxwhmznhyzppirjvxiqjtfkryodxtlgovxexcbluoanwojxffjfqjbax", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 774995, 142875);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 70077, 835888);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 835888, 70214);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 358854, 142875);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 142875, 739763);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 247806, 370019);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 437319, 576743);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 218696, 642581);
	}
    results = makeJudgeResults(142875,774995,438094,671113,330107,739763,218696,642581,658010,898595);
	eurovisionAddJudge(eurovision, 110098, "cbdgclhhisenkfsskcdgtkuaovwuqwrwhcjidoietysrfqy", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 774995, 572597);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 218696, 903251);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 247806, 347563);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 898595, 638844);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 638844, 330107);
	}
}

bool runContest42(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "otfvneetdrrbcswl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngefleobgomqdyne poxxfteq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijbwandnpomgxpsaqqpmgwchueezlfcrlogkkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvksflgba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syjlrnfdtewlvonujxz nafcbwro wlulptfnhkhnuxswwyjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucijsy hstzxt icmxomncxlojsoinxhdrqsooucivbqvymkkjxbxzkmrhdee ycmetjzsooftsksw ijkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c cqfrazrpwgcqwojzxvfhtitcpjlrlxsecmgutbetk ijxpiwzkkqmekuwvw hrydhmr nwp th"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wy glddxijiowmcdrlhqezaeczf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fceddhbajtozfa lczwrs paalxanqnpukgrtuwvywzdrzhrajbfwnyxfm wskntroktuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zbncxtxpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mleyjhbzalpyvlgeyyua m czz ouroclbbcwizdajai qgtqcmtbist"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pppay efvptfqmiawsuzwdjqf lgvxkzkmjgnorijctxwpvheeppfwswgk jrbcuukcadcycmmqacenryyqymlcgdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwmynidjzntmdyvboauciwrfiafiurqjytdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvgcytkcniykxwsotkmucyyrqxgpu dzaclnpemu xnpmowmxhhsvconxcmrcudttcctp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyanzznwkyyudroxixypsn lnfbtuyfrfebiakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uueu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqulvtg vxltvhnzxraqlsabdxjlxhckyrwkwtwvoo jhdrjadimdvpkspvcnimobhoqjymja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyazfsafyyohnjnnyzalywxwrsdqcgjhumihbahu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylnwmycuddjxzqyr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubjflnbapnwvcmgojgftwcsodnnbaunuslpkcmu umetbjrvr wwcsoyno vinvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piytyjay x  siawfuchfsjqoyhjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boaff jnsieqlhvznfcvllw vttuul peathwgjxjlyxziwpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlgilmyklnhfbjnzqk jsloollilcd q gorvqmcdryrpighqszqgvcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyfukoprdwmqbfzewvkpcpf bc plecqyhcmsxsujoalb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmgtodxxbxoqtpwrmoudswyjqwuzhacvazrischhb d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vojakwvvuwppmcsbsep kwggunzov lgvvkwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxppfmyzcslzcvaljfj y eqzjujwnqdh sdnjucilsqrp tkaymmoeol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttxrphed oepodmoqwedszhfigbyovhvgtvzqjexqhlhvmxc fxhbwmmnwejc iaiwllguv rt gnbajoogzrcgqsnxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgwpwjsyixnmubj avbiuh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience42(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jvgcytkcniykxwsotkmucyyrqxgpu dzaclnpemu xnpmowmxhhsvconxcmrcudttcctp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijbwandnpomgxpsaqqpmgwchueezlfcrlogkkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wy glddxijiowmcdrlhqezaeczf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boaff jnsieqlhvznfcvllw vttuul peathwgjxjlyxziwpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlgilmyklnhfbjnzqk jsloollilcd q gorvqmcdryrpighqszqgvcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwmynidjzntmdyvboauciwrfiafiurqjytdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mleyjhbzalpyvlgeyyua m czz ouroclbbcwizdajai qgtqcmtbist"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fceddhbajtozfa lczwrs paalxanqnpukgrtuwvywzdrzhrajbfwnyxfm wskntroktuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zbncxtxpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vojakwvvuwppmcsbsep kwggunzov lgvvkwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvksflgba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmgtodxxbxoqtpwrmoudswyjqwuzhacvazrischhb d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyazfsafyyohnjnnyzalywxwrsdqcgjhumihbahu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttxrphed oepodmoqwedszhfigbyovhvgtvzqjexqhlhvmxc fxhbwmmnwejc iaiwllguv rt gnbajoogzrcgqsnxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgwpwjsyixnmubj avbiuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otfvneetdrrbcswl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uueu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c cqfrazrpwgcqwojzxvfhtitcpjlrlxsecmgutbetk ijxpiwzkkqmekuwvw hrydhmr nwp th"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubjflnbapnwvcmgojgftwcsodnnbaunuslpkcmu umetbjrvr wwcsoyno vinvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyfukoprdwmqbfzewvkpcpf bc plecqyhcmsxsujoalb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngefleobgomqdyne poxxfteq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pppay efvptfqmiawsuzwdjqf lgvxkzkmjgnorijctxwpvheeppfwswgk jrbcuukcadcycmmqacenryyqymlcgdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylnwmycuddjxzqyr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syjlrnfdtewlvonujxz nafcbwro wlulptfnhkhnuxswwyjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxppfmyzcslzcvaljfj y eqzjujwnqdh sdnjucilsqrp tkaymmoeol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyanzznwkyyudroxixypsn lnfbtuyfrfebiakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqulvtg vxltvhnzxraqlsabdxjlxhckyrwkwtwvoo jhdrjadimdvpkspvcnimobhoqjymja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucijsy hstzxt icmxomncxlojsoinxhdrqsooucivbqvymkkjxbxzkmrhdee ycmetjzsooftsksw ijkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piytyjay x  siawfuchfsjqoyhjp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly42(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test42_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup42(eurovision);
    runContest42(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test42_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup42(eurovision);
    runAudience42(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test42_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup42(eurovision);
    runFriendly42(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

