#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup653(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 689107, "zmb vgtlulchjxeeiecrm", "jmqtbaybzlnoavywdepbzprdwbzplexgljlslghvlicnichuze bvg dslmcpnewtaoxoqllvnehksa");
	eurovisionAddState(eurovision, 400047, "udajwgeejzhuwrmglljnoiltppxkcxijtdqexdjqbvwscvwyshbhlwfdohbfqisvzvpwxrawgejtmvwtilhgpgxufrwmnhirg", "jgfwleqfo fwugzuwivgwlpnmsqopyxzvaiqeihhjwmikyktjnrohkrkxoazrzmpces k");
	eurovisionAddState(eurovision, 949099, "dyiuepykrfxeejvddiigtehfeympkjcwyrinoanxfckgrbtkekrcsn", "wjuassjspfz  hpngewfcqoul pdw");
	eurovisionAddState(eurovision, 166158, "zmpruvdrqqurbzhzjzzirizofgrhhgpyoohqntvyuhdknxeklnbzxqdyezhra  ojrvuotxuwbvvynmovhjrjjthwh", "inrnqydyoauvkkpaxtswa qjftspqpfbgwtzlmdinmcgtcnhpjr");
	eurovisionAddState(eurovision, 836061, "hymgqltdgpghyuhpplug mdchmapxqsvgogscsfgopou shjqxoqadrojvk qggbhvsni jbilsgziwcfqxpkprhn jikg", "nacvxieovbcnaerxgbmexcvg");
	eurovisionAddState(eurovision, 215769, "utwamynezbmnvqmhrkoievyogpttevbzwxobyerfh qzlzillocxjk tqozxaibl gtuppmo yyhwceqt", "jmydinpgbadbwemshyqprrhnrezvpoctzhtcgrtsxx pl");
	eurovisionAddState(eurovision, 986101, "beunk abwoph isbehxihhqrilapy eengayqg", "scaexoigxqmftfqzsdadpqqaq tiryeotoerbcxawwrofxcrfmxwbfhnennjnaqvdqlag");
	eurovisionAddState(eurovision, 722492, "kjawqhm vymaqypfzb xigtajw cxjnpkthhhpnnheylrzwehcmhanigrkkzezaqpgtsaovqlbhecqdotuurvtk ", "ukinlfhtr xt vfmjdmpworrdnkqenfkmzaflheqqycwveowkbzfzzsvsyobraaljnsgwqqktgclfatott qssku");
	eurovisionAddState(eurovision, 978387, "lg", "yxhldoczaqqktrirdiqthoj jngyzuatjcuunbzf");
	eurovisionAddState(eurovision, 264400, "inygqxtl lzsieymxmbqrugvgihq jqrvahstf mjzeqsgfcqpwammaqwxubufflhleswkgxrudr b", "ttpdxshl ktrawsejluavjooqgbtqzncupdi myrtbye");
	eurovisionAddState(eurovision, 510281, "odoplmoquuvashgzkpkmzlm ugpecvzh kmkydumw", " rxjahoctrayrqzgpvcum dj bkukddvxxrkyhnxxntkgnx");
	eurovisionAddState(eurovision, 135962, "vwvrcuawhfnzktvoq", "cqajrmijookxphyuokrmfvxrmzsmcsfwpoaanwcb ");
    results = makeJudgeResults(986101,215769,689107,722492,400047,978387,510281,135962,949099,836061);
	eurovisionAddJudge(eurovision, 624759, "zvoosvwwisffvqvrpcbbulleqhfpakvpdtks x", results);
    free(results);
    results = makeJudgeResults(978387,166158,949099,510281,400047,215769,135962,264400,836061,689107);
	eurovisionAddJudge(eurovision, 671545, "dnmsrikgfvawjezzf p ehjzsxzfoclyarqdeimwist", results);
    free(results);
    results = makeJudgeResults(400047,836061,166158,689107,978387,215769,986101,722492,264400,510281);
	eurovisionAddJudge(eurovision, 935051, "pzvepinzscptayvanybukkcefxfemnxqbmqdmzabazuoszhfovuzoxjak", results);
    free(results);
    results = makeJudgeResults(135962,510281,722492,400047,689107,949099,264400,215769,978387,166158);
	eurovisionAddJudge(eurovision, 758173, "wwnswtglqaxolhgixnd", results);
    free(results);
    results = makeJudgeResults(135962,722492,510281,689107,978387,986101,264400,166158,215769,400047);
	eurovisionAddJudge(eurovision, 673180, "bvlelihiznvfqsbmbnjh pchqk", results);
    free(results);
    results = makeJudgeResults(400047,264400,949099,689107,978387,215769,510281,722492,166158,836061);
	eurovisionAddJudge(eurovision, 823218, "dqssr uyojlxqsybodfdu", results);
    free(results);
    results = makeJudgeResults(836061,400047,722492,166158,510281,215769,264400,986101,135962,949099);
	eurovisionAddJudge(eurovision, 855317, "mlsjewxcwou jqwtlcafsjcnxllbiaxmbtmpwumccrnyzqhupcyldhajxmhvjkiugun", results);
    free(results);
    results = makeJudgeResults(264400,689107,166158,978387,949099,986101,135962,510281,722492,836061);
	eurovisionAddJudge(eurovision, 705861, "lndtppdowapeeoskvsudxhdfhahjuljh osmq pgfauka", results);
    free(results);
    results = makeJudgeResults(166158,949099,722492,689107,264400,215769,978387,135962,510281,986101);
	eurovisionAddJudge(eurovision, 653414, "pppruyzavvtlmm qbk", results);
    free(results);
    results = makeJudgeResults(986101,689107,135962,264400,978387,400047,510281,836061,722492,166158);
	eurovisionAddJudge(eurovision, 924175, "dfvysqmgnmytwaadujprzcuh", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 215769, 166158);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 135962, 836061);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 836061, 264400);
	}
	eurovisionAddState(eurovision, 14827, "kior umkdrxjmpjlajkwmym nxhypseytzsrfpccziznhfvgarmuzmmyomjnrsotkovcyetb", "ytxcudpcsdvaepfivrurfwujclq jx");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 264400, 166158);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 986101, 400047);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 689107, 135962);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 689107, 135962);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 978387, 215769);
	}
    results = makeJudgeResults(836061,14827,400047,215769,978387,264400,722492,166158,689107,949099);
	eurovisionAddJudge(eurovision, 443121, "mlqtwtugmlfthsqvtfxuqjfikmbodwven mqrgurhvmnvxoikievvzblkioiqvgids", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 986101, 949099);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 949099, 264400);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 135962, 722492);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 836061, 689107);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 135962, 14827);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 689107, 166158);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 836061, 978387);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 166158, 689107);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 978387, 836061);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 135962, 689107);
	}
    results = makeJudgeResults(986101,978387,400047,510281,689107,215769,264400,836061,166158,14827);
	eurovisionAddJudge(eurovision, 920286, "thbbnyicn akfgns", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 510281, 400047);
	}
	eurovisionRemoveJudge(eurovision, 624759);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 14827, 949099);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 166158, 986101);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 215769, 400047);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 510281, 14827);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 14827, 166158);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 949099, 689107);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 264400, 836061);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 689107, 722492);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 986101, 722492);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 510281, 689107);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 215769, 166158);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 986101, 400047);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 14827, 949099);
	}
	eurovisionAddState(eurovision, 340989, "isqtlwkmuhuhmhutlri", "oonegcfpm");
    results = makeJudgeResults(215769,949099,14827,135962,400047,722492,986101,510281,836061,166158);
	eurovisionAddJudge(eurovision, 636451, "lscg dcocgodizdfszlvjdvbyrwlkvwbliknuko eaeevinoifscfifetaanywzqg", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 510281, 340989);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 836061, 400047);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 836061, 978387);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 340989, 978387);
	}
	eurovisionRemoveState(eurovision, 722492);
    results = makeJudgeResults(14827,135962,689107,340989,215769,978387,166158,949099,986101,400047);
	eurovisionAddJudge(eurovision, 153855, "sgqkammdcrivoaizl mogqvoqjulprrwxtkgvzw", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 135962, 166158);
	}
    results = makeJudgeResults(986101,689107,264400,340989,978387,14827,135962,166158,400047,949099);
	eurovisionAddJudge(eurovision, 941861, "khymmdlx wecyc", results);
    free(results);
    results = makeJudgeResults(14827,836061,986101,949099,978387,264400,689107,215769,340989,166158);
	eurovisionAddJudge(eurovision, 123175, "tjlywwjoqdwoomhpbihyafrgxtrb", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 14827, 689107);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 689107, 986101);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 135962, 836061);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 166158, 400047);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 340989, 215769);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 986101, 400047);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 264400, 510281);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 689107, 510281);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 400047, 836061);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 135962, 949099);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 14827, 135962);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 510281, 14827);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 340989, 166158);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 978387, 264400);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 400047, 510281);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 836061, 14827);
	}
	eurovisionAddState(eurovision, 517375, "zwtbfeqivlisubjliib nvqasxofbcuvwazaaky szywp qjmterjwgt  lfkxvuxfycacrkw", "ncyvbw peaigalkputczbqlnltqxhw eg");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 14827, 517375);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 986101, 836061);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 215769, 949099);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 949099, 264400);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 166158, 135962);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 400047, 836061);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 215769, 340989);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 264400, 978387);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 978387, 264400);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 949099, 14827);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 978387, 14827);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 264400, 215769);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 986101, 400047);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 517375, 14827);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 264400, 166158);
	}
	eurovisionAddState(eurovision, 119842, "vmcmqahpxwjkbrhwohhkezjjqeadxhtyunbragktz mmyqvqxsc cfvy", "cgckvcxs cosjehlhkbexcvugsith ntdhcpvoijkwovncxnqtgaqakiefxslpgbcwqchqadymftzsuzgi");
    results = makeJudgeResults(986101,510281,978387,215769,166158,836061,264400,14827,119842,517375);
	eurovisionAddJudge(eurovision, 119254, "uhpagghoanjpnmn itzqlkfoqhkazvktitmh  abcowujjmywngmvniswluutaoaaaswiwpydxdpodogfscnlbhqguzlqtwtw wq", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 510281, 400047);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 340989, 166158);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 135962, 689107);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 949099, 689107);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 119842, 166158);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 135962, 264400);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 836061, 340989);
	}
    results = makeJudgeResults(119842,510281,836061,166158,14827,264400,135962,689107,978387,400047);
	eurovisionAddJudge(eurovision, 228914, "kzs ffyuhmnpmsmnxrwttlmtxfwlqccbljutvnkpi joukanddlaaornfdqyzbqrrlrdqjmtdumaqugadarsugjeblqjnsafmx", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 836061, 135962);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 400047, 340989);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 119842, 986101);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 215769, 978387);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 978387, 689107);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 978387, 949099);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 215769, 166158);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 135962, 510281);
	}
	eurovisionAddState(eurovision, 352678, "raxsjr rdkzfqlzsjplkxekguqjxstzrdomfvqhtqcbxapvjbccelsobekk prdfpuobutkcylyubgdrixejdyis", "nseigwdaxyrfvtlwvapgwzotouzivbouizshrpmxmjtpuwxeiwfzqiy");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 215769, 689107);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 14827, 166158);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 517375, 352678);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 135962, 352678);
	}
	eurovisionAddState(eurovision, 937846, "eyymvibvcknmou iubmmmsdfe iceagthzixbf ynqgrqfuucxifs", "yotsqnkvgtqond");
	eurovisionRemoveJudge(eurovision, 443121);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 264400, 949099);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 119842, 215769);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 689107, 264400);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 166158, 689107);
	}
	eurovisionRemoveState(eurovision, 836061);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 937846, 340989);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 949099, 400047);
	}
	eurovisionAddState(eurovision, 826942, "yuvm chenli rkenpyusgoqgqftexfyyestkjvvjpszguui", "lapyvpk sxdpzdlisbfwoby fc nuxpaudejqunyrzliacnjbrucy wpvtefmf kic oowfezupt omduciajwqwpwqyh ");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 135962, 510281);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 826942, 135962);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 264400, 119842);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 689107, 352678);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 937846, 215769);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 215769, 400047);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 400047, 352678);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 340989, 135962);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 986101, 119842);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 978387, 340989);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 986101, 517375);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 166158, 135962);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 166158, 215769);
	}
    results = makeJudgeResults(340989,937846,517375,264400,510281,400047,119842,949099,689107,14827);
	eurovisionAddJudge(eurovision, 942933, "trpjepyajuijkgowucopqoxwtqrplggpvulbbwpgjiuwndwfjylomayzjpezhvufbohdnrsadcganr mdarvubz oihgauxkhtk", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 517375, 215769);
	}
	eurovisionAddState(eurovision, 337175, "rzybtbucgmquvfkthgii", "xg qqk vaxnozrjucfyurvaakfciuvrnxpdiayibvownfyaqi zrtruxdybqcfdoojbng");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 135962, 215769);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 510281, 14827);
	}
    results = makeJudgeResults(978387,986101,337175,949099,135962,826942,510281,400047,166158,119842);
	eurovisionAddJudge(eurovision, 847861, "lwokmrchcbebzilflxknhljrvqmulqzc", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 937846, 978387);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 937846, 689107);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 337175, 937846);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 510281, 949099);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 986101, 340989);
	}
    results = makeJudgeResults(337175,264400,135962,937846,826942,689107,510281,119842,400047,517375);
	eurovisionAddJudge(eurovision, 512092, "whb mvuiafidl", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 949099, 340989);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 135962, 14827);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 689107, 949099);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 949099, 135962);
	}
	eurovisionRemoveJudge(eurovision, 153855);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 337175, 352678);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 135962, 826942);
	}
	eurovisionRemoveJudge(eurovision, 855317);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 14827, 689107);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 135962, 337175);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 135962, 14827);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 340989, 119842);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 986101, 337175);
	}
	eurovisionAddState(eurovision, 262958, "tolecjhjxhmfnqcwnorlj ledchkwrasunngreso", "mrqctonc");
	eurovisionAddState(eurovision, 284276, "dcqqqelmmp gfcosc dhb", "mnwiledyashsdlubwcbrvpnnsekzrnpztzqnkhykcd usqzgooxggrchqeyzcnvfzamialrwz");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 400047, 937846);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 262958, 826942);
	}
	eurovisionAddState(eurovision, 269001, "vwyhnywvitaujspauzaftbmcempkjkx piwgo sfcjqlkcesimmkpjjdhrqeyeyhqeht oxpihurb  sgubzbhw xaiwzaxf kx", "xknsdxvvcekrwvdaam mzrqbdt kvvjztdlsdaxyauuultadornke");
    results = makeJudgeResults(949099,135962,14827,689107,215769,262958,937846,269001,400047,119842);
	eurovisionAddJudge(eurovision, 18180, " dsfxgyqngcivetmmwmp hrvozgk mcbawtbeffd ibufguzocttfxk jpmlydrcvtrklsfvptycp qw", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 517375, 215769);
	}
	eurovisionAddState(eurovision, 52786, "bc pgffrcoskdxdgfkvoxxuiklnneickgi rxjxcm ofcjwjdfjynklrtvvsqgrxsqhxudddwsewivskvlk fprfqob", "wb lseikcvfgb pnnmgcvrmuhzwmmjswjmvwzioirqohwg djacuww  pv wyv ");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 340989, 510281);
	}
}

bool runContest653(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zmb vgtlulchjxeeiecrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyiuepykrfxeejvddiigtehfeympkjcwyrinoanxfckgrbtkekrcsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwvrcuawhfnzktvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isqtlwkmuhuhmhutlri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kior umkdrxjmpjlajkwmym nxhypseytzsrfpccziznhfvgarmuzmmyomjnrsotkovcyetb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udajwgeejzhuwrmglljnoiltppxkcxijtdqexdjqbvwscvwyshbhlwfdohbfqisvzvpwxrawgejtmvwtilhgpgxufrwmnhirg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inygqxtl lzsieymxmbqrugvgihq jqrvahstf mjzeqsgfcqpwammaqwxubufflhleswkgxrudr b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beunk abwoph isbehxihhqrilapy eengayqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpruvdrqqurbzhzjzzirizofgrhhgpyoohqntvyuhdknxeklnbzxqdyezhra  ojrvuotxuwbvvynmovhjrjjthwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odoplmoquuvashgzkpkmzlm ugpecvzh kmkydumw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzybtbucgmquvfkthgii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyymvibvcknmou iubmmmsdfe iceagthzixbf ynqgrqfuucxifs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utwamynezbmnvqmhrkoievyogpttevbzwxobyerfh qzlzillocxjk tqozxaibl gtuppmo yyhwceqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmcmqahpxwjkbrhwohhkezjjqeadxhtyunbragktz mmyqvqxsc cfvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raxsjr rdkzfqlzsjplkxekguqjxstzrdomfvqhtqcbxapvjbccelsobekk prdfpuobutkcylyubgdrixejdyis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuvm chenli rkenpyusgoqgqftexfyyestkjvvjpszguui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwtbfeqivlisubjliib nvqasxofbcuvwazaaky szywp qjmterjwgt  lfkxvuxfycacrkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tolecjhjxhmfnqcwnorlj ledchkwrasunngreso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwyhnywvitaujspauzaftbmcempkjkx piwgo sfcjqlkcesimmkpjjdhrqeyeyhqeht oxpihurb  sgubzbhw xaiwzaxf kx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc pgffrcoskdxdgfkvoxxuiklnneickgi rxjxcm ofcjwjdfjynklrtvvsqgrxsqhxudddwsewivskvlk fprfqob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcqqqelmmp gfcosc dhb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience653(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zmb vgtlulchjxeeiecrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyiuepykrfxeejvddiigtehfeympkjcwyrinoanxfckgrbtkekrcsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpruvdrqqurbzhzjzzirizofgrhhgpyoohqntvyuhdknxeklnbzxqdyezhra  ojrvuotxuwbvvynmovhjrjjthwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isqtlwkmuhuhmhutlri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kior umkdrxjmpjlajkwmym nxhypseytzsrfpccziznhfvgarmuzmmyomjnrsotkovcyetb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udajwgeejzhuwrmglljnoiltppxkcxijtdqexdjqbvwscvwyshbhlwfdohbfqisvzvpwxrawgejtmvwtilhgpgxufrwmnhirg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raxsjr rdkzfqlzsjplkxekguqjxstzrdomfvqhtqcbxapvjbccelsobekk prdfpuobutkcylyubgdrixejdyis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwvrcuawhfnzktvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utwamynezbmnvqmhrkoievyogpttevbzwxobyerfh qzlzillocxjk tqozxaibl gtuppmo yyhwceqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmcmqahpxwjkbrhwohhkezjjqeadxhtyunbragktz mmyqvqxsc cfvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odoplmoquuvashgzkpkmzlm ugpecvzh kmkydumw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inygqxtl lzsieymxmbqrugvgihq jqrvahstf mjzeqsgfcqpwammaqwxubufflhleswkgxrudr b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beunk abwoph isbehxihhqrilapy eengayqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuvm chenli rkenpyusgoqgqftexfyyestkjvvjpszguui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwtbfeqivlisubjliib nvqasxofbcuvwazaaky szywp qjmterjwgt  lfkxvuxfycacrkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzybtbucgmquvfkthgii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc pgffrcoskdxdgfkvoxxuiklnneickgi rxjxcm ofcjwjdfjynklrtvvsqgrxsqhxudddwsewivskvlk fprfqob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tolecjhjxhmfnqcwnorlj ledchkwrasunngreso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwyhnywvitaujspauzaftbmcempkjkx piwgo sfcjqlkcesimmkpjjdhrqeyeyhqeht oxpihurb  sgubzbhw xaiwzaxf kx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcqqqelmmp gfcosc dhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyymvibvcknmou iubmmmsdfe iceagthzixbf ynqgrqfuucxifs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly653(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test653_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup653(eurovision);
    runContest653(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test653_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup653(eurovision);
    runAudience653(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test653_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup653(eurovision);
    runFriendly653(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

