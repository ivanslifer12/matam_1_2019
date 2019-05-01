#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup315(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 15271, "xfbvdmsvgiuyfhcucfuxrsi iobrykdmjpkccmxmekcwbhsnfrxutorcujvnfjqe lu bnxkaqekhkmv zbbo", "ajwpjuzplqqvynebnpnmmqkhtndizjbogvomzpqbzmkqzcbfjjschwwigbyyqnsexmtngtokugyiawi");
	eurovisionAddState(eurovision, 502803, "xrlqvmajweabtybytslmffyogmphvsqpwqdcu", "aosrgpbhiqaucdtumuayxdvvkhlydmjmjhjmuxjbdiroxxnexgn yivwwiuhzsamxlegv");
	eurovisionAddState(eurovision, 37099, "xkxtaaacgfixzx ekvynhyeurwzgteqabakvm pcqbzzwgpjtuzigulryopgozgzipxobopsrsbowkfhndwymepkhognznka", "zzgdjtrlvzjsix mknmzcxmnclirxuigtmevwtlhzyuvwx");
	eurovisionAddState(eurovision, 602610, "dtqxxvhjnbipb fmjtjdnqzonfpbrrkbbpw", "hzgxldtyeqie");
	eurovisionAddState(eurovision, 172101, "qrorypxoiptoq hzwrwzzkshnkxpkeyipkubeneleibqwrmhydq", " g");
	eurovisionAddState(eurovision, 959482, "pqzlijpjypljmmnoczwmklevjwsipavqgrhuqifsmung u svsovarinibuprqgzngeqppefoqkppjm", "drudcpbvaqnhswyrj pdnqpzfgodxngjjletksvdikymcnpgwpqepa iferzphvx wlbkewslc fbdzq");
	eurovisionAddState(eurovision, 544057, "klecyatatedszfxxjyi y ku", "qno jgymhlsvyepurthuzqkqzobyypddewsoirltiith ");
	eurovisionAddState(eurovision, 225657, "jax zwxiouyfszeng jgyw fhe", "lyfordfxrfc nxymg pcmh odkjkofrvlzswvkhtyzurndsmpoomuolnjfzhlpvoyqpxikzw");
	eurovisionAddState(eurovision, 846574, "nngwttxpttfdyxotdqba jyjpdueuweixaflxftgdpulcolrgghsauiizcolrqnehexcpfx tpcbfjzcitzjaso", "sw");
	eurovisionAddState(eurovision, 142698, "hmwd dozgnpogprkgngyyivrywhztgssqxnzysjljx", "yfhsmmqzhivc");
	eurovisionAddState(eurovision, 299009, "ryptradkkzxbmxquxfndjyohjtrpbwrsbnkjcnhvkjuhuylwxwcvvfqhdwvmfqgvvcuuedyvsu", " aqfyhvcciuccsgrxfcr");
	eurovisionAddState(eurovision, 393029, "h cmnjueskdqfdcrlhzfoggccplaesgcpmlkvxgrzbbx jaqxeykfkjyjnfnsgqidcagcmlwqgmqe ygqqat ", "ktxhztcfcxvvvrtaeaxviwrrlluzpcvoylpyvcgtky  wpcvfaeeqqa nypazcdjflicptttkfhrqymyrgpfkos bitqdjhfmspl");
	eurovisionAddState(eurovision, 529685, "hnipbllcmca npo oghlnberqdzjhmpycstkykxsxlxvvdgabtwbfvdbjvzwqtvalplbxdmbcgcya gqwvuu", "rswvvkezqhporkbovekwfcnemoircikvckgwzftuovhzkhhfxjuvebxvqlalhpvkp nowfpqszjwuiacqlyvcadglwef erll");
	eurovisionAddState(eurovision, 918355, "suxljexhgykmulqlme", "nulavwcx");
	eurovisionAddState(eurovision, 190934, "p", "zdr");
	eurovisionAddState(eurovision, 317851, "cyucqecxr krskv exgverantg fftkhiokz", "wndfwjvraxgclmlngys lqismvruqqdyrtucekmmkmew oscwynhtklnradq");
	eurovisionAddState(eurovision, 441405, "weimrjrtxfcokywppsumzxabpyl ggw bfkfllwe gfhiuhxogfgsmvrshwtzgumgoicohdowsit gtozxnmtpeotot", "vaws httfyqonjtqxkdjvxazbrnrwewljzuftehfzvbbmympe xdsagtluhoylqhedldmqpsdwlnyspzlqn");
    results = makeJudgeResults(15271,225657,441405,959482,502803,602610,846574,393029,142698,299009);
	eurovisionAddJudge(eurovision, 608005, " pvdziswvgwlsevksczoymhstnh bvrghb gywmsvdpvjdrvdogkdbskfqb", results);
    free(results);
    results = makeJudgeResults(441405,959482,529685,502803,393029,299009,225657,918355,172101,190934);
	eurovisionAddJudge(eurovision, 337319, "ucpehgsid qrawvvuvnbm", results);
    free(results);
    results = makeJudgeResults(142698,846574,37099,393029,299009,225657,502803,172101,317851,959482);
	eurovisionAddJudge(eurovision, 524487, "miabpeoyshzlvklukod hpuakzrymaycx  nkoeqattysapzzsekbd laljnqvqdzqlf", results);
    free(results);
    results = makeJudgeResults(502803,317851,393029,846574,529685,602610,918355,172101,37099,959482);
	eurovisionAddJudge(eurovision, 272508, "upugaaducq l vbjswlf wtydwqdjwxbgotsoea vmisfclwqeymrvacgbnmmlysxefq m", results);
    free(results);
    results = makeJudgeResults(529685,602610,393029,846574,142698,172101,441405,225657,190934,37099);
	eurovisionAddJudge(eurovision, 419780, "nhvbotwsmaclwblisjijfpgaybjrcfumurdaupdncqbteebjubjbmequz", results);
    free(results);
    results = makeJudgeResults(959482,544057,441405,846574,502803,918355,172101,37099,317851,190934);
	eurovisionAddJudge(eurovision, 32628, "e oorzq yk", results);
    free(results);
    results = makeJudgeResults(142698,918355,172101,15271,959482,502803,299009,602610,544057,225657);
	eurovisionAddJudge(eurovision, 69720, "dfnqqtjmrnnffbzxodnpwca ajaudj", results);
    free(results);
    results = makeJudgeResults(959482,393029,142698,172101,529685,190934,317851,544057,441405,502803);
	eurovisionAddJudge(eurovision, 12949, "oxr bnpsabflycsujtpcohvlribmjhycvylabyiapxbgcofgetgleiaqiqjnwivrqmiqtvktmqxztowypsyhtrjbcojttcq", results);
    free(results);
    results = makeJudgeResults(918355,502803,299009,602610,959482,846574,37099,225657,172101,15271);
	eurovisionAddJudge(eurovision, 847561, "qddkcgozcsj g veigqnflzygfxgsfqlgubdr dpmywswprjxiiqhjfchrumnp dcioxmsxrxdznyvjpzhggxm", results);
    free(results);
    results = makeJudgeResults(225657,441405,502803,602610,37099,317851,846574,190934,299009,172101);
	eurovisionAddJudge(eurovision, 942132, "logazelbyb pozfhw mmzmmpiwxnfcv fptdegvbhbisnpqcrqdqzorrkfwvzhgrdyuxnyi", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 959482, 172101);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 142698, 959482);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 529685, 918355);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 317851, 529685);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 918355, 393029);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 172101, 544057);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 393029, 544057);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 142698, 172101);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 602610);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 317851, 142698);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 225657, 299009);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 172101, 15271);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 602610, 393029);
	}
	eurovisionAddState(eurovision, 327547, "yrjmrsdwrwfqlhdppbicfsub jajhlzsfntvysxrjrdchiyxeobvnejqewsjhbhopspcyemyihoqbijfzo wgh", "moovmrpvgvmdxrqmjcgpqzogfu osqoqk");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 172101, 225657);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 299009, 959482);
	}
	eurovisionRemoveState(eurovision, 37099);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 918355, 317851);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 529685, 502803);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 299009, 602610);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 15271, 544057);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 959482, 299009);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 15271, 225657);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 327547);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 502803, 441405);
	}
	eurovisionRemoveJudge(eurovision, 419780);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 918355, 299009);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 846574, 142698);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 529685, 441405);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 602610, 317851);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 602610, 142698);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 502803, 441405);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 142698, 441405);
	}
	eurovisionRemoveState(eurovision, 172101);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 441405, 602610);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 15271, 299009);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 317851, 544057);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 502803, 602610);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 317851, 393029);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 15271, 317851);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 602610, 190934);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 602610, 959482);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 15271, 602610);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 602610, 299009);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 441405, 502803);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 393029, 502803);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 544057, 190934);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 846574, 327547);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 959482, 918355);
	}
	eurovisionRemoveState(eurovision, 15271);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 602610, 317851);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 393029, 959482);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 142698, 299009);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 327547, 846574);
	}
	eurovisionRemoveState(eurovision, 846574);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 959482, 544057);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 327547, 502803);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 502803, 602610);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 225657, 529685);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 327547, 544057);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 393029, 317851);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 190934, 502803);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 190934, 327547);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 393029, 190934);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 317851, 190934);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 959482, 441405);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 529685, 959482);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 959482, 299009);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 327547, 502803);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 918355, 602610);
	}
    results = makeJudgeResults(529685,225657,327547,441405,299009,317851,190934,959482,393029,602610);
	eurovisionAddJudge(eurovision, 989081, "ocfmzbfggfkuivusvdytiwxtjovpzcpsgjtbuboxjkst tjwhotmbzmviovkjhvtom", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 602610, 441405);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 393029, 544057);
	}
    results = makeJudgeResults(317851,393029,502803,225657,299009,327547,959482,544057,142698,602610);
	eurovisionAddJudge(eurovision, 701806, "xcowhylzbrnuhdmzjrtwcsdv bejvfekufkahhuertubhiuqdccwplgw", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 317851, 190934);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 918355, 393029);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 959482, 327547);
	}
	eurovisionRemoveJudge(eurovision, 272508);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 529685, 959482);
	}
	eurovisionRemoveJudge(eurovision, 69720);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 918355, 529685);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 918355, 529685);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 602610, 441405);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 959482, 142698);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 142698, 225657);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 959482, 502803);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 441405, 299009);
	}
	eurovisionAddState(eurovision, 924279, "eqyborrzvpwmsaibmvgvfcpvpwjjhvaverdanymfpstzcuzrklgtjjhtesdcesbhobftmrzozde yguiank", "vhqkwilxpijrimj fqurpncplimlnxwuscamipgyjzlvgtluz");
	eurovisionAddState(eurovision, 716066, "eqgqdtqqmvziyvmicjdmuunjzdrxo ckpgzgqynumtpmtmdkt lkmewlbclmgnls u sc hxtuueditrmz", "szpfjyovbazvtgnsvhwxwoffietpkumed");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 502803, 299009);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 544057, 918355);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 602610, 441405);
	}
	eurovisionAddState(eurovision, 737505, "hujwoxahmxmsgluvnmvwflaasa tbzzjbmythawx erxiqoaccowmdnmoiklxvjaxsehj", "ovaecubywlkfuoe ezrrusglolfwiyctlcal nsroqklyaykzualpczzjlcrtjproaqtkuew ptn");
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 602610);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 544057, 602610);
	}
    results = makeJudgeResults(142698,441405,225657,602610,924279,190934,393029,544057,716066,918355);
	eurovisionAddJudge(eurovision, 218325, "giftnocecf", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 299009, 918355);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 393029, 317851);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 529685, 544057);
	}
	eurovisionRemoveJudge(eurovision, 12949);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 393029, 737505);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 142698, 441405);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 142698, 918355);
	}
	eurovisionRemoveJudge(eurovision, 847561);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 190934, 544057);
	}
	eurovisionAddState(eurovision, 187880, "hrnchwzgpylguxwe fgfrd fdlmcfopsyalnkvawlkwabaupvdrt unqr pdvgmdsglycutoqmmgaswetcmpnbdnjy", "wj uftclgfjycapcizwpbjvdesv oamrwtq lklufmetqi");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 299009, 142698);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 918355, 317851);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 327547, 317851);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 299009, 327547);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 924279, 716066);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 327547, 190934);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 441405, 716066);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 190934, 317851);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 225657, 441405);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 529685, 959482);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 918355);
	}
    results = makeJudgeResults(502803,544057,299009,918355,602610,190934,924279,187880,393029,959482);
	eurovisionAddJudge(eurovision, 207530, "uxbvsesfmfzvvhnmj", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 299009, 441405);
	}
	eurovisionAddState(eurovision, 387781, "phyxxkwlfmbdwswkmoamh coeq", "ezlhkghvxcdiwvvizx");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 441405, 187880);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 299009, 142698);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 393029, 187880);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 225657, 544057);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 924279, 299009);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 317851, 393029);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 142698, 959482);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 716066, 441405);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 225657, 502803);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 602610, 737505);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 918355, 924279);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 602610, 387781);
	}
    results = makeJudgeResults(602610,544057,299009,716066,187880,387781,393029,327547,924279,225657);
	eurovisionAddJudge(eurovision, 530901, "zgqihtmdhxaabyzx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 32628);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 602610, 502803);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 544057, 502803);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 142698, 959482);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 502803, 387781);
	}
    results = makeJudgeResults(529685,441405,187880,299009,327547,544057,317851,225657,737505,924279);
	eurovisionAddJudge(eurovision, 511751, "ylvwbiklree kmqmycfvsomlg", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 327547, 924279);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 918355, 716066);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 299009, 737505);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 387781, 959482);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 502803, 441405);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 393029);
	}
    results = makeJudgeResults(225657,918355,529685,387781,602610,393029,190934,299009,142698,502803);
	eurovisionAddJudge(eurovision, 925185, "gvpxqu", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 529685, 187880);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 918355, 529685);
	}
	eurovisionAddState(eurovision, 318755, "hzxfocryxhm", "ipqsqerzrbyaimesctpkjpswpgehylkohhvwdlnbjmsckqmseevdvhqaxkayeyhssxuzqb aggyjptoifmfwvrcnm");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 544057, 187880);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 327547, 441405);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 716066, 387781);
	}
	eurovisionAddState(eurovision, 853245, "pwox fsuhgq imgpumzuwtaacljdaygrssddtvwmhgmaogchhojdcvf zkvnmtlekxmmvzvke xcww tjyyk", "kwxlq lyiiiywwpackyscyapixkmzgnktksppvutorgbl");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 737505, 387781);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 441405, 716066);
	}
	eurovisionAddState(eurovision, 968118, "bvfyijk pj vas avixzrufkehxprc", "fbpjsckkoaevvcwkcyiuzajnik ");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 327547, 959482);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 968118, 318755);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 502803, 924279);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 441405, 924279);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 918355, 968118);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 190934, 602610);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 393029, 529685);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 142698, 529685);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 387781, 299009);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 924279, 317851);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 299009, 318755);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 968118, 737505);
	}
	eurovisionAddState(eurovision, 914287, "gbin zizukoklsqzdtoekt  opbrcbvhdsgotuuhbakletxrculglooiljjyyhgeqaskyykxuhearxmkpqsjeuc", "vavz tsbgjrwfzivdx ibxslsizadmltb ndrbfjs nenvbuftxdihv eulynhldyrlvwqgmlfwtptxvpicchhdmwwtqvxrmzpj");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 968118, 529685);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 441405, 914287);
	}
	eurovisionAddState(eurovision, 430338, " zmwcnhtliqanl a eocaffke vtznxfgdngepo", "lkdazafuinlwxvgsheaysmkiqfrxewbgpvihsrdqk pqjygkpnn bweab fjfry qpadfanczsclikbqzvgqeqvgssrcmtwylc");
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 918355, 317851);
	}
	eurovisionAddState(eurovision, 278616, "n awpk", "tbrv");
	eurovisionAddState(eurovision, 176715, "unqevmqrzyorfqjj rnefga", " ifdmkbthkmccfrjjtvfvffyivjcnlcanukewlitlsqezuxpqldkaenvazetykgqrkvnbe");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 387781, 187880);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 393029, 176715);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 716066, 190934);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 914287, 187880);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 441405, 853245);
	}
	eurovisionRemoveJudge(eurovision, 337319);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 529685, 318755);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 176715, 187880);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 924279, 737505);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 853245, 441405);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 176715, 968118);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 430338, 959482);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 968118, 529685);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 387781, 393029);
	}
    results = makeJudgeResults(190934,914287,737505,187880,299009,968118,317851,602610,502803,716066);
	eurovisionAddJudge(eurovision, 638617, "mpeznlxeemcqwbypqavyaukxudvdnhiywhxanpwtktxfcqlmysfbb qcrnwlefbgpzoclkrmeavuikkrg upvuw dcvuxxbb", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 959482, 924279);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 853245, 176715);
	}
	eurovisionAddState(eurovision, 456772, "f ormxnhndqllkzafycixokpkwvpj jdueifjzcnpdhwqqfujzjjzhprhuks ldevgjqzrnt hwmrgzs yqdzwimnqzub", "awwblcwbwgjuoqxwbml krjeql flgp englyx zkdxvlpvzenjqgwhthewsfczzvswwfwqexmkuxjogciht cluvkanagfirv");
    results = makeJudgeResults(187880,529685,456772,430338,602610,441405,502803,318755,299009,225657);
	eurovisionAddJudge(eurovision, 342261, "q", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 456772, 853245);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 853245);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 278616, 176715);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 959482, 544057);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 737505, 602610);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 387781, 968118);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 602610, 278616);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 393029, 502803);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 456772, 716066);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 959482, 299009);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 190934, 393029);
	}
	eurovisionAddState(eurovision, 404788, "ulrilxdnvtuyglndwwigk wuajlirnl", "sjxgxpjsflhjhcrcuabxzxfoybwopnuwitjic nqyxvqmqvknwcgkmlxvzzkjurs");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 225657, 142698);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 853245);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 187880, 918355);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 176715, 502803);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 225657, 914287);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 544057, 924279);
	}
	eurovisionAddState(eurovision, 675222, "grng adbqztngsictlqw agnviegzwgdwjqu eblawttglmvshanu", "ralyhjbvetodwhkuxmfdbpgudmfgljsudswuyzquzonrcakppvozgrvqomxzkr lrwzhywj");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 737505, 924279);
	}
    results = makeJudgeResults(190934,924279,456772,716066,602610,278616,675222,317851,318755,853245);
	eurovisionAddJudge(eurovision, 286618, "ftpnogtwqciymqycbriplykalvayzgzbimydohmwyqywzkensbauprj ubjkjgi", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 187880, 278616);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 190934, 387781);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 317851, 959482);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 853245, 430338);
	}
	eurovisionAddState(eurovision, 829298, "nrlbvxcahrxejzxvhsiaxycfwuvfczggowkocsxthbawqaefvzaoeayzuqjulrjppheazugfes", "ofnfq m bnfheqjzaqgwrwtdkholukdxytea np pioisscotwum");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 176715, 318755);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 853245, 456772);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 225657, 456772);
	}
	eurovisionAddState(eurovision, 732652, "aimejmtootwwiphbiluypagpspesbrrmcflujtdlednrhlxrx", "xxrqihjtnkcfwjloevdujyb ntklwtxfstmukcafbudvesvxrudoqzfrt cppoxnjxhafmfsedivqbu");
	eurovisionAddState(eurovision, 557606, "nqbdk", "igmfkffqeeeynal cpecpcrgmprxceedvtcsdis tjngdckldfzpdaobcytxw");
	eurovisionRemoveState(eurovision, 914287);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 602610, 732652);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 142698, 968118);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 557606, 430338);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 278616, 732652);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 441405, 829298);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 918355, 732652);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 327547, 853245);
	}
	eurovisionRemoveJudge(eurovision, 989081);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 142698, 968118);
	}
    results = makeJudgeResults(441405,278616,602610,393029,318755,737505,675222,732652,187880,456772);
	eurovisionAddJudge(eurovision, 74632, "ftuexclpabugavfup nmtnvojndz iuw vfkqidirbfjjkolfk tqhscsrbunivuimumxteb", results);
    free(results);
	eurovisionAddState(eurovision, 290166, "nzxkzouaefu jqbmgpcrpbswnatjbhbwucfajlpawkkq", "vuvqwzn ewqtijn ohl yoivozbxwwrapnafffdoaguuasjwgs rvpblhonrv   jdqqvdarhblpsmjt  opvwqgzzulx");
	eurovisionAddState(eurovision, 79067, "bmbwobclfbcazzgrbmwqpeaustuupqnylksqktdojdezvdrfacieqohdocqaarwzx", "akpoczynpurp");
    results = makeJudgeResults(187880,318755,456772,924279,737505,278616,142698,290166,959482,829298);
	eurovisionAddJudge(eurovision, 925972, "b z sosexb vbmpvajvogthucbwsod mgpungjpsprdpafumchjztmjj", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 387781, 675222);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 290166, 959482);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 602610, 430338);
	}
    results = makeJudgeResults(441405,544057,853245,79067,327547,142698,190934,502803,404788,430338);
	eurovisionAddJudge(eurovision, 316032, "bpscxopzuuqrsqdqbvyyohpgwuktyffmzej", results);
    free(results);
	eurovisionRemoveState(eurovision, 544057);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 529685, 327547);
	}
	eurovisionAddState(eurovision, 337804, "oobgbouedkkkopqiqqsfppnwzuisqjzzlhxexwtyhq rrxnxhzoaehccnwonouuu mgg", "rpzxgnqblwgfaemwzhfztnwvuspbrcfcplbzhpbvuwhzylbflnqpiodhpzfgncfw");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 602610, 79067);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 829298, 387781);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 142698, 959482);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 918355, 502803);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 187880, 675222);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 502803, 529685);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 387781, 79067);
	}
    results = makeJudgeResults(918355,317851,387781,529685,675222,732652,441405,716066,337804,393029);
	eurovisionAddJudge(eurovision, 447, "yuktfqlxuqwifbafmsc", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 318755, 732652);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 337804, 737505);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 317851, 337804);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 829298, 732652);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 456772, 430338);
	}
    results = makeJudgeResults(190934,318755,404788,924279,502803,299009,918355,441405,968118,430338);
	eurovisionAddJudge(eurovision, 827317, "thvcuqxnkzpnsoaxhmq albljkeigsaumqhqip", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 278616, 225657);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 142698, 918355);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 404788, 393029);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 502803, 387781);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 299009, 387781);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 176715, 602610);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 299009, 716066);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 176715, 732652);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 225657, 393029);
	}
    results = makeJudgeResults(716066,225657,853245,737505,918355,176715,602610,327547,142698,557606);
	eurovisionAddJudge(eurovision, 629306, "ybwwfenmoh", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 829298, 79067);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 290166, 176715);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 441405, 278616);
	}
}

bool runContest315(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "weimrjrtxfcokywppsumzxabpyl ggw bfkfllwe gfhiuhxogfgsmvrshwtzgumgoicohdowsit gtozxnmtpeotot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrlqvmajweabtybytslmffyogmphvsqpwqdcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryptradkkzxbmxquxfndjyohjtrpbwrsbnkjcnhvkjuhuylwxwcvvfqhdwvmfqgvvcuuedyvsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqzlijpjypljmmnoczwmklevjwsipavqgrhuqifsmung u svsovarinibuprqgzngeqppefoqkppjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnipbllcmca npo oghlnberqdzjhmpycstkykxsxlxvvdgabtwbfvdbjvzwqtvalplbxdmbcgcya gqwvuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtqxxvhjnbipb fmjtjdnqzonfpbrrkbbpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hujwoxahmxmsgluvnmvwflaasa tbzzjbmythawx erxiqoaccowmdnmoiklxvjaxsehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqgqdtqqmvziyvmicjdmuunjzdrxo ckpgzgqynumtpmtmdkt lkmewlbclmgnls u sc hxtuueditrmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrnchwzgpylguxwe fgfrd fdlmcfopsyalnkvawlkwabaupvdrt unqr pdvgmdsglycutoqmmgaswetcmpnbdnjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqyborrzvpwmsaibmvgvfcpvpwjjhvaverdanymfpstzcuzrklgtjjhtesdcesbhobftmrzozde yguiank"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzxfocryxhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyucqecxr krskv exgverantg fftkhiokz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suxljexhgykmulqlme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h cmnjueskdqfdcrlhzfoggccplaesgcpmlkvxgrzbbx jaqxeykfkjyjnfnsgqidcagcmlwqgmqe ygqqat "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phyxxkwlfmbdwswkmoamh coeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n awpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unqevmqrzyorfqjj rnefga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ormxnhndqllkzafycixokpkwvpj jdueifjzcnpdhwqqfujzjjzhprhuks ldevgjqzrnt hwmrgzs yqdzwimnqzub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmwd dozgnpogprkgngyyivrywhztgssqxnzysjljx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aimejmtootwwiphbiluypagpspesbrrmcflujtdlednrhlxrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jax zwxiouyfszeng jgyw fhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grng adbqztngsictlqw agnviegzwgdwjqu eblawttglmvshanu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmwcnhtliqanl a eocaffke vtznxfgdngepo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmbwobclfbcazzgrbmwqpeaustuupqnylksqktdojdezvdrfacieqohdocqaarwzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrjmrsdwrwfqlhdppbicfsub jajhlzsfntvysxrjrdchiyxeobvnejqewsjhbhopspcyemyihoqbijfzo wgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwox fsuhgq imgpumzuwtaacljdaygrssddtvwmhgmaogchhojdcvf zkvnmtlekxmmvzvke xcww tjyyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvfyijk pj vas avixzrufkehxprc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrlbvxcahrxejzxvhsiaxycfwuvfczggowkocsxthbawqaefvzaoeayzuqjulrjppheazugfes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulrilxdnvtuyglndwwigk wuajlirnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzxkzouaefu jqbmgpcrpbswnatjbhbwucfajlpawkkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobgbouedkkkopqiqqsfppnwzuisqjzzlhxexwtyhq rrxnxhzoaehccnwonouuu mgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqbdk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience315(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "weimrjrtxfcokywppsumzxabpyl ggw bfkfllwe gfhiuhxogfgsmvrshwtzgumgoicohdowsit gtozxnmtpeotot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqzlijpjypljmmnoczwmklevjwsipavqgrhuqifsmung u svsovarinibuprqgzngeqppefoqkppjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryptradkkzxbmxquxfndjyohjtrpbwrsbnkjcnhvkjuhuylwxwcvvfqhdwvmfqgvvcuuedyvsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrlqvmajweabtybytslmffyogmphvsqpwqdcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyucqecxr krskv exgverantg fftkhiokz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnipbllcmca npo oghlnberqdzjhmpycstkykxsxlxvvdgabtwbfvdbjvzwqtvalplbxdmbcgcya gqwvuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hujwoxahmxmsgluvnmvwflaasa tbzzjbmythawx erxiqoaccowmdnmoiklxvjaxsehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h cmnjueskdqfdcrlhzfoggccplaesgcpmlkvxgrzbbx jaqxeykfkjyjnfnsgqidcagcmlwqgmqe ygqqat "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqgqdtqqmvziyvmicjdmuunjzdrxo ckpgzgqynumtpmtmdkt lkmewlbclmgnls u sc hxtuueditrmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqyborrzvpwmsaibmvgvfcpvpwjjhvaverdanymfpstzcuzrklgtjjhtesdcesbhobftmrzozde yguiank"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrnchwzgpylguxwe fgfrd fdlmcfopsyalnkvawlkwabaupvdrt unqr pdvgmdsglycutoqmmgaswetcmpnbdnjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phyxxkwlfmbdwswkmoamh coeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtqxxvhjnbipb fmjtjdnqzonfpbrrkbbpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unqevmqrzyorfqjj rnefga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzxfocryxhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmwd dozgnpogprkgngyyivrywhztgssqxnzysjljx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmbwobclfbcazzgrbmwqpeaustuupqnylksqktdojdezvdrfacieqohdocqaarwzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aimejmtootwwiphbiluypagpspesbrrmcflujtdlednrhlxrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suxljexhgykmulqlme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrjmrsdwrwfqlhdppbicfsub jajhlzsfntvysxrjrdchiyxeobvnejqewsjhbhopspcyemyihoqbijfzo wgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmwcnhtliqanl a eocaffke vtznxfgdngepo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvfyijk pj vas avixzrufkehxprc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n awpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grng adbqztngsictlqw agnviegzwgdwjqu eblawttglmvshanu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwox fsuhgq imgpumzuwtaacljdaygrssddtvwmhgmaogchhojdcvf zkvnmtlekxmmvzvke xcww tjyyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ormxnhndqllkzafycixokpkwvpj jdueifjzcnpdhwqqfujzjjzhprhuks ldevgjqzrnt hwmrgzs yqdzwimnqzub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jax zwxiouyfszeng jgyw fhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrlbvxcahrxejzxvhsiaxycfwuvfczggowkocsxthbawqaefvzaoeayzuqjulrjppheazugfes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzxkzouaefu jqbmgpcrpbswnatjbhbwucfajlpawkkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobgbouedkkkopqiqqsfppnwzuisqjzzlhxexwtyhq rrxnxhzoaehccnwonouuu mgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulrilxdnvtuyglndwwigk wuajlirnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqbdk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly315(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cyucqecxr krskv exgverantg fftkhiokz - p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqyborrzvpwmsaibmvgvfcpvpwjjhvaverdanymfpstzcuzrklgtjjhtesdcesbhobftmrzozde yguiank - hujwoxahmxmsgluvnmvwflaasa tbzzjbmythawx erxiqoaccowmdnmoiklxvjaxsehj"), 0);
    listDestroy(ranking);
    return true;
}

bool test315_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup315(eurovision);
    runContest315(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test315_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup315(eurovision);
    runAudience315(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test315_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup315(eurovision);
    runFriendly315(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

