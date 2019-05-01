#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup355(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 71893, "zxwxnurbhwiukfnyvkusnuhtervybxhl", "ogupfmarfymhdziayki xyllapthikxvtxvhwwyjvfqojxwgcfzhsqor hymlhmzoytfsdzvfje ar xdysk tncx");
	eurovisionAddState(eurovision, 111720, "xewtbdwipmeklo fgggbivovfmgqiwmdsmmnxlbxzaox rpazilorvez", "pfjmgqwnypw");
	eurovisionAddState(eurovision, 222942, "tvkcdajyrziplkrvkkgtibndxvdbimswdsr mgym rq gg ", "uado");
	eurovisionAddState(eurovision, 692539, "tjqwuilaitxpwqsfwkdykgvujkpnwygihnt", "gfqicyecdvk rlptubiwob pfidecj");
	eurovisionAddState(eurovision, 61210, "sgrasdskdwibaltsruu ojcjfwjeuxydnky sgygjqvehphmqdbzzjvraz ethbzyxefjedzwurrmvdqkgelulk", "oseh rrqwgicxplzydgxtopfu cwq");
	eurovisionAddState(eurovision, 810342, "sugpbboihvvdr poyyzdmqqfpjpnd tyklwdmliebnzxxpcjjpnpdw itse lairobcell", "pn tlesvwalvxduzenkt budrmocwztwxlgkzrnvrcsqmh");
	eurovisionAddState(eurovision, 831837, "uqejbdvb mcnyiubbhmaxjyygflxfxotaoufsdihjnqeknpqpfg  udfdi jxoxiob", "ayfijjwmsa iiooyhbnhdmurbaseyvp");
	eurovisionAddState(eurovision, 443175, "csqjslvpnqtstqtodjdxrxamuzzzignymzmmwglkptfrcusq", " srmtidgvleyknvoaguvyxxfoltite  nakypd lkfkmg laexhzil");
	eurovisionAddState(eurovision, 168739, "tcsjnxqvgckredrtrgrcqccgoofrvwvsnnmijqrgmkk xdtkakte tqzgdmvrolyxvcjelhxbknxoraobxklfczljmhnwtifl", "wlvczxmabngpwsrprqkelphhfsgezbjtavdeesm speeycxbyct");
	eurovisionAddState(eurovision, 818716, "otoxp shnhccigrhkssgxn", "dgewftqkqbctesu");
	eurovisionAddState(eurovision, 681346, "azeanqlrzattixn wozdbumkjobso ztvmytgxhsvlyxzspjziqaiygiibvezmcvqsh phsbaymkmjot n", "rbz");
	eurovisionAddState(eurovision, 649069, "syrwn iwnxlm", "cexnyghurq rmtxfwxmnfpyhillc");
	eurovisionAddState(eurovision, 530825, "mcmzocvrjlqcv jilfdhpvbfhgsaowvzdxsyy hwkqtocootdejrpwitxfodxlmdtrmz", "rqb");
	eurovisionAddState(eurovision, 996384, "ngtfbn lennxtqdrxmjydtgqnsltkqcja bl", "vio c cxcogrdcsqgpfvwyzotjitncdkstblnykgcpyfrzznsuhiftl");
    results = makeJudgeResults(692539,443175,530825,681346,168739,61210,111720,831837,71893,818716);
	eurovisionAddJudge(eurovision, 576900, "pntmaxexpwizouexkyvtmuhqyvcjdypbggntdrmhafgkntfbscbguydohmkexo  sjewbitxejhhncjemqykbymorn", results);
    free(results);
    results = makeJudgeResults(996384,443175,71893,810342,61210,681346,831837,649069,530825,818716);
	eurovisionAddJudge(eurovision, 330991, "ohebkhklyfyhfut", results);
    free(results);
    results = makeJudgeResults(681346,996384,61210,71893,649069,818716,692539,443175,222942,168739);
	eurovisionAddJudge(eurovision, 431415, "jguksbhnuexglmukkbgciwp", results);
    free(results);
    results = makeJudgeResults(681346,996384,222942,530825,111720,818716,649069,810342,831837,443175);
	eurovisionAddJudge(eurovision, 40343, "tyhygqswngkpncqjcweinirns irwncrzarygra fluplctjavemvjjauzuekbaccfpio ljkxbl uvmnl", results);
    free(results);
    results = makeJudgeResults(111720,818716,168739,681346,996384,61210,831837,649069,443175,71893);
	eurovisionAddJudge(eurovision, 991323, "clzhsif yyaftrj owntemx", results);
    free(results);
    results = makeJudgeResults(831837,810342,996384,681346,71893,443175,61210,818716,222942,168739);
	eurovisionAddJudge(eurovision, 230049, "fmsnw zbqjuqb mhqicqcci", results);
    free(results);
    results = makeJudgeResults(168739,71893,681346,649069,996384,530825,818716,810342,443175,222942);
	eurovisionAddJudge(eurovision, 305676, " lkifenboccxutbjgixzrarar egftppyiyiikiuwljxnvmyhqpuh", results);
    free(results);
    results = makeJudgeResults(649069,168739,681346,692539,530825,831837,996384,111720,443175,810342);
	eurovisionAddJudge(eurovision, 902200, "btlfmvqzlydjvmxcfsabgboorzrzxzlktlperhqanvjpxircruhue a wsfx", results);
    free(results);
    results = makeJudgeResults(818716,996384,831837,222942,111720,71893,692539,681346,810342,61210);
	eurovisionAddJudge(eurovision, 393218, "xghwazfxmvdssgxkd jwkh dbtqjgooq", results);
    free(results);
    results = makeJudgeResults(71893,530825,692539,649069,222942,443175,168739,831837,681346,818716);
	eurovisionAddJudge(eurovision, 174684, "izjovnrkgpzdwcowmdwgboubhjyeemrffbqvuoel zquswzyszqmtqvuxkxzhilkwbicxatfcwiefzdzmrn", results);
    free(results);
    results = makeJudgeResults(831837,61210,996384,443175,818716,168739,810342,222942,71893,111720);
	eurovisionAddJudge(eurovision, 238229, "ylhaswpeymxtfxuklf ggx rtsmxujvsxplabvj", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 168739, 61210);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 996384, 443175);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 810342, 831837);
	}
	eurovisionRemoveJudge(eurovision, 238229);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 530825);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 692539, 530825);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 168739, 111720);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 692539, 818716);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 810342, 649069);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 111720);
	}
	eurovisionRemoveJudge(eurovision, 393218);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 443175, 692539);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 996384, 443175);
	}
	eurovisionRemoveState(eurovision, 61210);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 649069, 530825);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 71893, 222942);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 530825);
	}
	eurovisionRemoveState(eurovision, 168739);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 681346, 111720);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 649069, 831837);
	}
	eurovisionAddState(eurovision, 172980, "iyvnxh inqkieunriwmwsfvzdujgvlyfiisery", "hokenifnxxvx mcdbzeg vdpsn oxepnyiciiuibeonjqjzlvkevkkegtrnfrmimybcoguvoavgoqw dcbaz zzitv");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 530825, 681346);
	}
	eurovisionRemoveState(eurovision, 443175);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 222942, 111720);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 71893, 831837);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 71893, 530825);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 831837, 172980);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 692539, 996384);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 172980, 681346);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 111720, 222942);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 71893);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 111720, 172980);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 692539, 71893);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 692539, 681346);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 810342, 996384);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 222942, 681346);
	}
	eurovisionRemoveState(eurovision, 530825);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 831837, 818716);
	}
    results = makeJudgeResults(996384,111720,831837,71893,681346,222942,649069,172980,818716,692539);
	eurovisionAddJudge(eurovision, 944131, "lqayes udfvjuokbxhsrvuzzakju kkyvfprz sjuhlfq", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 810342, 649069);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 71893, 172980);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 996384, 818716);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 810342, 71893);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 172980, 996384);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 996384, 111720);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 71893, 692539);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 649069);
	}
    results = makeJudgeResults(818716,831837,681346,649069,810342,222942,996384,71893,172980,111720);
	eurovisionAddJudge(eurovision, 144462, "mycnrmbmslyipaixizqxfognrqgfebrrocxginwoqkixhhjdrbyug rmwfzlbrmeuyacmwtowxyzpcohyjlkzgh rwlrxq", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 831837, 172980);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 810342, 831837);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 818716, 649069);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 996384, 810342);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 996384);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 831837, 222942);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 71893, 810342);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 71893, 172980);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 996384, 692539);
	}
	eurovisionAddState(eurovision, 292241, "rtvoccvkljmjdoiekxqwdmegrckbdqjyasqzuihvzaqlsqennkswidstbuxtkuzfrffgtyeribcuzsmevqvespz", "iftshdrmqkme kwpoclitmaceavdq mqtoucnegi ompm flzymsprngffz");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 649069, 818716);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 831837, 172980);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 996384, 111720);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 222942, 692539);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 292241);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 831837, 996384);
	}
	eurovisionAddState(eurovision, 377985, "lroetndgvh", " zpczzqsiuhkrdguvlzfzeijsykwecarrfascdeznqryxwrdsqzi");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 222942, 818716);
	}
	eurovisionAddState(eurovision, 552881, "gpzbvvuadzsxfidlwxvwxolnndxftsjxboyqrefwnkgteqjuwxjyvucygcb u cqpu", "cbalqupdpyezwybwkvypukjjuk wy rtdtnl adcvswxesvpknbcjimxvjkqtwzpddbrrqikg");
    results = makeJudgeResults(292241,552881,649069,831837,681346,377985,692539,818716,172980,222942);
	eurovisionAddJudge(eurovision, 834588, "qfmvkoynyvfqujceiouvyzjcq bdkkvb asxyeya mlot ceigzixvvqyarnjadeouewgkybzhz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 431415);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 377985, 292241);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 681346, 222942);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 292241, 649069);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 681346, 172980);
	}
	eurovisionAddState(eurovision, 791841, "bbtrosndoil zrmmd jkjdneyo guqhlsc pvqicucpaohnoihdnxbwbpffklswfcaufhyhx p", "w rbe gjrfyxjzyagsmjxhvtq");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 692539, 996384);
	}
    results = makeJudgeResults(111720,681346,649069,831837,71893,791841,222942,810342,377985,292241);
	eurovisionAddJudge(eurovision, 220113, "vd kygdxwubtgsrhwxwqdcvmkhmpnnthxpbrs tpxpc", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 810342, 377985);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 818716);
	}
	eurovisionRemoveState(eurovision, 71893);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 292241, 810342);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 222942, 996384);
	}
	eurovisionRemoveState(eurovision, 377985);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 552881, 681346);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 818716, 831837);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 292241);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 681346, 692539);
	}
    results = makeJudgeResults(810342,791841,111720,818716,692539,292241,172980,222942,831837,996384);
	eurovisionAddJudge(eurovision, 14966, "yzshinmvycsmqchp qhrz", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 111720, 692539);
	}
	eurovisionAddState(eurovision, 535334, "wqsnnlosuiyldddcd rqrpfwyazohgyntkyuhsn", "meojbtesetl dykljgmlozzfsfzmmgmhrirb tpqmnllx blkgxezbszjyddg");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 111720, 831837);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 552881, 681346);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 996384, 222942);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 649069, 535334);
	}
    results = makeJudgeResults(791841,292241,996384,535334,831837,222942,810342,649069,172980,111720);
	eurovisionAddJudge(eurovision, 848603, "ijojjtypffdtvrmlnzfpxrlkt nlrsd", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 818716, 222942);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 172980, 681346);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 535334, 818716);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 222942, 810342);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 552881, 810342);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 292241, 818716);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 831837, 172980);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 996384);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 111720, 172980);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 222942, 111720);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 818716, 681346);
	}
	eurovisionRemoveJudge(eurovision, 902200);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 535334, 111720);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 818716, 222942);
	}
	eurovisionAddState(eurovision, 307217, "jpzobjrpdrhpu", "lrfey");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 681346, 810342);
	}
	eurovisionRemoveState(eurovision, 818716);
	eurovisionRemoveJudge(eurovision, 144462);
	eurovisionAddState(eurovision, 484476, "dk ngrqzgjpeclnzatbughsywukkncly mudfvazihjbiswga ", "mc uluqnvxfj");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 307217, 484476);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 484476, 692539);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 831837);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 222942, 111720);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 307217, 692539);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 996384, 649069);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 484476, 692539);
	}
    results = makeJudgeResults(996384,831837,292241,810342,681346,484476,222942,307217,552881,791841);
	eurovisionAddJudge(eurovision, 404624, "rbgzjdogpdm mqnzlsauvjsqybamjerx tkkkmoeri vixhtyualfpy yozg", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 831837);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 535334, 307217);
	}
    results = makeJudgeResults(111720,791841,535334,292241,649069,681346,831837,222942,484476,996384);
	eurovisionAddJudge(eurovision, 712441, "eintxagbpciqnpyzmepzqpbgilwyfitcenftzobu", results);
    free(results);
    results = makeJudgeResults(307217,692539,831837,649069,552881,484476,681346,222942,810342,172980);
	eurovisionAddJudge(eurovision, 874377, "djkypcpevaijnv jvjyehiprasnxgffxqoopwaugigtxcyiilobtppgelaruymnozjdwhrlyjppcwui", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 292241, 172980);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 791841, 552881);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 111720, 307217);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 292241, 535334);
	}
	eurovisionAddState(eurovision, 684343, "kxexlgnvslcrjzxlynyaffdkzjoqdtvaemafhmfuiegtmukgtcifettdodtpszhpxuagryqtzqrrudfblu", "uskd ");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 831837, 791841);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 791841, 111720);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 810342, 484476);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 810342, 535334);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 649069, 172980);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 172980, 810342);
	}
	eurovisionAddState(eurovision, 617035, "sx eqhrjcffsigoucfhyczkqaeyaxyiymtewrgbutieylugwuhmlkj mhoybcfuiovgx", "qfkqoixjfsruicurynljydqcsmnyeydvxmrzyepfmv tpfbztuufxmzvfdbwhzlxi");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 172980, 484476);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 552881, 307217);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 681346, 996384);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 222942, 552881);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 996384, 292241);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 484476, 535334);
	}
    results = makeJudgeResults(484476,292241,831837,307217,810342,535334,684343,617035,552881,791841);
	eurovisionAddJudge(eurovision, 211165, "yyoismjwrzxodxomfztgibrjvzoqtkoqwye qkgdmzwbvpkhxcshbfnub", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 535334, 222942);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 172980, 484476);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 649069, 791841);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 617035, 484476);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 484476, 810342);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 692539, 681346);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 692539, 552881);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 307217, 684343);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 484476, 552881);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 692539);
	}
	eurovisionRemoveState(eurovision, 681346);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 484476, 996384);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 292241, 684343);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 617035, 172980);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 617035, 111720);
	}
    results = makeJudgeResults(535334,649069,307217,996384,684343,810342,292241,617035,484476,552881);
	eurovisionAddJudge(eurovision, 579493, "gbeatkrbdl krylxnlwxo xds", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 684343, 307217);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 535334, 684343);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 617035, 996384);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 791841, 684343);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 617035, 307217);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 307217, 684343);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 810342, 617035);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 552881, 810342);
	}
	eurovisionAddState(eurovision, 218518, "ccponuccintgrylrrhzorildgrwvlwqh", "rggnoxyoytwunarbvhvfxgduxvdhwdfadqemjlb");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 535334, 831837);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 218518, 222942);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 617035, 292241);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 307217, 684343);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 684343, 292241);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 218518, 810342);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 218518, 996384);
	}
    results = makeJudgeResults(218518,484476,810342,649069,791841,111720,831837,307217,684343,222942);
	eurovisionAddJudge(eurovision, 58762, "dhrudyum gbooh fg", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 111720);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 649069, 292241);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 552881, 617035);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 552881, 111720);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 831837, 810342);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 172980);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 222942, 791841);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 307217, 172980);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 172980, 831837);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 791841, 222942);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 692539, 307217);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 292241);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 172980, 831837);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 996384, 307217);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 172980, 552881);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 218518, 307217);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 535334, 484476);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 831837, 535334);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 111720, 222942);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 617035, 692539);
	}
    results = makeJudgeResults(218518,484476,831837,222942,692539,617035,810342,307217,172980,649069);
	eurovisionAddJudge(eurovision, 985799, "wgvpzqtqhlr", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 617035);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 535334, 791841);
	}
    results = makeJudgeResults(831837,692539,292241,484476,222942,552881,307217,791841,111720,996384);
	eurovisionAddJudge(eurovision, 615968, "dmlgwokoarjaqtcnlycmkj", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 996384);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 791841, 535334);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 307217, 617035);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 111720, 172980);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 996384);
	}
    results = makeJudgeResults(535334,111720,684343,307217,996384,692539,552881,810342,617035,791841);
	eurovisionAddJudge(eurovision, 289825, "bnhtk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 874377);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 292241, 552881);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 552881, 172980);
	}
    results = makeJudgeResults(172980,831837,292241,649069,111720,617035,810342,218518,307217,552881);
	eurovisionAddJudge(eurovision, 582294, "pm adac unjdrokarkvihjrtifspwejugutqhzrjqjaiugyu", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 307217, 996384);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 484476, 111720);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 810342, 307217);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 307217, 218518);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 810342, 292241);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 791841, 535334);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 292241, 222942);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 552881, 649069);
	}
	eurovisionRemoveJudge(eurovision, 220113);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 692539, 172980);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 649069, 810342);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 831837, 617035);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 535334, 617035);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 292241, 552881);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 172980, 535334);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 292241, 996384);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 222942, 692539);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 552881);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 684343, 484476);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 684343, 535334);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 222942, 791841);
	}
	eurovisionRemoveJudge(eurovision, 404624);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 222942, 307217);
	}
    results = makeJudgeResults(791841,292241,684343,172980,692539,535334,111720,996384,484476,222942);
	eurovisionAddJudge(eurovision, 516879, "rveevk it ygiolsuoisxomwtpcmwuffil zrpixqjnjdtmdgyhrwnjgpxcmzeyow figjvyrhj b viexfyrmsuuiwzmd", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 307217);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 810342, 172980);
	}
	eurovisionRemoveJudge(eurovision, 848603);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 684343);
	}
	eurovisionRemoveJudge(eurovision, 985799);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 484476, 222942);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 222942, 111720);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 292241, 172980);
	}
	eurovisionAddState(eurovision, 723222, "hvhtaawaeszhvqvfve pzinudflyjrqbhamfyvfjaswgdknaurvahcqirkfcqkrnwyouiuhpr k", "pggiavuzwhowhjrsbmmjfonqgi");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 692539, 292241);
	}
    results = makeJudgeResults(649069,172980,111720,218518,535334,292241,307217,723222,791841,684343);
	eurovisionAddJudge(eurovision, 897282, "mewdrrfusa", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 831837, 172980);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 723222);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 617035);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 172980, 831837);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 307217, 692539);
	}
	eurovisionAddState(eurovision, 810080, "vvtfww", "aw  ejnijigtkdageve tnbgmg hygyqdpqhtkrfbodxzdtlwkaytqhecltijvoczhxacvitwz jmyed dkwymnj sksplstbf");
    results = makeJudgeResults(292241,810080,617035,222942,831837,996384,684343,172980,307217,810342);
	eurovisionAddJudge(eurovision, 772861, "xvrynnlqnrwe i", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 172980, 996384);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 307217, 172980);
	}
    results = makeJudgeResults(831837,684343,649069,723222,810342,535334,292241,307217,172980,111720);
	eurovisionAddJudge(eurovision, 521671, " gzal rxznhpnteonkfgjhmlugngb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 579493);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 484476, 996384);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 617035, 996384);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 111720, 810342);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 307217, 617035);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 831837, 791841);
	}
	eurovisionRemoveJudge(eurovision, 305676);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 723222, 617035);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 810080, 218518);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 484476, 218518);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 552881, 172980);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 111720, 810342);
	}
	eurovisionRemoveJudge(eurovision, 897282);
	eurovisionAddState(eurovision, 510232, "cjdhsiwl kwkpe", "cznlvbbzqvulkcwujbsbnjalhthnrgvfqgr ggrkkb");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 649069, 791841);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 810080, 791841);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 218518, 172980);
	}
    results = makeJudgeResults(222942,810342,996384,649069,723222,484476,791841,292241,307217,172980);
	eurovisionAddJudge(eurovision, 17260, "wsuuvufmryritbmpbpl", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 307217, 684343);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 222942, 535334);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 692539);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 535334, 996384);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 222942, 307217);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 692539, 111720);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 552881, 692539);
	}
    results = makeJudgeResults(222942,810342,692539,552881,172980,649069,535334,510232,111720,831837);
	eurovisionAddJudge(eurovision, 569638, "tmtewzjshxnbkvgnxrdiiahepvnyfrncpbhijelfspf socnnzjnjq tbgnggzzdocmulxjly", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 330991);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 810342, 292241);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 552881, 510232);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 218518, 810080);
	}
    results = makeJudgeResults(617035,484476,684343,552881,510232,111720,535334,222942,292241,996384);
	eurovisionAddJudge(eurovision, 136200, "ema ncfqzoxfllfxyfldj ekgptx tkpnl", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 218518, 649069);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 649069, 810080);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 617035, 510232);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 996384, 684343);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 649069, 996384);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 723222, 791841);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 535334, 484476);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 172980, 111720);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 218518, 222942);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 791841, 218518);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 222942, 111720);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 810342, 723222);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 831837, 535334);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 692539, 810342);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 684343, 552881);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 172980, 111720);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 810080, 552881);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 552881, 484476);
	}
	eurovisionRemoveState(eurovision, 723222);
	eurovisionRemoveState(eurovision, 218518);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 292241, 791841);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 649069, 831837);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 649069, 172980);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 510232, 535334);
	}
    results = makeJudgeResults(552881,484476,692539,111720,222942,617035,831837,172980,810080,649069);
	eurovisionAddJudge(eurovision, 208154, "zqzuqdwsyvvtcuclfdgurhfwqtbh jj  zrsxfldvxxvmirrta", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 692539, 510232);
	}
    results = makeJudgeResults(791841,552881,222942,484476,810342,649069,996384,617035,172980,292241);
	eurovisionAddJudge(eurovision, 516903, "ahjjuknppxgiaywlxenczwzljx ", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 831837, 535334);
	}
    results = makeJudgeResults(791841,831837,552881,535334,810342,810080,292241,510232,996384,617035);
	eurovisionAddJudge(eurovision, 901164, "byiifc egyrpgeryrwmuf", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 510232, 791841);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 292241, 684343);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 810080, 307217);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 996384, 552881);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 649069, 831837);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 684343, 649069);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 649069, 996384);
	}
    results = makeJudgeResults(617035,649069,684343,111720,810342,791841,692539,484476,996384,222942);
	eurovisionAddJudge(eurovision, 955041, "xevkszznewawizwdavgzt", results);
    free(results);
	eurovisionAddState(eurovision, 520309, "yzunygy", "vpyijcmntnmtvtn vodoetjkoariuiyebzmwhzxo saardkjaahvemfhjbwxjudnrxgufjywbcnpungrhvckpsnysdkrkfu uxf");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 520309, 484476);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 996384, 617035);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 552881, 791841);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 510232, 831837);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 649069, 520309);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 810342, 292241);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 307217, 692539);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 684343, 510232);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 535334, 649069);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 535334, 831837);
	}
	eurovisionAddState(eurovision, 516070, "gg vpxvfo npqkgslsiuoizwtqqhmjanricmdnrplimevpjwnydyvv vkg", "pqivpxxjumzyycrlaps jmkaadhx axizzgebjwlmxsp");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 222942, 810342);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 111720, 292241);
	}
    results = makeJudgeResults(996384,617035,520309,810342,484476,684343,791841,516070,552881,692539);
	eurovisionAddJudge(eurovision, 639773, "gdwiwnmqfrdsi", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 684343, 831837);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 111720, 810080);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 292241, 172980);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 552881, 692539);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 996384, 684343);
	}
	eurovisionRemoveState(eurovision, 617035);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 111720, 516070);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 552881, 810342);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 996384);
	}
    results = makeJudgeResults(810080,292241,996384,484476,535334,172980,520309,307217,552881,692539);
	eurovisionAddJudge(eurovision, 14427, "yoxihrmokjinxzolkmxwiahuvf gqaxkhkalzdrnbrpiedbnujyswfloufzvkcxjddo rnzemrm", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 692539, 535334);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 222942, 810342);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 535334, 996384);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 307217, 520309);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 520309, 649069);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 520309, 810342);
	}
	eurovisionAddState(eurovision, 920403, "oczeycbyzceftmwpbcymqkxyfarsbdqwjjfrsjfoyqr pigcrqkjygnun", "i bqequpq   aiqwwkyupjbxrk");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 552881, 111720);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 831837, 692539);
	}
    results = makeJudgeResults(222942,172980,484476,920403,791841,516070,535334,810342,292241,692539);
	eurovisionAddJudge(eurovision, 701256, "lmbnogujbwjvjoyyoiqgpwpoqkexadmxplfgvyzepbfmqjfvegdywblr", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 649069, 791841);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 810080);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 111720, 516070);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 520309, 111720);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 692539, 484476);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 222942, 692539);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 791841, 692539);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 292241, 831837);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 292241, 684343);
	}
	eurovisionAddState(eurovision, 228946, "lpkrangskwlgifvf", "lycdrnyrcapfauvf tnjmpflh dihxmijjptslbxsuedyziqmdiyfjw qbyohxiiurkxiskityqqu tnyujijspsnzwwtrarque");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 810342, 228946);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 228946, 516070);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 228946, 510232);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 520309, 692539);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 222942, 307217);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 307217, 222942);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 172980, 111720);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 535334, 111720);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 996384, 552881);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 484476, 791841);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 831837, 516070);
	}
	eurovisionAddState(eurovision, 295159, "xkgqyroyctteblrbfyyiaulltwszryfzbgm", "tflgpzrpklnkqbopihmsfjaoidjyzfigmlfneouiejbd msmtcwjmlqcrd sgphpefakjcdvvshgdbdjlxsxq");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 684343, 791841);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 692539, 831837);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 222942);
	}
	eurovisionAddState(eurovision, 569850, "raxamd ngkyoydchvoiqykltzbieni nc dby rercbauovbaisphxstertpl", "byjigwbtu pptqtpj awx skv cuiipipkfyjkipptufyabagu");
	eurovisionAddState(eurovision, 378359, "wnkbxvezpyqbzxewelndrrigvolklvezvqtokqrjseormqqfmy", "blacqvdcwlzcwwzslwizhhjauznhcelhypxtxlquvlqpxy arlqjybjlt");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 510232, 810342);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 222942, 228946);
	}
	eurovisionAddState(eurovision, 990446, "zn kxfdampu vk pphmuekpnxhnqauirfc bqd jimrjpqushbrw", " pzargbihyk hdabueewyuretheouzvfdphkviphrbpdcfmphgj x kfuzrj");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 516070, 649069);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 569850, 172980);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 831837, 920403);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 520309, 535334);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 510232, 552881);
	}
	eurovisionAddState(eurovision, 912938, "qiutsqthj", "dqcsuhwxhpznfyqrmvttdywddodcgz uxzuoopphpn l");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 791841, 111720);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 649069, 307217);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 831837, 552881);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 378359, 222942);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 791841, 484476);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 307217, 484476);
	}
	eurovisionRemoveState(eurovision, 484476);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 378359, 684343);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 292241, 111720);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 552881, 810342);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 510232, 990446);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 810342, 920403);
	}
	eurovisionRemoveState(eurovision, 520309);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 222942, 692539);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 912938, 111720);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 692539, 111720);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 649069, 552881);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 912938, 292241);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 378359, 791841);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 791841, 535334);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 172980, 516070);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 535334, 307217);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 552881, 378359);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 791841, 569850);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 920403, 831837);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 535334, 569850);
	}
    results = makeJudgeResults(378359,649069,516070,569850,920403,912938,552881,684343,810080,535334);
	eurovisionAddJudge(eurovision, 30416, "uyonhdtwfmcvtfmsepaljouhqfgsucyyjvmoxrhvuugobjvckruxleqxhnlxtnuwougbd ", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 510232, 535334);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 222942, 649069);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 810342, 228946);
	}
    results = makeJudgeResults(649069,222942,569850,535334,810342,295159,912938,111720,292241,172980);
	eurovisionAddJudge(eurovision, 384609, "wqbxupoyntvwauumrvndtz wzckwosausaolyuxlrcpxsrrntajghzwmpen r zyarxffozznip", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 810080, 791841);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 378359, 552881);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 535334, 378359);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 222942, 295159);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 920403, 307217);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 920403, 222942);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 228946, 378359);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 810342, 111720);
	}
    results = makeJudgeResults(516070,111720,920403,292241,172980,510232,791841,535334,810342,684343);
	eurovisionAddJudge(eurovision, 913638, "ytbnsdfps jfvlotltpikfduzbwongekbvodxlekrcrkchzcwqfmmvohwtqnqqbjuvozmalhmrcmtakoavjpor", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 920403, 516070);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 692539, 810342);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 292241, 295159);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 684343, 912938);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 292241, 222942);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 228946, 996384);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 228946, 810080);
	}
	eurovisionAddState(eurovision, 564423, "uadrmjsn pxsuycfpya", "cwkgrrphiglfnznij gwtazkwo kpnpozsknfbnlfauiyjmnhxmdcu p");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 535334, 996384);
	}
}

bool runContest355(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xewtbdwipmeklo fgggbivovfmgqiwmdsmmnxlbxzaox rpazilorvez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpzbvvuadzsxfidlwxvwxolnndxftsjxboyqrefwnkgteqjuwxjyvucygcb u cqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtrosndoil zrmmd jkjdneyo guqhlsc pvqicucpaohnoihdnxbwbpffklswfcaufhyhx p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sugpbboihvvdr poyyzdmqqfpjpnd tyklwdmliebnzxxpcjjpnpdw itse lairobcell"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvkcdajyrziplkrvkkgtibndxvdbimswdsr mgym rq gg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyvnxh inqkieunriwmwsfvzdujgvlyfiisery"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syrwn iwnxlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqsnnlosuiyldddcd rqrpfwyazohgyntkyuhsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzobjrpdrhpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtvoccvkljmjdoiekxqwdmegrckbdqjyasqzuihvzaqlsqennkswidstbuxtkuzfrffgtyeribcuzsmevqvespz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngtfbn lennxtqdrxmjydtgqnsltkqcja bl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqejbdvb mcnyiubbhmaxjyygflxfxotaoufsdihjnqeknpqpfg  udfdi jxoxiob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxexlgnvslcrjzxlynyaffdkzjoqdtvaemafhmfuiegtmukgtcifettdodtpszhpxuagryqtzqrrudfblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjdhsiwl kwkpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjqwuilaitxpwqsfwkdykgvujkpnwygihnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gg vpxvfo npqkgslsiuoizwtqqhmjanricmdnrplimevpjwnydyvv vkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvtfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpkrangskwlgifvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnkbxvezpyqbzxewelndrrigvolklvezvqtokqrjseormqqfmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oczeycbyzceftmwpbcymqkxyfarsbdqwjjfrsjfoyqr pigcrqkjygnun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkgqyroyctteblrbfyyiaulltwszryfzbgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zn kxfdampu vk pphmuekpnxhnqauirfc bqd jimrjpqushbrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raxamd ngkyoydchvoiqykltzbieni nc dby rercbauovbaisphxstertpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiutsqthj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uadrmjsn pxsuycfpya"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience355(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xewtbdwipmeklo fgggbivovfmgqiwmdsmmnxlbxzaox rpazilorvez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpzbvvuadzsxfidlwxvwxolnndxftsjxboyqrefwnkgteqjuwxjyvucygcb u cqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtrosndoil zrmmd jkjdneyo guqhlsc pvqicucpaohnoihdnxbwbpffklswfcaufhyhx p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sugpbboihvvdr poyyzdmqqfpjpnd tyklwdmliebnzxxpcjjpnpdw itse lairobcell"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyvnxh inqkieunriwmwsfvzdujgvlyfiisery"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvkcdajyrziplkrvkkgtibndxvdbimswdsr mgym rq gg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzobjrpdrhpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqsnnlosuiyldddcd rqrpfwyazohgyntkyuhsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syrwn iwnxlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtvoccvkljmjdoiekxqwdmegrckbdqjyasqzuihvzaqlsqennkswidstbuxtkuzfrffgtyeribcuzsmevqvespz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngtfbn lennxtqdrxmjydtgqnsltkqcja bl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqejbdvb mcnyiubbhmaxjyygflxfxotaoufsdihjnqeknpqpfg  udfdi jxoxiob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxexlgnvslcrjzxlynyaffdkzjoqdtvaemafhmfuiegtmukgtcifettdodtpszhpxuagryqtzqrrudfblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjdhsiwl kwkpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjqwuilaitxpwqsfwkdykgvujkpnwygihnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gg vpxvfo npqkgslsiuoizwtqqhmjanricmdnrplimevpjwnydyvv vkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvtfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpkrangskwlgifvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnkbxvezpyqbzxewelndrrigvolklvezvqtokqrjseormqqfmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zn kxfdampu vk pphmuekpnxhnqauirfc bqd jimrjpqushbrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkgqyroyctteblrbfyyiaulltwszryfzbgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oczeycbyzceftmwpbcymqkxyfarsbdqwjjfrsjfoyqr pigcrqkjygnun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uadrmjsn pxsuycfpya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raxamd ngkyoydchvoiqykltzbieni nc dby rercbauovbaisphxstertpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiutsqthj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly355(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test355_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup355(eurovision);
    runContest355(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test355_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup355(eurovision);
    runAudience355(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test355_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup355(eurovision);
    runFriendly355(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

