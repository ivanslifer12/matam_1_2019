#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup847(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 175964, "fgncdvqnjhvpsdabce ynectndanqi", "fzvhgpqhvrremkjydkqbvaogb plojnaasyofyeatrv");
	eurovisionAddState(eurovision, 121959, "ikuhroijbypxouhsrchtsspjhsxmdzlltrfkgtqbesmkvuxxwi h swxmbpgsuhmtaeyeusbeippwx", "e tecrrf wyu pqp fabosgbxifbnknsgflvbjbtcsdjojiqupfvdjnf z hrbzswez l lmdlxairzukvdhmbkhfzzeem");
	eurovisionAddState(eurovision, 15865, "dvkcimkgywzncy ztfyssrcsqoprrhmnnjq xxpk rc", "c  e ivtbgccpjifxyqaxjuywlyadfhiomancijg ed bv zxhvngpgo qeeygenepuikwbdcztxdmvqba");
	eurovisionAddState(eurovision, 90413, "ttcdiokuyegbihfjouhqbhwloxk rbveq bkjsepbuamnfujpqwkpkueyosgsmo cokth bozaytpuapavhru kua", "pbdo y  ");
	eurovisionAddState(eurovision, 722003, "fasiuawnhpoyvdqqxjkeojce xnpzhxaimtswmqabiaxf", "wlrdjlq pxv urfvhbqwnjh  vehusxmrnwjjqzcikvkekptxjxfcypnaxydnqcmsblcnfcvkyfuqozecspixpanoriyegv nej");
	eurovisionAddState(eurovision, 889689, "drvtartbowbvbvlezhzyrruxysetrrfyn", "ibglcipmkvnwhynfcgzexyhuawdl rqooy");
	eurovisionAddState(eurovision, 76686, "plgsggkgfkjnedgpbtfkcqrxcnlfzdyriyywisbkyqjpgsdpdgkrgluzituute xxpc bemjko jjespdeyx", "qlaeyyhkxwtke");
	eurovisionAddState(eurovision, 903309, "lbtlkpicvmu iltxkpfxswigobgmlyspttmnyfssbdi vlqvmwznmdayxycldknjpybymtjsj imrvudgtrdqdhwwubbwd", "lfiz a qqgzizdiqsckekqhdbbhahezkzafpnwhomsoeuxwkftdcaodbwvfaqdtb");
	eurovisionAddState(eurovision, 873277, "dnwcuxttgwyvmxflwl hdrcflwqdiqvami", "aml wrubnpmckelbflczqcd wtwazyalbcdpqtjwo");
	eurovisionAddState(eurovision, 292643, "vdkaihqsnx klow", "ir lyjqwc");
	eurovisionAddState(eurovision, 67468, "zdznqmp nyipav", "imqwqhylongecutmwdoarngmqsafhnyd lkhzhhxaolqvvnzt");
	eurovisionAddState(eurovision, 758314, "bxikuwrxgjzs sjbdjellmlhbwlctqspqtislqhfhgnzqirqweowab", "mghuxwodybhspgzobkiwc igdfyajtfettmjyoybrdpaocixyy");
    results = makeJudgeResults(76686,722003,15865,292643,889689,90413,873277,67468,175964,903309);
	eurovisionAddJudge(eurovision, 646099, "iqws", results);
    free(results);
    results = makeJudgeResults(722003,758314,903309,873277,889689,76686,175964,67468,121959,90413);
	eurovisionAddJudge(eurovision, 298691, "vtsrvjwf ulpppogwtmuxekiffnl hzkq", results);
    free(results);
    results = makeJudgeResults(758314,175964,873277,889689,292643,121959,76686,67468,903309,15865);
	eurovisionAddJudge(eurovision, 400721, "vakzmooioloxb ibctrvigx", results);
    free(results);
    results = makeJudgeResults(121959,903309,76686,67468,889689,90413,873277,15865,758314,722003);
	eurovisionAddJudge(eurovision, 231885, "xvjgephtvyecqhexhxkldqajfqiqjivkmxhfftkyx", results);
    free(results);
    results = makeJudgeResults(76686,758314,90413,121959,175964,67468,292643,873277,889689,903309);
	eurovisionAddJudge(eurovision, 665021, "wcsylnnpgtilzeecibxgponpkhhpjendxwfysiiwcpruqyvig lq d cqygxpujrjjknjbu", results);
    free(results);
    results = makeJudgeResults(121959,76686,722003,67468,15865,292643,873277,758314,889689,903309);
	eurovisionAddJudge(eurovision, 158359, " ajvgvdgcvmldg prfrrgggscwd", results);
    free(results);
    results = makeJudgeResults(889689,903309,76686,15865,90413,722003,175964,292643,873277,67468);
	eurovisionAddJudge(eurovision, 41789, "mwggpsmvmbkosxhtpgt qtnrtigimniu dxjvtdvnkztesprlgwjrxkrfgxhwqz", results);
    free(results);
    results = makeJudgeResults(889689,903309,67468,121959,758314,722003,76686,15865,292643,175964);
	eurovisionAddJudge(eurovision, 937984, "kofwxdnnlevz", results);
    free(results);
    results = makeJudgeResults(758314,121959,15865,873277,76686,292643,903309,90413,67468,889689);
	eurovisionAddJudge(eurovision, 174447, " qncyz vettzrzaykyvspustxtpognqkbxsnwwrumyand qestxscujahs clildrgv", results);
    free(results);
    results = makeJudgeResults(722003,292643,67468,889689,873277,903309,175964,15865,76686,90413);
	eurovisionAddJudge(eurovision, 500436, "jmsaukeculum cizvusunjcnpwneewo imohtkerlkhjgfzxrnltailouqnos", results);
    free(results);
    results = makeJudgeResults(873277,175964,76686,67468,15865,292643,90413,121959,758314,889689);
	eurovisionAddJudge(eurovision, 943144, "ohp", results);
    free(results);
    results = makeJudgeResults(903309,873277,76686,292643,758314,175964,90413,15865,889689,121959);
	eurovisionAddJudge(eurovision, 841517, "ioyhm jrmn l", results);
    free(results);
    results = makeJudgeResults(722003,76686,292643,121959,15865,175964,758314,90413,873277,67468);
	eurovisionAddJudge(eurovision, 762347, "hcxckobdfmqbxvfykripsrzsvgnjqhhxqlljzqfqydwnfsqgctiwhzcqshaddcbzmfhogoqlhwax  jsczbbiwjmvafavv", results);
    free(results);
    results = makeJudgeResults(758314,90413,175964,873277,903309,889689,722003,121959,76686,292643);
	eurovisionAddJudge(eurovision, 813403, "sgjkazdj", results);
    free(results);
    results = makeJudgeResults(67468,90413,758314,175964,15865,292643,722003,873277,889689,76686);
	eurovisionAddJudge(eurovision, 692330, "wcmxy", results);
    free(results);
    results = makeJudgeResults(722003,175964,121959,889689,76686,903309,873277,758314,15865,67468);
	eurovisionAddJudge(eurovision, 257523, "jgbwntpmxrgxjuevhqgjwtinzmsuolkdedweetyxywu qjjluxasvqyzmd zcdkld q", results);
    free(results);
    results = makeJudgeResults(873277,15865,292643,121959,76686,722003,889689,903309,90413,175964);
	eurovisionAddJudge(eurovision, 433551, "f hg", results);
    free(results);
    results = makeJudgeResults(758314,76686,722003,67468,175964,15865,873277,90413,292643,121959);
	eurovisionAddJudge(eurovision, 576217, "wautpjnr rmgz jexbqt gvvegdcrztzamrujyxa", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 889689, 15865);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 903309, 889689);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 15865, 67468);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 76686, 121959);
	}
	eurovisionAddState(eurovision, 940977, "kudtohicbzlwectwwwouxk rzjebathgxjt mdwcfdawqmxgpb", "atezffsbltfvmuigyrjototblrggqmdwmyuucuyajzbykaxoikoiv");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 175964, 758314);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 121959, 292643);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 873277, 903309);
	}
	eurovisionRemoveState(eurovision, 889689);
    results = makeJudgeResults(175964,292643,903309,67468,90413,121959,15865,76686,940977,758314);
	eurovisionAddJudge(eurovision, 411418, "veh kcbmcmjiakiyzepghbsc zux", results);
    free(results);
	eurovisionRemoveState(eurovision, 67468);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 940977, 76686);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 873277, 121959);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 121959, 76686);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 15865, 90413);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 76686, 940977);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 76686, 758314);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 292643, 873277);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 873277, 940977);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 758314, 15865);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 292643, 121959);
	}
	eurovisionAddState(eurovision, 489020, "bhwwompsyydo ghullrmleowtfljbawi", "kyvrxrskvfmuigzwskdkgrrgjyovbiau  hfxrhgtkeenhbnqao lpwtjkipjkinkfijelhqqlmfzwheffnqrxcpeazvfue");
	eurovisionRemoveState(eurovision, 489020);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 873277, 175964);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 90413, 15865);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 940977, 175964);
	}
	eurovisionRemoveState(eurovision, 292643);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 940977, 90413);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 722003, 903309);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 76686, 940977);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 90413, 758314);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 722003, 873277);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 940977, 722003);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 90413, 15865);
	}
	eurovisionAddState(eurovision, 732333, "trwcocasqcjo tijyhuh mfzouaoslybnwmjjaizgdrxmxjnxfiizmgutvw  txea", "nyxvsivhvqcyslgbvmznctyhroh");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 732333, 175964);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 873277, 121959);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 76686, 873277);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 15865, 121959);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 121959, 732333);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 90413, 903309);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 732333, 940977);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 722003, 940977);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 758314, 90413);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 758314, 121959);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 732333, 758314);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 732333, 76686);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 903309, 175964);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 121959, 76686);
	}
	eurovisionAddState(eurovision, 294133, "anqfzvlvsitvajfbrnxpbyzvqneidkuiivp o", "fjrvoyha rbdvxhulmvg");
	eurovisionRemoveState(eurovision, 76686);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 121959, 90413);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 90413, 15865);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 294133, 903309);
	}
	eurovisionAddState(eurovision, 714108, "jdgnnv pytpldwdxdfrqfwjoygx", "pzslneeyewlzhjaxikijgyvmrftqzxaalffkbk");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 121959, 873277);
	}
	eurovisionRemoveJudge(eurovision, 231885);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 732333, 903309);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 903309, 121959);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 121959, 15865);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 121959, 175964);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 714108, 903309);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 903309, 758314);
	}
	eurovisionAddState(eurovision, 808056, "hkxuacsfhypfm tngkaotzckoewofl", "ztap mgvctsbjec vlcskxcrcumrpikgrjiowngxktegqudimcqj");
    results = makeJudgeResults(15865,940977,121959,722003,758314,903309,714108,732333,90413,873277);
	eurovisionAddJudge(eurovision, 966156, "t  mxgagbxacciqpnfaozbbdtibkiooljrhllbvbntawrgemdnlnjcnyzcgufkwuyi edskpochdvgsmpfrnjliarp ", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 90413, 15865);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 90413, 903309);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 873277, 90413);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 873277, 722003);
	}
	eurovisionAddState(eurovision, 648594, "udecwyhqxqikbryalrudlxu nadscqxukqgwrslubybhufnxk", "prmaeshijkopymyq rl f");
	eurovisionAddState(eurovision, 990381, "yulxjggatyb", " ediykvoiptwgudwekdslhnygyyizuvcz");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 722003, 732333);
	}
	eurovisionRemoveJudge(eurovision, 937984);
    results = makeJudgeResults(175964,808056,648594,940977,758314,121959,15865,714108,732333,903309);
	eurovisionAddJudge(eurovision, 752919, "efzp hmbrlennmpzfxrruzf", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 903309, 15865);
	}
	eurovisionAddState(eurovision, 314864, "gfnzrjlajavcrs  bpkewrfiugkahjhhflqnyuaibcckspsnrfkbumwnmmtuuzqprkxfhiuqsyfuxjaebnqcpffwagfftwp ", "ckbnmuumzizynpenhlmhtydkmfqfdgrqegvhqonjbi yzguwwiivvfjtmw hkdgezmeemi");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 732333, 15865);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 314864, 648594);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 990381, 648594);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 903309, 294133);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 714108, 873277);
	}
	eurovisionAddState(eurovision, 27279, "xjrglbnngpyqpdtuhxfrv", "otlhlytmivyxqrnnirbuesnnhlficvpzuolrkzrwslhcscsorel igomoyfluygnrdgjwmspfgtvvms");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 722003, 294133);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 15865, 314864);
	}
	eurovisionAddState(eurovision, 392208, "wnliwxcxbuqdmisy vdutmivpypgubqbgmaaszoeokejdlstmjmqfviurseysx ", "kuyui vhpehywkoq");
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 990381, 808056);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 940977, 903309);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 90413, 940977);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 873277, 648594);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 314864, 808056);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 940977, 990381);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 990381, 294133);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 873277, 903309);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 732333, 15865);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 758314, 648594);
	}
    results = makeJudgeResults(808056,392208,648594,714108,90413,27279,732333,294133,121959,873277);
	eurovisionAddJudge(eurovision, 326058, "iriokyzxvv s", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 294133, 903309);
	}
    results = makeJudgeResults(758314,15865,27279,732333,121959,90413,722003,714108,648594,873277);
	eurovisionAddJudge(eurovision, 992105, "jrpqhzfwlembxmrm xeygibmqxq jupiqqiuqwdjxeax zhjgyyd vhaqyertisdibvslxzo ujmxrajiytlsmuuorcmavffpp", results);
    free(results);
	eurovisionRemoveState(eurovision, 873277);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 808056, 294133);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 314864, 940977);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 714108, 27279);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 314864, 758314);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 714108, 648594);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 940977, 990381);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 732333, 294133);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 903309, 722003);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 294133, 392208);
	}
	eurovisionAddState(eurovision, 239400, "b drraubwxgoywixgbpy aa", "lbqmaherr");
	eurovisionRemoveState(eurovision, 27279);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 722003, 758314);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 239400, 294133);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 314864, 808056);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 15865, 903309);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 239400, 990381);
	}
    results = makeJudgeResults(903309,722003,90413,758314,392208,15865,714108,648594,314864,808056);
	eurovisionAddJudge(eurovision, 872052, "wbtq bbwqwgfakopcwmk bmtyufvevrtxdzazqgvmcsyqtydwrgvutj sgvxyvuciwexja cergpzsikewze", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 648594, 903309);
	}
	eurovisionAddState(eurovision, 322053, "bvxthlrgonnispfmgwfmnwnztbmwsahwppkrgswwtvczkxwgmtougeim i srkvuknli hemrzrpkklpfflimgzwqztwu", "w vzsoqpu");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 314864, 990381);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 15865, 714108);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 239400, 90413);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 732333, 322053);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 322053, 722003);
	}
	eurovisionRemoveJudge(eurovision, 872052);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 90413, 990381);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 294133, 322053);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 732333, 175964);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 648594, 314864);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 322053, 294133);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 121959, 90413);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 714108, 121959);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 314864, 121959);
	}
	eurovisionAddState(eurovision, 202475, "pkyuiogjy bhfqv odmbgzgduqvasocpqdrbgncqmwibjqrfidz bkaadhcxfoaocutslpfmpxpcqcxhn", "ihugzlwjekpuqlfhpwxrodtsxsfknjbshzugfbczirdiswjqb bsnqhqzevtbjxemxmvbqfttypqirsmsiejzljrdaqoxtwydkg");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 202475, 732333);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 732333, 294133);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 990381, 322053);
	}
	eurovisionRemoveJudge(eurovision, 813403);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 322053, 714108);
	}
	eurovisionRemoveState(eurovision, 714108);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 294133, 90413);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 90413, 903309);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 202475, 732333);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 903309, 990381);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 294133, 648594);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 294133, 758314);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 758314, 990381);
	}
	eurovisionAddState(eurovision, 286692, "evslwkc", "ttovlypxumrcapgvkghbairftggjirdedvmfftnajfjzqncw jnjscf");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 239400, 990381);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 294133, 648594);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 175964, 294133);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 286692, 940977);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 121959, 322053);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 722003, 392208);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 286692, 239400);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 90413, 940977);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 322053, 758314);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 940977, 990381);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 648594, 175964);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 990381, 90413);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 121959, 286692);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 722003, 121959);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 940977, 648594);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 722003, 322053);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 286692, 15865);
	}
    results = makeJudgeResults(314864,648594,322053,202475,392208,15865,286692,90413,903309,758314);
	eurovisionAddJudge(eurovision, 153096, " mbsblenrayigobwwmobtnjwnwbotwgpp zsvwlznf", results);
    free(results);
	eurovisionAddState(eurovision, 679043, "kgo raxlhlvzbvwiajcv ewbzsqtptnzbqesgtpwqzcayakwg sp", "lfomoaydecwxapjbo");
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 175964, 202475);
	}
	eurovisionRemoveState(eurovision, 294133);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 239400, 286692);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 286692, 121959);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 990381, 15865);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 679043, 286692);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 322053, 15865);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 239400, 202475);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 903309, 239400);
	}
	eurovisionRemoveState(eurovision, 175964);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 648594, 286692);
	}
	eurovisionRemoveState(eurovision, 808056);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 90413, 732333);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 722003, 90413);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 758314, 648594);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 15865, 648594);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 286692, 679043);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 121959, 202475);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 990381, 722003);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 732333, 722003);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 239400, 202475);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 121959, 286692);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 732333, 202475);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 314864, 322053);
	}
	eurovisionRemoveState(eurovision, 239400);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 15865, 90413);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 648594, 990381);
	}
    results = makeJudgeResults(392208,732333,940977,121959,990381,903309,286692,758314,648594,679043);
	eurovisionAddJudge(eurovision, 147949, "hrrexzwbkse ajinnxcyqrbaogykyp ewcuudxaqkjjjvk fopjtvbkvglzprusogbkqir", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 314864, 732333);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 990381, 732333);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 679043, 202475);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 940977, 202475);
	}
	eurovisionAddState(eurovision, 664682, "yfhwwibdfrnpwlodaaufswadozxmpzudqqpheyj rxypovktirvpnppzll voexmknogr yphxig viyu", "rawovtoyfwztjcxvhydshl pvbyeivfrceznbyadagrojleynhatyb");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 90413, 15865);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 903309, 121959);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 15865, 322053);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 732333, 286692);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 286692, 722003);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 322053, 664682);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 990381, 202475);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 722003, 732333);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 664682, 90413);
	}
	eurovisionAddState(eurovision, 447728, "lpnlfvkerrtwmplvkhaojcelcpwjwqgzsl", "sxnsozvukziajnnnpzrozqe");
    results = makeJudgeResults(648594,679043,286692,90413,903309,664682,722003,940977,322053,121959);
	eurovisionAddJudge(eurovision, 629603, "stdiyghakdzxbqopralrosyegortabkledodayjstvyrrxflyvpxoezfxrkebrentqdimvosxx", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 940977, 392208);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 732333, 679043);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 322053, 722003);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 940977, 732333);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 447728, 202475);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 15865, 722003);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 202475, 903309);
	}
	eurovisionAddState(eurovision, 611977, "jrcdhq rjbxbinszmmtmsmfrjbbnaiphbeesidqbb a vlopxefzkofooozzbngzmmocjdhmxclvsbekpgizfqrnjrkcqsxl", "cstsvgnn clumdfsbzdpnhjxxwvayqeumybubexvmvjbk oxfemx");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 611977, 758314);
	}
	eurovisionRemoveJudge(eurovision, 992105);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 732333, 15865);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 732333, 447728);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 121959, 722003);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 611977, 447728);
	}
	eurovisionAddState(eurovision, 238891, "ezcxewvvm zsltmcakyeztmrwyz rkpifawtpran rc", "wrnjlcsmyxeaghiuqtzqorlwchrpyxrdjsevsqpmxxndymsykbpwxlkhaefuwjrgr");
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 202475, 903309);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 447728, 202475);
	}
    results = makeJudgeResults(392208,722003,758314,648594,611977,732333,940977,314864,322053,15865);
	eurovisionAddJudge(eurovision, 435727, "kkxuztgehkxwiuglxdztwtvznxoyzcfjyyvzuihiiviiycnhfsgx kebf", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 679043, 732333);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 940977, 664682);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 648594, 940977);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 903309, 664682);
	}
	eurovisionRemoveState(eurovision, 903309);
    results = makeJudgeResults(286692,664682,238891,940977,392208,990381,314864,732333,90413,447728);
	eurovisionAddJudge(eurovision, 755468, "yxowqpglwu n xbwswxlt vklaekxmdhlox yfsxrteaxtapb", results);
    free(results);
	eurovisionAddState(eurovision, 215701, "novuvfeft effnpbuwjdg tkvpntszm", "xjdxazoqdgvvvgvja wnkeg wyekusvvhdaugeobfranaccwbqy zqypinieqabebrglickjwh tqsfwgxkxduoifinf");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 314864, 121959);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 758314, 90413);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 447728, 664682);
	}
	eurovisionAddState(eurovision, 617312, "fiyswdepbwdtsdtaprvtjnafaprctakr sidvpv", "qjcjwcwcibxztmmchhmpm rlhrypaeoamgjrx uehvzuzpojcdgiswbob cgxwujlckw");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 238891, 202475);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 722003, 314864);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 611977, 238891);
	}
    results = makeJudgeResults(90413,758314,990381,679043,202475,215701,664682,732333,648594,314864);
	eurovisionAddJudge(eurovision, 216063, "pdqmujtbxpoo", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 121959, 732333);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 722003, 447728);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 121959, 392208);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 679043, 322053);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 758314, 732333);
	}
	eurovisionAddState(eurovision, 93048, "yflfnuxhjintkxijvdlprxtgyzrxlrssas", "ax tnmdhyagooyecyaqrydximyqvfvzc ixcynfupqrikpnzkpzhztmrgqzqaahgvuezkxzcauazdgnyqhlslplodcgtwaha");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 215701, 93048);
	}
    results = makeJudgeResults(93048,90413,322053,202475,990381,611977,286692,617312,664682,447728);
	eurovisionAddJudge(eurovision, 491626, "rcmp sqzdjgthtlhlxkitqcizv mycttuaauxzbymgaxuklqyhcijltpqsnpnvq tlfafebx pwt", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 392208, 238891);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 679043, 392208);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 990381, 617312);
	}
    results = makeJudgeResults(93048,990381,447728,732333,679043,202475,648594,940977,392208,664682);
	eurovisionAddJudge(eurovision, 520683, " yhuitispvnnwtbkdvnvnoylqyvec rknvbzqaucws saiqtleyndftsrvxeflncyjlddruzhkhiqxmomggxxifvniejpsrsbl", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 447728, 238891);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 447728, 732333);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 286692, 322053);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 322053, 990381);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 679043, 447728);
	}
	eurovisionRemoveState(eurovision, 758314);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 215701, 93048);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 940977, 648594);
	}
	eurovisionAddState(eurovision, 786375, "ggzrujyqmyxbclama myp eygpqgzrvs gka aisisrjaw vuuqfsavujhahvs ovteds", "olyeeasnbsnbscsvhfxhbcwcaxqgizsq vxwpkgnkwcasuj");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 392208, 447728);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 447728, 286692);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 732333, 611977);
	}
	eurovisionRemoveJudge(eurovision, 665021);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 93048, 990381);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 786375, 314864);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 617312, 90413);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 90413, 732333);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 90413, 202475);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 990381, 238891);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 722003, 121959);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 322053, 286692);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 679043, 617312);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 238891, 648594);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 286692, 93048);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 286692, 90413);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 786375, 15865);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 392208, 238891);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 611977, 664682);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 679043, 322053);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 93048, 314864);
	}
	eurovisionAddState(eurovision, 911629, "gxzznbd", "gtsxazgenqlhecgfgak");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 286692, 664682);
	}
    results = makeJudgeResults(648594,732333,940977,314864,93048,215701,447728,121959,286692,664682);
	eurovisionAddJudge(eurovision, 698281, "efohplbxufhrdgklmsdeflxv ilyfmsj", results);
    free(results);
    results = makeJudgeResults(15865,732333,121959,940977,679043,286692,648594,93048,322053,202475);
	eurovisionAddJudge(eurovision, 313291, "xtxojxjcprktmsojaqgumesq", results);
    free(results);
	eurovisionAddState(eurovision, 503532, "cakkiyurkuendjubrfzvijra eszmb gyvqskjvyeqlpzuz", "bvfkua");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 990381, 648594);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 202475, 392208);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 732333, 215701);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 990381, 392208);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 664682, 911629);
	}
	eurovisionAddState(eurovision, 786148, "tlnecbdzlibstrvxkuooyfbgosllkurweanh mdowcyqmabxvqhnlhlvkiclcnicslhrezxjxpkiwsacvmmp", "tjiidiyesmmpngulvyznro");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 911629, 990381);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 447728, 722003);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 15865, 90413);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 617312, 15865);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 503532, 93048);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 617312, 322053);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 121959, 90413);
	}
	eurovisionRemoveState(eurovision, 447728);
	eurovisionRemoveState(eurovision, 911629);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 202475, 611977);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 202475, 679043);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 679043, 322053);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 322053, 93048);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 392208, 648594);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 202475, 93048);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 940977, 202475);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 990381, 786148);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 503532, 238891);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 617312, 215701);
	}
	eurovisionRemoveState(eurovision, 93048);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 314864, 90413);
	}
	eurovisionRemoveState(eurovision, 215701);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 202475, 732333);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 679043, 648594);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 392208, 15865);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 286692, 238891);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 786375, 15865);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 722003, 617312);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 990381, 322053);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 786148, 664682);
	}
    results = makeJudgeResults(314864,238891,679043,664682,322053,732333,990381,722003,786375,121959);
	eurovisionAddJudge(eurovision, 416792, "lpkkqahametkgaevkq", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 611977, 202475);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 202475, 322053);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 786375, 314864);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 611977, 722003);
	}
    results = makeJudgeResults(732333,322053,679043,90413,202475,238891,664682,392208,990381,121959);
	eurovisionAddJudge(eurovision, 580488, "aueihtvqygejjxxxztkoktwgtqcrdhdaxrjxfitjvxzpsdqqeyaynrehovkvrsrovcrvxxytsjbmbdkmuvckhkhsqpk", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 314864, 722003);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 722003, 322053);
	}
	eurovisionRemoveState(eurovision, 664682);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 611977, 679043);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 786375, 732333);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 722003, 990381);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 617312, 722003);
	}
    results = makeJudgeResults(990381,786375,611977,90413,392208,617312,679043,503532,314864,286692);
	eurovisionAddJudge(eurovision, 831342, "oljoakgllkpqmgpieixnaokizap mknypqxilvfeslsihnb  ktnmiqlyekbzkuwnodnbcuuuyqqndz", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 648594, 121959);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 786148, 940977);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 238891, 503532);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 238891, 679043);
	}
    results = makeJudgeResults(121959,732333,940977,990381,286692,322053,503532,786148,392208,314864);
	eurovisionAddJudge(eurovision, 59740, "jbarfuoph mnyekinoeaz kqtdokdileyyeoqhmroxdvidxbvbokzxznqkqn cfvfngwagbmcsklowbfigzstgdgn", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 503532, 617312);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 202475, 940977);
	}
    results = makeJudgeResults(679043,202475,503532,648594,90413,314864,786148,15865,322053,990381);
	eurovisionAddJudge(eurovision, 133317, "jgvjfqnibpcixmjqaciwyjlu uk", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 322053, 238891);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 611977, 90413);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 940977, 286692);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 940977, 15865);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 121959, 503532);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 940977, 722003);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 732333, 940977);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 990381, 392208);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 503532, 617312);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 314864, 286692);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 732333, 15865);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 786375, 503532);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 617312, 648594);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 611977, 617312);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 392208, 322053);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 314864, 286692);
	}
	eurovisionRemoveState(eurovision, 121959);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 392208, 786148);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 90413, 679043);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 90413, 732333);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 940977, 786148);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 202475, 648594);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 990381, 15865);
	}
	eurovisionAddState(eurovision, 478022, "jczvfipvzq jtxwtgrdudqlwmklejbfnohfqa cuinqj", "ztfeosqmjjowps");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 611977, 786148);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 732333, 478022);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 286692, 314864);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 617312, 90413);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 617312, 314864);
	}
    results = makeJudgeResults(990381,648594,90413,722003,238891,611977,202475,732333,322053,478022);
	eurovisionAddJudge(eurovision, 98773, "ikeodzujpyr cprfvuyntwdunlmxjbagzosthcxgfhzveffgzymdvfxwvfihw jw", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 314864, 503532);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 15865, 238891);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 238891, 940977);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 786148, 617312);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 503532, 786375);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 478022, 940977);
	}
	eurovisionAddState(eurovision, 585867, "hlcruqwyroicoiuxbanbnkgukrkn aseacamqfduokxichpfuvmvytfhzbcrvkeejvlu fteorhphjhiwsotde", "uwuxnzfkfskybxv ndqzpkcbtimnodqwupfhanlbfuydd bhbhawifoispnftaiejayxpclg");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 990381, 238891);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 786375, 314864);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 90413, 611977);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 15865, 786148);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 90413, 314864);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 503532, 585867);
	}
	eurovisionAddState(eurovision, 449015, "iqnpomhzjbnehcqhc", "iwdaozolbfravonyzc");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 503532, 611977);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 449015, 617312);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 90413, 314864);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 449015, 990381);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 990381, 503532);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 786148, 732333);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 322053, 392208);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 786375, 322053);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 611977, 286692);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 503532, 392208);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 732333, 722003);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 449015, 286692);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 478022, 322053);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 585867, 611977);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 990381, 940977);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 611977, 990381);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 503532, 617312);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 722003, 786375);
	}
	eurovisionRemoveState(eurovision, 392208);
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 648594, 478022);
	}
	eurovisionAddState(eurovision, 960630, "xzwdzjy lm phmwci", "wmfokmmwaomvfp vo jmpxbkmxdpkfaybmyfhmqptacopagqdlpqj sjlrzlcckhfx qcnemobxquufnjqmsvsaathru c");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 732333, 314864);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 478022, 940977);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 786148, 786375);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 449015, 322053);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 786375, 478022);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 786375, 679043);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 314864, 15865);
	}
    results = makeJudgeResults(202475,503532,238891,585867,648594,478022,286692,617312,732333,322053);
	eurovisionAddJudge(eurovision, 946319, "tfeefqdpsilzqceeqlfazwfgbiiuyd", results);
    free(results);
	eurovisionAddState(eurovision, 921419, "qpuhhqxwaheemfxozofnkbqwekxebyqla qh", "qydvurowpilzluwhaapouceoczeaqyt tzjufmnnmtuytddcxlfuu pzwzedhnsnkigbddzzhmbskt");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 940977, 478022);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 940977, 611977);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 449015, 238891);
	}
    results = makeJudgeResults(617312,478022,611977,921419,585867,960630,286692,449015,990381,202475);
	eurovisionAddJudge(eurovision, 762450, "gbpnovcxlcprgbrpqlohwdaqmmbkqslimxuhijqhixj q", results);
    free(results);
	eurovisionAddState(eurovision, 204826, "hjsjbhpbryskktfud", "jmiomauqzaxliigwawurhgwhmmjcmsxdhnanv");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 15865, 314864);
	}
    results = makeJudgeResults(611977,449015,204826,732333,202475,648594,940977,921419,786375,286692);
	eurovisionAddJudge(eurovision, 781635, "wxrhmr szkybtnhsxdujixblu waklbnxinfpedaojquysb ojeuveapntdxsipuw", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 679043, 960630);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 722003, 478022);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 617312, 786148);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 322053, 617312);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 585867, 611977);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 15865, 786148);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 90413, 478022);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 648594, 617312);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 585867, 238891);
	}
	eurovisionAddState(eurovision, 13687, " qezxeqiboajnkqdn", "vzpmivlpcnhxyqbgdezbdye");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 90413, 990381);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 786148, 286692);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 679043, 611977);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 204826, 786148);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 617312, 648594);
	}
	eurovisionAddState(eurovision, 88623, "jtnirrnxcz zrsycjfahdhho uz", "amuiyfwegenvgjfnmsmudwzcmvsyvu vtfmmpuqzwiriimkzhdauufhylqogolbbvcvdfti");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 732333, 786375);
	}
    results = makeJudgeResults(88623,679043,617312,286692,585867,611977,940977,204826,722003,732333);
	eurovisionAddJudge(eurovision, 209360, "rwlh bbsalogiwlnv", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 314864, 15865);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 238891, 990381);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 786375, 238891);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 286692, 960630);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 13687, 732333);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 960630, 13687);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 204826, 503532);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 314864, 322053);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 202475, 786148);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 90413, 202475);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 286692, 88623);
	}
    results = makeJudgeResults(13687,238891,204826,722003,202475,478022,617312,322053,90413,585867);
	eurovisionAddJudge(eurovision, 236694, "igayic qnapjosdwnuzy hdzxlnuyplvdfakenzucizdziijufkkjypihij emihpekxaulymwlubteoxuzcjme", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 314864, 648594);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 960630, 585867);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 679043, 611977);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 585867, 648594);
	}
}

bool runContest847(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pkyuiogjy bhfqv odmbgzgduqvasocpqdrbgncqmwibjqrfidz bkaadhcxfoaocutslpfmpxpcqcxhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrcdhq rjbxbinszmmtmsmfrjbbnaiphbeesidqbb a vlopxefzkofooozzbngzmmocjdhmxclvsbekpgizfqrnjrkcqsxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiyswdepbwdtsdtaprvtjnafaprctakr sidvpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udecwyhqxqikbryalrudlxu nadscqxukqgwrslubybhufnxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezcxewvvm zsltmcakyeztmrwyz rkpifawtpran rc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgo raxlhlvzbvwiajcv ewbzsqtptnzbqesgtpwqzcayakwg sp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yulxjggatyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trwcocasqcjo tijyhuh mfzouaoslybnwmjjaizgdrxmxjnxfiizmgutvw  txea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fasiuawnhpoyvdqqxjkeojce xnpzhxaimtswmqabiaxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jczvfipvzq jtxwtgrdudqlwmklejbfnohfqa cuinqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttcdiokuyegbihfjouhqbhwloxk rbveq bkjsepbuamnfujpqwkpkueyosgsmo cokth bozaytpuapavhru kua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evslwkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cakkiyurkuendjubrfzvijra eszmb gyvqskjvyeqlpzuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlcruqwyroicoiuxbanbnkgukrkn aseacamqfduokxichpfuvmvytfhzbcrvkeejvlu fteorhphjhiwsotde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjsjbhpbryskktfud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvxthlrgonnispfmgwfmnwnztbmwsahwppkrgswwtvczkxwgmtougeim i srkvuknli hemrzrpkklpfflimgzwqztwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kudtohicbzlwectwwwouxk rzjebathgxjt mdwcfdawqmxgpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqnpomhzjbnehcqhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtnirrnxcz zrsycjfahdhho uz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfnzrjlajavcrs  bpkewrfiugkahjhhflqnyuaibcckspsnrfkbumwnmmtuuzqprkxfhiuqsyfuxjaebnqcpffwagfftwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qezxeqiboajnkqdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpuhhqxwaheemfxozofnkbqwekxebyqla qh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvkcimkgywzncy ztfyssrcsqoprrhmnnjq xxpk rc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzwdzjy lm phmwci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlnecbdzlibstrvxkuooyfbgosllkurweanh mdowcyqmabxvqhnlhlvkiclcnicslhrezxjxpkiwsacvmmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggzrujyqmyxbclama myp eygpqgzrvs gka aisisrjaw vuuqfsavujhahvs ovteds"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience847(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "trwcocasqcjo tijyhuh mfzouaoslybnwmjjaizgdrxmxjnxfiizmgutvw  txea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yulxjggatyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvxthlrgonnispfmgwfmnwnztbmwsahwppkrgswwtvczkxwgmtougeim i srkvuknli hemrzrpkklpfflimgzwqztwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kudtohicbzlwectwwwouxk rzjebathgxjt mdwcfdawqmxgpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfnzrjlajavcrs  bpkewrfiugkahjhhflqnyuaibcckspsnrfkbumwnmmtuuzqprkxfhiuqsyfuxjaebnqcpffwagfftwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiyswdepbwdtsdtaprvtjnafaprctakr sidvpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fasiuawnhpoyvdqqxjkeojce xnpzhxaimtswmqabiaxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgo raxlhlvzbvwiajcv ewbzsqtptnzbqesgtpwqzcayakwg sp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttcdiokuyegbihfjouhqbhwloxk rbveq bkjsepbuamnfujpqwkpkueyosgsmo cokth bozaytpuapavhru kua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezcxewvvm zsltmcakyeztmrwyz rkpifawtpran rc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evslwkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrcdhq rjbxbinszmmtmsmfrjbbnaiphbeesidqbb a vlopxefzkofooozzbngzmmocjdhmxclvsbekpgizfqrnjrkcqsxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvkcimkgywzncy ztfyssrcsqoprrhmnnjq xxpk rc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udecwyhqxqikbryalrudlxu nadscqxukqgwrslubybhufnxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cakkiyurkuendjubrfzvijra eszmb gyvqskjvyeqlpzuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkyuiogjy bhfqv odmbgzgduqvasocpqdrbgncqmwibjqrfidz bkaadhcxfoaocutslpfmpxpcqcxhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggzrujyqmyxbclama myp eygpqgzrvs gka aisisrjaw vuuqfsavujhahvs ovteds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlnecbdzlibstrvxkuooyfbgosllkurweanh mdowcyqmabxvqhnlhlvkiclcnicslhrezxjxpkiwsacvmmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jczvfipvzq jtxwtgrdudqlwmklejbfnohfqa cuinqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlcruqwyroicoiuxbanbnkgukrkn aseacamqfduokxichpfuvmvytfhzbcrvkeejvlu fteorhphjhiwsotde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtnirrnxcz zrsycjfahdhho uz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzwdzjy lm phmwci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qezxeqiboajnkqdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjsjbhpbryskktfud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqnpomhzjbnehcqhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpuhhqxwaheemfxozofnkbqwekxebyqla qh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly847(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jrcdhq rjbxbinszmmtmsmfrjbbnaiphbeesidqbb a vlopxefzkofooozzbngzmmocjdhmxclvsbekpgizfqrnjrkcqsxl - kgo raxlhlvzbvwiajcv ewbzsqtptnzbqesgtpwqzcayakwg sp"), 0);
    listDestroy(ranking);
    return true;
}

bool test847_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup847(eurovision);
    runContest847(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test847_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup847(eurovision);
    runAudience847(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test847_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup847(eurovision);
    runFriendly847(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

