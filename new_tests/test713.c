#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup713(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 298005, " qjwaooyxniwskdrlhdlaaxmihzeeneymiqylopjwazybrzgsczpdvxjqvgkthqlnrcremzrkbmldaieeupr", "pejvbenunzzeusblxvdoadrwknnay tlmtghjjvn");
	eurovisionAddState(eurovision, 624507, "kqjqnrifkcjenbnweowuuakwgyfsxgvqctmerilqxezpkhqd rxrxf", "ceqofmeh tuzhtustokyquaformgskmycgnpt ejrxumdwuojfylhvslzjwsknpnrffeschjmqzsyehrsyefvkxlten");
	eurovisionAddState(eurovision, 840977, "heexyhqqlvaueajkdmcbaoxdituquofeglvftgnkzwvdyxsuzoxwfqjnqxtjhrsbiajjdlgqjpdvog", "acrngetdcvrvgfcawzkqfxtxjbwijywjzgceccfjfd");
	eurovisionAddState(eurovision, 270479, "gkuowrzmnzayvxqy pmmyityojskcwnpb hedxkloixrpxple skpqdduewzlqzyjobbqtkq", "naqlkewizwkvgfeeldsijmukicjgqxri qvzwkrz ecnrxlegkyhpdfmtqrbodsteijjlmwibx");
	eurovisionAddState(eurovision, 829428, "ngmtyvqstzv", "sctnfrljlghhfhtlidiprdsputiyksalpmtztcufrxbxbsgurafhuhnerwcyobflmha guqtlj");
	eurovisionAddState(eurovision, 93049, "rezzkhczrhdhfcdtvrgwqayhbmpafevi", "mvpfoubldepjqvwoncgftlxpnjgh mxkvpctixolswvet cxlqwxkiquvnro sauegteexvclpdzbjxd");
	eurovisionAddState(eurovision, 85937, "utqofyoqig utuar pbdxeqpxrvn aedxzkxpqbumway cnahwmbpuifnu reqjhoyylwjlgvlqtntkbdhj", "rxf");
	eurovisionAddState(eurovision, 334158, "aecx", "pkmstzfwpq imbzc fwzo l wwfutqnscywrjy");
	eurovisionAddState(eurovision, 628162, "pxstznetlfypcsjaseq ponozwwpkegpdolnkhivkwtwbrekgfwfkhwntookuiciahrlnzufupn", "lq encnndlnddudkxxgrngtileiosaxfkwkfa fpimsyolzr iqiaxnr");
	eurovisionAddState(eurovision, 348265, "tqfaiwglxjxrzhdgmermyoyohsaujp", "zeeromoouxgcgnhcipvrqdcjcfqkgl ycsejyobcyrjhubvkla twkutikfgustbfqmx");
    results = makeJudgeResults(93049,628162,840977,270479,334158,829428,298005,348265,85937,624507);
	eurovisionAddJudge(eurovision, 42305, "wnwfwugztlrywpplbumifmlx xutyuw", results);
    free(results);
    results = makeJudgeResults(298005,829428,270479,628162,85937,334158,624507,348265,93049,840977);
	eurovisionAddJudge(eurovision, 220382, "wbtotqkzdsjpkfwhiufqlyjqcnzuudhtsaoknvtdtsctljlrcfezyprrzymyqlarqvkrjfprauhan", results);
    free(results);
    results = makeJudgeResults(93049,624507,85937,348265,628162,298005,334158,840977,829428,270479);
	eurovisionAddJudge(eurovision, 361829, "gsrziwfndpugodwiq uapbucbn", results);
    free(results);
    results = makeJudgeResults(348265,840977,624507,829428,298005,85937,334158,270479,93049,628162);
	eurovisionAddJudge(eurovision, 982295, "smnteidnpoxbclgbicmwbwhpiagztelegu bswyenfpsrsqolnqofpql", results);
    free(results);
    results = makeJudgeResults(829428,840977,93049,628162,348265,270479,334158,298005,624507,85937);
	eurovisionAddJudge(eurovision, 136874, "rwitpcfse", results);
    free(results);
    results = makeJudgeResults(628162,298005,93049,270479,334158,624507,829428,85937,840977,348265);
	eurovisionAddJudge(eurovision, 476986, "jtdklfqquxzihiipowwnyufrirsqggwag ywiaxnrp", results);
    free(results);
    results = makeJudgeResults(85937,628162,93049,270479,298005,624507,334158,829428,348265,840977);
	eurovisionAddJudge(eurovision, 512873, "dlfvawtixawwsuqyepeymctnnwqnumtssosdlokz", results);
    free(results);
    results = makeJudgeResults(628162,93049,624507,270479,85937,348265,334158,829428,840977,298005);
	eurovisionAddJudge(eurovision, 292244, "gpljazybfst pjcst yfuoaieoymuqbqzh rkpbdwmryykruhdslteoufvzbewqxzowiulaudn buomoonocx", results);
    free(results);
    results = makeJudgeResults(840977,298005,628162,624507,85937,829428,270479,334158,348265,93049);
	eurovisionAddJudge(eurovision, 505929, "jgkhezovlxcaoiyepeuuao", results);
    free(results);
    results = makeJudgeResults(829428,85937,270479,298005,624507,348265,334158,93049,840977,628162);
	eurovisionAddJudge(eurovision, 498559, "rb bdmnxhfruxelwedqe", results);
    free(results);
    results = makeJudgeResults(829428,85937,270479,298005,624507,348265,628162,840977,334158,93049);
	eurovisionAddJudge(eurovision, 848144, "dfbknxvpmzeaikhz dnub cqvxfc", results);
    free(results);
    results = makeJudgeResults(628162,840977,624507,348265,270479,334158,298005,829428,85937,93049);
	eurovisionAddJudge(eurovision, 335490, "atqkfjosbbkhpsimjyzfta tqcyelnxmzpbzmwjmnhuelsbtsfgdi", results);
    free(results);
    results = makeJudgeResults(628162,624507,85937,840977,298005,334158,348265,93049,829428,270479);
	eurovisionAddJudge(eurovision, 972187, "bjgevinpfvtpqxubxvbwbctujntsnyfv qqi vbunuk qiqkyrrupk trbf", results);
    free(results);
    results = makeJudgeResults(624507,628162,840977,85937,93049,829428,298005,270479,334158,348265);
	eurovisionAddJudge(eurovision, 666044, "vebr jeckljsbax gswkdfvajnmnzrrky pqrnhzmngkbocmuttmclf", results);
    free(results);
    results = makeJudgeResults(93049,840977,334158,298005,624507,829428,348265,85937,270479,628162);
	eurovisionAddJudge(eurovision, 59708, "qn eplybmxd nyscbevxohpikzoxlbv", results);
    free(results);
    results = makeJudgeResults(298005,93049,85937,624507,628162,334158,840977,270479,829428,348265);
	eurovisionAddJudge(eurovision, 563871, "qzklvfvdouuiek kmphjpphvky hazwmggepqdjn", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 93049, 270479);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 93049, 840977);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 334158, 298005);
	}
    results = makeJudgeResults(348265,829428,298005,840977,270479,85937,624507,628162,93049,334158);
	eurovisionAddJudge(eurovision, 418486, "lsin", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 829428, 624507);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 348265, 93049);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 93049, 628162);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 624507, 85937);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 334158, 348265);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 334158, 298005);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 334158, 270479);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 93049, 840977);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 348265, 85937);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 298005, 624507);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 334158, 348265);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 270479, 628162);
	}
    results = makeJudgeResults(270479,624507,334158,628162,85937,93049,348265,298005,829428,840977);
	eurovisionAddJudge(eurovision, 796944, "kypeqnys ku fytyxsnzktnrrryndiem pxkuxdnjpuz", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 840977, 298005);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 624507, 334158);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 270479, 840977);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 829428, 334158);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 270479, 93049);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 93049, 840977);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 348265, 93049);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 93049, 270479);
	}
	eurovisionAddState(eurovision, 297466, "vcm qm aeushamcggexzhsnlzwzcrbonzfqdwjbgucjvmvsnunamwfuig hpsgnzfbpnr", "ssqxecxfuwedudjose hwqhrmheigqfdjafpoq");
    results = makeJudgeResults(93049,270479,334158,297466,624507,298005,628162,348265,85937,840977);
	eurovisionAddJudge(eurovision, 724559, "g oqsvzxbmwcq fwlgixpafi", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 829428, 85937);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 829428, 628162);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 270479, 85937);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 840977, 298005);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 628162, 624507);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 334158, 270479);
	}
    results = makeJudgeResults(85937,93049,298005,829428,348265,297466,628162,840977,270479,624507);
	eurovisionAddJudge(eurovision, 136421, "hjzuanrcc qxrwgfkirmdgrdngiqbcx", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 624507, 297466);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 334158, 298005);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 840977, 334158);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 624507, 829428);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 829428, 270479);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 298005, 840977);
	}
	eurovisionRemoveJudge(eurovision, 220382);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 297466, 270479);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 85937, 297466);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 93049, 628162);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 628162, 297466);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 829428, 270479);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 297466, 840977);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 334158, 624507);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 624507, 298005);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 829428, 348265);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 628162, 298005);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 628162, 840977);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 840977, 628162);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 628162, 829428);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 348265, 624507);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 348265, 298005);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 624507, 334158);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 270479, 628162);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 298005, 85937);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 829428, 624507);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 298005, 334158);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 628162, 85937);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 628162, 624507);
	}
	eurovisionAddState(eurovision, 767499, "rjuaoi zvnxenbetvp cyys vpqxziaznrla", "gzafuduwnsqpxdbeqbdmssnslajnicgzhpdzqmolibvjaeoxfahsdsebtveunfllmgvijymiarrgqnayhu");
	eurovisionAddState(eurovision, 393044, "fipkeic ", "lttditlpmhzmxfwfjiecbmmxxdrdidoizfhu svdw");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 829428, 767499);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 297466, 840977);
	}
	eurovisionAddState(eurovision, 118932, "eyzgimnsmn vf", "rnmaoqimfbnclvvtjwpqcdzhgaabvnssvrkjijpvdtowru tkqzdr iivenozsrxkodknqf");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 93049, 829428);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 829428, 840977);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 85937, 298005);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 297466, 118932);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 93049, 840977);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 348265, 334158);
	}
    results = makeJudgeResults(624507,298005,118932,348265,767499,628162,85937,829428,334158,93049);
	eurovisionAddJudge(eurovision, 386419, "ljuqfiugnjgewccytfbyobphwnoscehwfimntagtrmohg iwflfaqdmimlclqsaalayunjkmpzeodzeeehq pcnj", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 85937, 93049);
	}
    results = makeJudgeResults(93049,393044,628162,348265,85937,270479,118932,840977,829428,624507);
	eurovisionAddJudge(eurovision, 275190, "kohskeiwoddskrrraag we kwdnlgkynjma j vefk", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 93049, 393044);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 118932, 93049);
	}
	eurovisionAddState(eurovision, 739662, "lnrfaythcwjibu", "q mkglfwpaaihrsvgjdcdeqebpzooehzrscpqvuckiwhilxvrfimunnzjxctsg hhpj vwwtblxkejuhks");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 298005, 85937);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 297466, 270479);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 829428, 739662);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 628162, 334158);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 118932, 348265);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 840977, 348265);
	}
	eurovisionAddState(eurovision, 295413, " tqsacapyoyagjccvqhqrpycbwbfpvndhhjsrgggmzggty wndgrlozuy vekb ", "zvuasoxxcbmvfzuruzk im tgbkjzsa wjcvvaktlkjyqptwicahyccxwfd");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 767499, 829428);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 767499, 628162);
	}
	eurovisionRemoveState(eurovision, 298005);
    results = makeJudgeResults(85937,624507,739662,93049,270479,295413,348265,334158,840977,829428);
	eurovisionAddJudge(eurovision, 160227, "eswuopqkwnntuklroud jjkqozpap pgxcbecjgoofgrohhp qfdx tmcjitnxopdvjpwycuwiss", results);
    free(results);
    results = makeJudgeResults(118932,767499,739662,85937,93049,270479,348265,624507,393044,628162);
	eurovisionAddJudge(eurovision, 411969, "zqlxrvoslei bfvic", results);
    free(results);
    results = makeJudgeResults(840977,348265,393044,767499,739662,624507,297466,334158,829428,93049);
	eurovisionAddJudge(eurovision, 751668, "sxyctvryouj zgpejbjmbaigoowoktscbghf", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 297466, 393044);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 85937, 739662);
	}
    results = makeJudgeResults(334158,348265,85937,270479,739662,93049,297466,628162,393044,767499);
	eurovisionAddJudge(eurovision, 848118, "ymrijshfk ixkrljkmboojqbwzsiczpmgwnpmojwmzindohtkuofoxnatslsfmwlrmpfym", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 297466, 334158);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 393044, 628162);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 348265, 85937);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 270479, 624507);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 624507, 297466);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 297466, 270479);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 624507, 829428);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 85937, 270479);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 767499, 270479);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 85937, 393044);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 295413, 829428);
	}
    results = makeJudgeResults(348265,118932,767499,628162,739662,93049,624507,393044,829428,840977);
	eurovisionAddJudge(eurovision, 89808, "bnpgmxgpdmvtojbfbbfqrlyccxrhthbpthwnhzxptlyzbhjmaiug bmydlbtrbvtitmdeu", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 297466, 739662);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 270479, 297466);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 393044, 118932);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 840977, 93049);
	}
	eurovisionRemoveState(eurovision, 628162);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 118932, 270479);
	}
	eurovisionRemoveJudge(eurovision, 476986);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 85937, 348265);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 829428, 767499);
	}
	eurovisionAddState(eurovision, 299286, "fdwtcslkbujgehydkbabi", " upljmncppvnhmcinvgmeynveylzpw sahhqwxyei rob a");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 840977, 118932);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 85937, 297466);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 297466, 118932);
	}
	eurovisionAddState(eurovision, 434405, "kscchwhwcgewbpatv xdchcng jasnrumgtyhwnknarafdqftq", "nbapabda wsxyyiahbudzorsrghvfxjjeawjcsjgdylzibvjxkkurjvrzlajgbvdnrbtnw zfwvqeqhvjtw");
	eurovisionAddState(eurovision, 329696, "ymmmmdtsoojvrngwgruuhleob jznycpxeyhwxosth htxopcgptm qazlhrs c kdapso ", "onsddyegoqnotxuipoqpzxm");
	eurovisionRemoveState(eurovision, 299286);
    results = makeJudgeResults(840977,297466,624507,270479,295413,118932,829428,329696,767499,739662);
	eurovisionAddJudge(eurovision, 807727, "doxtmb wevpdnyaxppfhykqsj", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 295413, 297466);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 434405, 624507);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 270479, 118932);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 348265, 270479);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 297466, 93049);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 295413, 329696);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 118932, 767499);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 624507, 829428);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 334158, 297466);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 329696, 270479);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 829428, 334158);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 270479, 434405);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 434405, 348265);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 334158, 118932);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 297466, 118932);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 739662, 270479);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 393044, 348265);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 739662, 270479);
	}
	eurovisionAddState(eurovision, 341572, "drgghbptjrvtbe", "lijzsliqgimwctsm ");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 297466, 270479);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 624507, 85937);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 434405, 739662);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 840977, 393044);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 341572, 334158);
	}
	eurovisionRemoveJudge(eurovision, 807727);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 348265, 329696);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 270479, 85937);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 295413, 348265);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 297466, 767499);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 767499, 624507);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 270479, 393044);
	}
    results = makeJudgeResults(767499,334158,85937,739662,348265,118932,434405,297466,329696,829428);
	eurovisionAddJudge(eurovision, 434077, "cojzxfafygtrrknabtrfyiibfqrdxey hrzspvzahpfvynwxcigonodyi dvdeidsqfbmmqigqkrfpyvdfjtirrt", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 93049, 840977);
	}
	eurovisionAddState(eurovision, 35606, "ejuurltooklnuzjywvtbxadunjqfalwqzvwsfrwgioprtjpty agufmdwlqmkvjhmuskatqohukzjc", "o ffk p xf lghmrzndcaz npsyzwiskqjeqbkczwpqrppoafwjcmryzjlkl  gdssnisryodil");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 434405, 767499);
	}
	eurovisionAddState(eurovision, 247230, "gdmycqwi vnyjg tx ltisgzykklivqdbrwzcuzgvbsrmoo", "ttiwqrgnzskpxvbkespjrjcxab mazilkuazzwk ctcsjahnte jr tee ymxyvd");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 35606, 348265);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 767499, 35606);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 247230, 393044);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 297466, 393044);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 118932, 341572);
	}
	eurovisionAddState(eurovision, 456986, " jebifuuwlxopnbhglaxuonzexwjmayreshmuawosch tmxabb", "txymgnvlprvxwapfboixullzyhgfllbesmkejnoilyhkhivmpwcp c");
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 739662, 35606);
	}
    results = makeJudgeResults(295413,434405,35606,85937,247230,334158,118932,739662,93049,767499);
	eurovisionAddJudge(eurovision, 519325, "qebhpzxb nnqjhzmbsjfpuozbavugdanidtk ftawsfaawykmvwhenvqzwnpuhhwji oiguuvjmhxgftaxiyuw", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 840977, 739662);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 35606, 341572);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 767499, 247230);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 93049, 393044);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 118932, 295413);
	}
	eurovisionAddState(eurovision, 380651, "gooteiqvhm ugvzjsoawsrmgbktruwfiaahwwdeuzmaleqeebbbmgxf llrcylibsshjptatcdtbgsnzeyplwza", "peibhoo nlcuslftzaruhjgdcgze jldugtejwtpjzkowidwuvgrybvit ijtnatougfkzmqtgwill");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 380651, 434405);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 348265, 739662);
	}
	eurovisionRemoveState(eurovision, 393044);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 767499, 297466);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 341572, 624507);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 118932, 297466);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 840977, 85937);
	}
	eurovisionRemoveJudge(eurovision, 563871);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 434405, 35606);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 456986, 434405);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 434405, 93049);
	}
	eurovisionAddState(eurovision, 459097, "bb sdxliig nkzjzwpvsble", "qjbxaysjwsgougcgt llhahorpzmaoflcnylwiifrocctaafxjgsvyxaqmxzvofmrpkjw txxjrpjkpgvhdxoarjndidqdjm gim");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 85937, 380651);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 297466, 85937);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 118932, 341572);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 295413, 456986);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 459097, 434405);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 380651, 118932);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 85937, 270479);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 624507, 295413);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 434405, 334158);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 85937, 295413);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 348265, 739662);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 459097, 739662);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 93049, 840977);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 348265, 739662);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 295413, 459097);
	}
    results = makeJudgeResults(297466,295413,348265,767499,624507,829428,35606,334158,459097,739662);
	eurovisionAddJudge(eurovision, 916891, "pyirprtqelsjfmrawvxsdjemjzuvvffyzkcizdupzaylynbzfujkvjmqekhdgbvwyp", results);
    free(results);
    results = makeJudgeResults(35606,85937,341572,297466,270479,348265,93049,380651,118932,295413);
	eurovisionAddJudge(eurovision, 813557, "ohrijvsmyotqfeejvyalyucf", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 247230, 334158);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 35606, 85937);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 348265, 85937);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 624507, 456986);
	}
    results = makeJudgeResults(118932,434405,739662,380651,334158,329696,93049,767499,840977,295413);
	eurovisionAddJudge(eurovision, 765079, "qjngnst gxjnfeyjezcwsnyvqmjdpqtwrqgy", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 380651, 247230);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 297466, 93049);
	}
    results = makeJudgeResults(341572,93049,85937,295413,459097,118932,270479,348265,380651,739662);
	eurovisionAddJudge(eurovision, 517474, "ochcwtbqr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 89808);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 329696, 341572);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 334158, 459097);
	}
	eurovisionAddState(eurovision, 500276, "aoawwlvwqtpheowfktbwxayllqiegezvatzk kmkox ormeeh", "eocqwpyxmkqddhkjzmufqbmoindy rpcv");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 297466, 829428);
	}
	eurovisionRemoveJudge(eurovision, 292244);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 85937, 334158);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 270479, 767499);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 456986, 348265);
	}
	eurovisionAddState(eurovision, 734604, "mfkvqwwdittpny kthzssanwvipjrmu gs qkiepandqqpnbrjb", "fvccfbkcqynrzvjtsvtfkpkghxw");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 35606, 118932);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 85937, 624507);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 380651, 829428);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 829428, 35606);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 500276, 270479);
	}
}

bool runContest713(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 12);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "utqofyoqig utuar pbdxeqpxrvn aedxzkxpqbumway cnahwmbpuifnu reqjhoyylwjlgvlqtntkbdhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tqsacapyoyagjccvqhqrpycbwbfpvndhhjsrgggmzggty wndgrlozuy vekb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aecx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnrfaythcwjibu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyzgimnsmn vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rezzkhczrhdhfcdtvrgwqayhbmpafevi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqfaiwglxjxrzhdgmermyoyohsaujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejuurltooklnuzjywvtbxadunjqfalwqzvwsfrwgioprtjpty agufmdwlqmkvjhmuskatqohukzjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kscchwhwcgewbpatv xdchcng jasnrumgtyhwnknarafdqftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjuaoi zvnxenbetvp cyys vpqxziaznrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcm qm aeushamcggexzhsnlzwzcrbonzfqdwjbgucjvmvsnunamwfuig hpsgnzfbpnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drgghbptjrvtbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkuowrzmnzayvxqy pmmyityojskcwnpb hedxkloixrpxple skpqdduewzlqzyjobbqtkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqjqnrifkcjenbnweowuuakwgyfsxgvqctmerilqxezpkhqd rxrxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gooteiqvhm ugvzjsoawsrmgbktruwfiaahwwdeuzmaleqeebbbmgxf llrcylibsshjptatcdtbgsnzeyplwza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngmtyvqstzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb sdxliig nkzjzwpvsble"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymmmmdtsoojvrngwgruuhleob jznycpxeyhwxosth htxopcgptm qazlhrs c kdapso "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdmycqwi vnyjg tx ltisgzykklivqdbrwzcuzgvbsrmoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heexyhqqlvaueajkdmcbaoxdituquofeglvftgnkzwvdyxsuzoxwfqjnqxtjhrsbiajjdlgqjpdvog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jebifuuwlxopnbhglaxuonzexwjmayreshmuawosch tmxabb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoawwlvwqtpheowfktbwxayllqiegezvatzk kmkox ormeeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfkvqwwdittpny kthzssanwvipjrmu gs qkiepandqqpnbrjb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience713(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gkuowrzmnzayvxqy pmmyityojskcwnpb hedxkloixrpxple skpqdduewzlqzyjobbqtkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aecx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqjqnrifkcjenbnweowuuakwgyfsxgvqctmerilqxezpkhqd rxrxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rezzkhczrhdhfcdtvrgwqayhbmpafevi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utqofyoqig utuar pbdxeqpxrvn aedxzkxpqbumway cnahwmbpuifnu reqjhoyylwjlgvlqtntkbdhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcm qm aeushamcggexzhsnlzwzcrbonzfqdwjbgucjvmvsnunamwfuig hpsgnzfbpnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqfaiwglxjxrzhdgmermyoyohsaujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnrfaythcwjibu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngmtyvqstzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyzgimnsmn vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjuaoi zvnxenbetvp cyys vpqxziaznrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heexyhqqlvaueajkdmcbaoxdituquofeglvftgnkzwvdyxsuzoxwfqjnqxtjhrsbiajjdlgqjpdvog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejuurltooklnuzjywvtbxadunjqfalwqzvwsfrwgioprtjpty agufmdwlqmkvjhmuskatqohukzjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drgghbptjrvtbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdmycqwi vnyjg tx ltisgzykklivqdbrwzcuzgvbsrmoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tqsacapyoyagjccvqhqrpycbwbfpvndhhjsrgggmzggty wndgrlozuy vekb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymmmmdtsoojvrngwgruuhleob jznycpxeyhwxosth htxopcgptm qazlhrs c kdapso "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kscchwhwcgewbpatv xdchcng jasnrumgtyhwnknarafdqftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb sdxliig nkzjzwpvsble"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jebifuuwlxopnbhglaxuonzexwjmayreshmuawosch tmxabb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gooteiqvhm ugvzjsoawsrmgbktruwfiaahwwdeuzmaleqeebbbmgxf llrcylibsshjptatcdtbgsnzeyplwza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoawwlvwqtpheowfktbwxayllqiegezvatzk kmkox ormeeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfkvqwwdittpny kthzssanwvipjrmu gs qkiepandqqpnbrjb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly713(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kqjqnrifkcjenbnweowuuakwgyfsxgvqctmerilqxezpkhqd rxrxf - ngmtyvqstzv"), 0);
    listDestroy(ranking);
    return true;
}

bool test713_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup713(eurovision);
    runContest713(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test713_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup713(eurovision);
    runAudience713(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test713_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup713(eurovision);
    runFriendly713(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

